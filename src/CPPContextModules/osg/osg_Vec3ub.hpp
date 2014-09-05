#ifndef CONTEXT_META_CLASS_osg_Vec3ub_H
#define CONTEXT_META_CLASS_osg_Vec3ub_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3ub>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec3ub: public MetaClass{
protected:
std::set<osg::Vec3ub* 							 > _managedinstances;
   public:
osg_Vec3ub():MetaClass( "osg::Vec3ub"){_typeid=&typeid(osg::Vec3ub );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec3ub(INSTANCE) BACK(osg::Vec3ub, "osg::Vec3ub",INSTANCE)
#endif

