#ifndef METAQQUICKLIBRARY_REGISTRY_PMOC_H
#define METAQQUICKLIBRARY_REGISTRY_PMOC_H 1

#include "Export.h"
#include <list>
#include <MetaQQuickLibrary.h>
#include <iostream>

/// not MT but remove OpenThreads dependency #define PMOC_OPENTHREADS_THREADING 1
#ifdef PMOC_OPENTHREADS_THREADING
#include <OpenThreads/ReentrantMutex>
#endif


namespace pmoc
{
	void METAQQUICKINTERFACE_PMOC_EXPORT fakedelete(QQuickItem *item);


	class METAQQUICKINTERFACE_PMOC_EXPORT DynamicLibrary
	{
	public:

		typedef void*   HANDLE;
		typedef void*   PROC_ADDRESS;

		/** returns a pointer to a DynamicLibrary object on successfully
		  * opening of library returns NULL on failure.
		  */
		static DynamicLibrary* loadLibrary(const std::string& libraryName);

		/** return name of library stripped of path.*/
		const std::string& getName() const
		{
			return _name;
		}

		/** return name of library including full path to it.*/
		const std::string& getFullName() const
		{
			return _fullName;
		}

		/** return handle to .dso/.dll dynamic library itself.*/
		HANDLE             getHandle() const
		{
			return _handle;
		}

		/** return address of function located in library.*/
		PROC_ADDRESS       getProcAddress(const std::string& procName);

	protected:

		/** get handle to library file */
		static HANDLE getLibraryHandle(const std::string& libraryName);

		/** disallow default constructor.*/
		DynamicLibrary() {}
		/** disallow copy constructor.*/
		DynamicLibrary(const DynamicLibrary&)  {}
		/** disallow copy operator.*/
		DynamicLibrary& operator = (const DynamicLibrary&)
		{
			return *this;
		}

		/** Disallow public construction so that users have to go
		  * through loadLibrary() above which returns NULL on
		  * failure, a valid DynamicLibrary object on success.
		  */
		DynamicLibrary(const std::string& name, HANDLE handle);
		~DynamicLibrary();

		HANDLE          _handle;
		std::string     _name;
		std::string     _fullName;

	};


	class METAQQUICKINTERFACE_PMOC_EXPORT MetaQQuickLibraryRegistry
	{

		static MetaQQuickLibraryRegistry* s_registry;
	public:



		static MetaQQuickLibraryRegistry* instance(bool erase = false);

		void addMetaQQuickLibrary(MetaQQuickLibrary* rw);
		void removeMetaQQuickLibrary(MetaQQuickLibrary* rw);

		MetaQQuickClass* getMetaClassByID(const ID &id);
		MetaQQuickClass* getMetaClassByTypeInfo(const std::type_info &id);
		MetaQQuickLibrary* getMetaQQuickLibraryForNamespace(const std::string& ext);
		bool interLibRelationsSetted;
		///Call it after full loading of the registry
		void setupInterLibraryRelations()
		{
			for (std::vector< pmoc::MetaQQuickLibrary* >::iterator rwit = _rwQuickList.begin(); rwit != _rwQuickList.end(); rwit++)
				//_rw->setupRelations();
				(*rwit)->setupRelations();
			interLibRelationsSetted = true;
		}


		/** create the platform specific library name associated with file.*/
		std::string createLibraryNameForFile(const std::string& fileName);

		/** create the platform specific library name associated with file extension.*/
		std::string createLibraryNameForExtension(const std::string& ext);

		/** create the platform specific library name associated with nodekit library name.*/
		std::string createLibraryNameForNodeKit(const std::string& name);


		enum LoadStatus
		{
			NOT_LOADED = 0,
			PREVIOUSLY_LOADED,
			LOADED
		};

		/** find the library in the OSG_LIBRARY_PATH and load it.*/
		LoadStatus loadLibrary(const std::string& fileName);

		/** close the attached library with specified name.*/
		bool closeLibrary(const std::string& fileName);

		/** close all libraries.*/
		void closeAllLibraries();



		std::string findLibraryFileImplementation(const std::string& fileName);



		/** initialize the Library FilePath by reading the OSG_LIBRARY_PATH
		* and the appropriate system environmental variables*/
		void initLibraryFilePathList();


		void setQmlComponentCacheActive(bool s)
		{
			_isQmlCacheActivated = s;
		}
		bool getQmlComponentCacheActive()const
		{
			return _isQmlCacheActivated;
		}

		/** get the attached library with specified name.*/
		DynamicLibrary*              getLibrary(const std::string& fileName);




	protected:

		virtual ~MetaQQuickLibraryRegistry();

		typedef std::vector<DynamicLibrary*>             DynamicLibraryList;


		/** constructor is private, as its a singleton, preventing
		construction other than via the instance() method and
		therefore ensuring only one copy is ever constructed*/
		MetaQQuickLibraryRegistry();

		bool _isQmlCacheActivated;

		/** get the attached library with specified name.*/
		DynamicLibraryList::iterator getLibraryItr(const std::string& fileName);


	protected:

		void destruct();




		typedef std::vector<  MetaQQuickLibrary * > MetaQQuickLibraryList;


		MetaQQuickLibraryList          _rwQuickList;

		DynamicLibraryList          _dlList;



		bool _openingLibrary;


		static std::string trim(const std::string& str);
#ifdef PMOC_OPENTHREADS_THREADING
		OpenThreads::ReentrantMutex _pluginMutex;
#endif
	};

	/** read the command line arguments.
	inline void readCommandLine(osg::ArgumentParser& parser)
	{
	MetaQQuickLibraryRegistry::instance()->readCommandLine(parser);
	}*/

	/** Proxy class for automatic registration of reader/writers with the Registry.*/
	template<class T>
	class RegisterMetaQQuickLibProxy
	{
	public:
		RegisterMetaQQuickLibProxy()
		{
			if (MetaQQuickLibraryRegistry::instance())
			{
				_rw = new T;

				///LOAD Dependencies
				for (std::set<std::string>::iterator it = _rw->getDependencies().begin(); it != _rw->getDependencies().end(); it++)
					MetaQQuickLibraryRegistry::instance()->getMetaQQuickLibraryForNamespace(*it);

				MetaQQuickLibraryRegistry::instance()->addMetaQQuickLibrary(_rw);
				_rw->setupRelations();

			}
		}

		~RegisterMetaQQuickLibProxy()
		{
			if (MetaQQuickLibraryRegistry::instance())
			{
				MetaQQuickLibraryRegistry::instance()->removeMetaQQuickLibrary(_rw);
			}
		}

		T* get()
		{
			return _rw;
		}

	protected:
		T* _rw;
	};



}
#define REGISTER_METAQQUICKLIBRARY(classname) \
	extern "C" void metaQQuickPlug_##classname(void) {} \
	static pmoc::RegisterMetaQQuickLibProxy<classname> g_proxyQQuick_##classname;


#define PMOCGETMETACLASS(STRING)  pmoc::MetaQQuickLibraryRegistry::instance()->getMetaClassByID(STRING)
#define PMOCMETACLASS(OBJECTREF)  pmoc::MetaQQuickLibraryRegistry::instance()->getMetaClassByTypeInfo(typeid(OBJECTREF))

///MACRO TO ADD OBJECT IN PMOC
///no control MACRO use it carefully
#define PMOCADDOBJECT(OBJECTREF) pmoc::Instance(PMOCMETACLASS(OBJECTREF) ,(void*)(&OBJECTREF),false)
///saffer MACRO
#define PMOCSAFEADDOBJECT(OBJECTREF,OUTINSTANCE) pmoc::Instance OUTINSTANCE;try{\
	OUTINSTANCE = pmoc::Instance(PMOCMETACLASS(OBJECTREF), (void*)(&OBJECTREF), false); \
}\
catch (std::bad_typeid& bt)\
{\
std::cerr << "bad_typeid caught: " << bt.what() << '\n'; \
}
///use this MACRO when
///the base type is not concrete (virtual inheritance)
///OR if you're not sure if OBJECTREF Metaclass is in pmoc system

#define PMOCSAFEADDVIRTUALOBJECT(OBJECTREF,OUTINSTANCE,CONCRETEMOTHER) pmoc::Instance OUTINSTANCE;try{ \
	OUTINSTANCE = pmoc::Instance(PMOCMETACLASS(OBJECTREF), (void*)dynamic_cast<CONCRETEMOTHER*>(&OBJECTREF), false); \
}\
catch (std::bad_typeid& bt) \
{\
std::cerr << "bad_typeid caught: " << bt.what() << "Check your that" << #CONCRETEMOTHER << " is pmoc managed" << '\n'; \
}\
if (!OUTINSTANCE.isValid()){	\
		try{		\
			std::cerr << "failure in PMOCSAFEADDVIRTUALOBJECT !! :" << typeid(OBJECTREF).name() << " seams not pmoc managed \n  Using " << #CONCRETEMOTHER << " class instead" << '\n'; \
	}\
	catch (std::bad_typeid& bt) \
	{\
	std::cerr << "bad_typeid caught: " << bt.what() << "Check your that" << #CONCRETEMOTHER << " is pmoc managed" << '\n'; \
	}\
	try{		\
			OUTINSTANCE = pmoc::Instance(PMOCGETMETACLASS(#CONCRETEMOTHER), (void*)dynamic_cast<CONCRETEMOTHER*>(&OBJECTREF), false); \
	}\
	catch (std::bad_typeid& bt)\
	{\
	std::cerr << "bad_typeid caught: " << bt.what() << "Check your that " << #CONCRETEMOTHER << " is pmoc managed" << '\n'; \
	}\
}

#define QQUICKCOMPONENT(INSTANCE,PAPA) ((_view->window()&&INSTANCE.isValid())?INSTANCE.model->getGuiComponent((QQuickView*)_view->window(),INSTANCE,PAPA):0)
#define QQUICKCOMPONENTWITHNAME(INSTANCE,PAPA,RELATIONNAME) ((_view->window()&&INSTANCE.isValid())?INSTANCE.model->getGuiComponent((QQuickView*)_view->window(),INSTANCE,PAPA,RELATIONNAME):0)

///Generate a QuickItem with parentitem for Objectref memory adress
#define PMOCQCOMPONENT(OBJECTREF,PARENTITEM,OUTQUICKITEM) try{\
	pmoc::Instance inst = pmoc::Instance(PMOCMETACLASS(OBJECTREF), (void*)(&OBJECTREF), false); \
	OUTQUICKITEM = QQUICKCOMPONENT(inst, PARENTITEM); \
}\
catch (std::bad_typeid& bt)\
{\
std::cerr << "bad_typeid caught: " << bt.what() << '\n'; \
}

#endif
