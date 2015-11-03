#ifndef METALIBRARY_PMOC_H
#define METALIBRARY_PMOC_H 1

#include <Export.h>
#include <map>
#include <osg/Referenced>
#include <MetaClass.h>

namespace pmoc{
	class METAQQUICKINTERFACE_PMOC_EXPORT MetaLibrary : public osg::Referenced{
	protected:
		ID _id;//think it as the namespace sname
		// modules dependencies (dll list)
		std::set<std::string> _dependenciesdll;
		std::set< MetaLibrary*> _dependencies;

		std::set<MetaClass*> _components;//metaclasses managed by this metaLib

 
	public:


		inline const ID & id()const{ return  (const ID &)_id; }



		///add MetaClass in _components
		MetaLibrary(ID n){
			_id = n;
		}

		///setup metaclass children and parents (require dependancies to be loaded)
		virtual void setupRelations() = 0;

		///dependencies
		inline const std::set<std::string> & getDependencies()const{ return _dependenciesdll; }
		void addDependency(const std::string &s){
			_dependenciesdll.insert(s);
		}

		MetaClass *getMetaClassByID(const ID &id);
		MetaClass *getMetaClassByTypeInfo(const std::type_info &id);

		~MetaLibrary(){
			///destroy _components classes
			//  for (std::list<MetaClass*>::const_iterator it = _components.begin(); it != _components.end(); it++)delete *it;

		}

 
	 
	};

}
#endif
