#ifndef METAQQUICKLIBRARY_PMOC_H
#define METAQQUICKLIBRARY_PMOC_H 1

#include "Export.h"
#include <map>
#include <MetaQQuickClass.h>

namespace pmoc
{
class METAQQUICKINTERFACE_PMOC_EXPORT MetaQQuickLibrary
{
protected:
    ID _id;//think it as the namespace sname
    // modules dependencies (dll list)
    std::set<std::string> _dependenciesdll;
    std::set< MetaQQuickLibrary*> _dependencies;

    std::set<MetaQQuickClass*> _components;//MetaQQuickClasses managed by this metaLib


    //std::map<MetaQQuickClass*, std::set<Instance*> > objectrecord;//help to retrieve a typed object
    ///Managed Instances register
    //std::set<Instance> managedobjects;//store
public:


    inline const ID & id()const
    {
        return  (const ID &)_id;
    }


///CREATE THE GUI COMPONNENT FOR A PARTICULAR INSTANCE
    QQuickItem * getGuiComponent(Instance &i, QQuickItem*parent);

    ///add MetaQQuickClass in _components
    MetaQQuickLibrary(ID n)
    {
        _id = n;
    }

    ///setup MetaQQuickClass children and parents (require dependancies to be loaded)
    virtual void setupRelations() = 0;

    ///dependencies
    inline const std::set<std::string> & getDependencies()const
    {
        return _dependenciesdll;
    }
    void addDependency(const std::string &s)
    {
        _dependenciesdll.insert(s);
    }

    MetaQQuickClass *getMetaClassByID(const ID &id)
    {

        MetaQQuickClass* ret = 0;
        for (std::set<MetaQQuickClass*>::const_iterator it = this->_components.begin(); it != this->_components.end(); it++)
        {
            if ((*it)->id() == id) return (*it);
            ret = (*it)->getSubClassByID(id);
            if (ret)return ret;
        }
        return 0;
    }
    MetaQQuickClass *getMetaClassByTypeInfo(const std::type_info &id) throw (std::bad_typeid);

    ~MetaQQuickLibrary()
    {
        ///destroy _components classes
        //  for (std::list<MetaQQuickClass*>::const_iterator it = _components.begin(); it != _components.end(); it++)delete *it;

    }


};

}
#endif
