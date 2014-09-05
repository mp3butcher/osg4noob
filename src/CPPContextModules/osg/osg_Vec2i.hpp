#ifndef CONTEXT_META_CLASS_osg_Vec2i_H
#define CONTEXT_META_CLASS_osg_Vec2i_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2i>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec2i: public MetaClass{
protected:
std::set<osg::Vec2i* 							 > _managedinstances;
   public:
osg_Vec2i():MetaClass( "osg::Vec2i"){_typeid=&typeid(osg::Vec2i );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec2i(INSTANCE) BACK(osg::Vec2i, "osg::Vec2i",INSTANCE)
#endif

