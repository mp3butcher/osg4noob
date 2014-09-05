#ifndef CONTEXT_META_CLASS_osg_Vec3f_H
#define CONTEXT_META_CLASS_osg_Vec3f_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3f>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec3f: public MetaClass{
protected:
std::set<osg::Vec3f* 							 > _managedinstances;
   public:
osg_Vec3f():MetaClass( "osg::Vec3f"){_typeid=&typeid(osg::Vec3f );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec3f(INSTANCE) BACK(osg::Vec3f, "osg::Vec3f",INSTANCE)
#endif

