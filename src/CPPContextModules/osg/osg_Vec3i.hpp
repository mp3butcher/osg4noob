#ifndef CONTEXT_META_CLASS_osg_Vec3i_H
#define CONTEXT_META_CLASS_osg_Vec3i_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3i>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec3i: public MetaClass{
protected:
std::set<osg::Vec3i* 							 > _managedinstances;
   public:
osg_Vec3i():MetaClass( "osg::Vec3i"){_typeid=&typeid(osg::Vec3i );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec3i(INSTANCE) BACK(osg::Vec3i, "osg::Vec3i",INSTANCE)
#endif

