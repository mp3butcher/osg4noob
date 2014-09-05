#ifndef CONTEXT_META_CLASS_osg_Vec2d_H
#define CONTEXT_META_CLASS_osg_Vec2d_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2d>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec2d: public MetaClass{
protected:
std::set<osg::Vec2d* 							 > _managedinstances;
   public:
osg_Vec2d():MetaClass( "osg::Vec2d"){_typeid=&typeid(osg::Vec2d );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec2d(INSTANCE) BACK(osg::Vec2d, "osg::Vec2d",INSTANCE)
#endif

