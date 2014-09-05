#ifndef CONTEXT_META_CLASS_osg_Observer_H
#define CONTEXT_META_CLASS_osg_Observer_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Observer>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Observer: public MetaClass{
protected:
std::set<osg::Observer* 							 > _managedinstances;
   public:
osg_Observer():MetaClass( "osg::Observer"){_typeid=&typeid(osg::Observer );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Observer(INSTANCE) BACK(osg::Observer, "osg::Observer",INSTANCE)
#endif

