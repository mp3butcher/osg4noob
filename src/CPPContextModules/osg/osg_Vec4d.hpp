#ifndef CONTEXT_META_CLASS_osg_Vec4d_H
#define CONTEXT_META_CLASS_osg_Vec4d_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4d>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec4d: public MetaClass{
protected:
std::set<osg::Vec4d* 							 > _managedinstances;
   public:
osg_Vec4d():MetaClass( "osg::Vec4d"){_typeid=&typeid(osg::Vec4d );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec4d(INSTANCE) BACK(osg::Vec4d, "osg::Vec4d",INSTANCE)
#endif

