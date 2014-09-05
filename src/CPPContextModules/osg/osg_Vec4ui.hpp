#ifndef CONTEXT_META_CLASS_osg_Vec4ui_H
#define CONTEXT_META_CLASS_osg_Vec4ui_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4ui>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec4ui: public MetaClass{
protected:
std::set<osg::Vec4ui* 							 > _managedinstances;
   public:
osg_Vec4ui():MetaClass( "osg::Vec4ui"){_typeid=&typeid(osg::Vec4ui );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec4ui(INSTANCE) BACK(osg::Vec4ui, "osg::Vec4ui",INSTANCE)
#endif

