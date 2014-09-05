#ifndef CONTEXT_META_CLASS_osg_ObserverNodePath_H
#define CONTEXT_META_CLASS_osg_ObserverNodePath_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ObserverNodePath>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ObserverNodePath: public MetaClass{
protected:
std::set<osg::ObserverNodePath* 							 > _managedinstances;
   public:
osg_ObserverNodePath():MetaClass( "osg::ObserverNodePath"){_typeid=&typeid(osg::ObserverNodePath );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ObserverNodePath(INSTANCE) BACK(osg::ObserverNodePath, "osg::ObserverNodePath",INSTANCE)
#endif

