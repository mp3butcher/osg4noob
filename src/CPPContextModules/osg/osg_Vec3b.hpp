#ifndef CONTEXT_META_CLASS_osg_Vec3b_H
#define CONTEXT_META_CLASS_osg_Vec3b_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3b>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec3b: public MetaClass{
protected:
std::set<osg::Vec3b* 							 > _managedinstances;
   public:
osg_Vec3b():MetaClass( "osg::Vec3b"){_typeid=&typeid(osg::Vec3b );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec3b(INSTANCE) BACK(osg::Vec3b, "osg::Vec3b",INSTANCE)
#endif

