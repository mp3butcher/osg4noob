#ifndef CONTEXT_META_CLASS_osg_CullStack_H
#define CONTEXT_META_CLASS_osg_CullStack_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/CullStack>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_CullStack: public MetaClass{
protected:
std::set<osg::CullStack* 							 > _managedinstances;
   public:
osg_CullStack():MetaClass( "osg::CullStack"){_typeid=&typeid(osg::CullStack );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_CullStack(INSTANCE) BACK(osg::CullStack, "osg::CullStack",INSTANCE)
#endif

