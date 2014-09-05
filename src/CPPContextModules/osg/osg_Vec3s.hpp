#ifndef CONTEXT_META_CLASS_osg_Vec3s_H
#define CONTEXT_META_CLASS_osg_Vec3s_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3s>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec3s: public MetaClass{
protected:
std::set<osg::Vec3s* 							 > _managedinstances;
   public:
osg_Vec3s():MetaClass( "osg::Vec3s"){_typeid=&typeid(osg::Vec3s );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec3s(INSTANCE) BACK(osg::Vec3s, "osg::Vec3s",INSTANCE)
#endif

