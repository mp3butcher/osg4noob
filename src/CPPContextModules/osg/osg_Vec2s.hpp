#ifndef CONTEXT_META_CLASS_osg_Vec2s_H
#define CONTEXT_META_CLASS_osg_Vec2s_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2s>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec2s: public MetaClass{
protected:
std::set<osg::Vec2s* 							 > _managedinstances;
   public:
osg_Vec2s():MetaClass( "osg::Vec2s"){_typeid=&typeid(osg::Vec2s );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec2s(INSTANCE) BACK(osg::Vec2s, "osg::Vec2s",INSTANCE)
#endif

