#ifndef CONTEXT_META_CLASS_osg_Quat_H
#define CONTEXT_META_CLASS_osg_Quat_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Quat>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Quat: public MetaClass{
protected:
std::set<osg::Quat* 							 > _managedinstances;
   public:
osg_Quat():MetaClass( "osg::Quat"){_typeid=&typeid(osg::Quat );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Quat(INSTANCE) BACK(osg::Quat, "osg::Quat",INSTANCE)
#endif

