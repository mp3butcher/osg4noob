#ifndef CONTEXT_META_CLASS_osg_Vec3ui_H
#define CONTEXT_META_CLASS_osg_Vec3ui_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3ui>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec3ui: public MetaClass{
protected:
std::set<osg::Vec3ui* 							 > _managedinstances;
   public:
osg_Vec3ui():MetaClass( "osg::Vec3ui"){_typeid=&typeid(osg::Vec3ui );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec3ui(INSTANCE) BACK(osg::Vec3ui, "osg::Vec3ui",INSTANCE)
#endif

