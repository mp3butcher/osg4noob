#ifndef CONTEXT_META_CLASS_osg_Vec3us_H
#define CONTEXT_META_CLASS_osg_Vec3us_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3us>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec3us: public MetaClass{
protected:
std::set<osg::Vec3us* 							 > _managedinstances;
   public:
osg_Vec3us():MetaClass( "osg::Vec3us"){_typeid=&typeid(osg::Vec3us );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec3us(INSTANCE) BACK(osg::Vec3us, "osg::Vec3us",INSTANCE)
#endif

