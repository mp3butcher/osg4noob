#ifndef CONTEXT_META_CLASS_osg_Vec2b_H
#define CONTEXT_META_CLASS_osg_Vec2b_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2b>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec2b: public MetaClass{
protected:
std::set<osg::Vec2b* 							 > _managedinstances;
   public:
osg_Vec2b():MetaClass( "osg::Vec2b"){_typeid=&typeid(osg::Vec2b );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec2b(INSTANCE) BACK(osg::Vec2b, "osg::Vec2b",INSTANCE)
#endif

