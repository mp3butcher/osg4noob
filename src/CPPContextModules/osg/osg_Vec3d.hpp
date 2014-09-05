#ifndef CONTEXT_META_CLASS_osg_Vec3d_H
#define CONTEXT_META_CLASS_osg_Vec3d_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3d>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec3d: public MetaClass{
protected:
std::set<osg::Vec3d* 							 > _managedinstances;
   public:
osg_Vec3d():MetaClass( "osg::Vec3d"){_typeid=&typeid(osg::Vec3d );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec3d(INSTANCE) BACK(osg::Vec3d, "osg::Vec3d",INSTANCE)
#endif

