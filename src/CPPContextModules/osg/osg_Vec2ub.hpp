#ifndef CONTEXT_META_CLASS_osg_Vec2ub_H
#define CONTEXT_META_CLASS_osg_Vec2ub_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2ub>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec2ub: public MetaClass{
protected:
std::set<osg::Vec2ub* 							 > _managedinstances;
   public:
osg_Vec2ub():MetaClass( "osg::Vec2ub"){_typeid=&typeid(osg::Vec2ub );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec2ub(INSTANCE) BACK(osg::Vec2ub, "osg::Vec2ub",INSTANCE)
#endif

