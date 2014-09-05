#ifndef CONTEXT_META_CLASS_osg_Vec2f_H
#define CONTEXT_META_CLASS_osg_Vec2f_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2f>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec2f: public MetaClass{
protected:
std::set<osg::Vec2f* 							 > _managedinstances;
   public:
osg_Vec2f():MetaClass( "osg::Vec2f"){_typeid=&typeid(osg::Vec2f );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec2f(INSTANCE) BACK(osg::Vec2f, "osg::Vec2f",INSTANCE)
#endif

