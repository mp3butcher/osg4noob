#ifndef CONTEXT_META_CLASS_osg_Vec2ui_H
#define CONTEXT_META_CLASS_osg_Vec2ui_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2ui>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec2ui: public MetaClass{
protected:
std::set<osg::Vec2ui* 							 > _managedinstances;
   public:
osg_Vec2ui():MetaClass( "osg::Vec2ui"){_typeid=&typeid(osg::Vec2ui );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec2ui(INSTANCE) BACK(osg::Vec2ui, "osg::Vec2ui",INSTANCE)
#endif

