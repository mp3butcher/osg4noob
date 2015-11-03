#ifndef METACLASS_PMOC_H
#define METACLASS_PMOC_H 1
#include <typeinfo>
#include <set>
#include <string>
#include "Export.h"
#include <typeinfo>
namespace pmoc
{



	typedef std::string ID;
	class MetaClass;
	class METAQQUICKINTERFACE_PMOC_EXPORT Instance
	{
	public:
		///managed :tag instances whose lifecycle is managed by CPPContext
		//carefull to the crash if you operate on a managed=false after its deletion
		Instance(MetaClass*c = 0, void*m = 0, bool managed = true) :ptr(m), model(c), ismanaged(managed) {};

		Instance(const Instance &o);

		~Instance();
		///Dynamic Cast
		inline bool isValid()
		{
			return ptr != 0 && model != 0;
		}
		Instance as(MetaClass*c);

		bool operator <(const Instance &o)const;
		//inline getMethod model->getMethods()
		void* ptr;
		MetaClass *model;
		bool ismanaged;///owner: native code or pmoc environment
		int nb_references;///software refcounter:references counted for pmoc managed object addnode=+1 removenode=-1
		///
	};
	class METAQQUICKINTERFACE_PMOC_EXPORT MetaClass
	{
	protected:
		ID _id;//think it as the classname (understandable by human)
		std::set<MetaClass*> _innerclasses;//innner classes

	public:	
		//double linked hierarchy
		std::set<MetaClass*> parents;///upcast
		std::set<MetaClass*> children;///downcast
		virtual bool isInstanciable(){ return false; }

		const std::type_info* _typeid;///public non human key
		MetaClass(ID n)
		{
			_id = n;
		}

		void addParent(MetaClass*c);
		void removeParent(MetaClass*c);
		void addChild(MetaClass*c);
		void removeChild(MetaClass*c);

		inline const ID & id()const
		{
			return  (const ID &)_id;
		}

		MetaClass *getSubClassByTypeInfo(const std::type_info &id);

		MetaClass *getSubClassByID(const ID &id);
		bool isSubClass(MetaClass*cl);
		~MetaClass()
		{
			///destroy child classes
			for (std::set<MetaClass*>::const_iterator it = children.begin(); it != children.end(); it++)delete *it;

		}
		///*************************************Interfaces that all generated MetaClass will have***********************************//////////////

		///create a pointer to a new instance
		virtual Instance createInstance() = 0;

 
	};

 

}
#define BACK(CLASS,CLASSNAME,INSTANCE) ( (INSTANCE.model->id()==std::string(CLASSNAME))?(reinterpret_cast<CLASS*>(INSTANCE.ptr)):(NULL) )
#endif
