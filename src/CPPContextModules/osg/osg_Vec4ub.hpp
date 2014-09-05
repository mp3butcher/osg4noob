#ifndef CONTEXT_META_CLASS_osg_Vec4ub_H
#define CONTEXT_META_CLASS_osg_Vec4ub_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4ub>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec4ub: public MetaClass{
protected:
std::set<osg::Vec4ub* 							 > _managedinstances;
   public:
osg_Vec4ub():MetaClass( "osg::Vec4ub"){_typeid=&typeid(osg::Vec4ub );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec4ub(INSTANCE) BACK(osg::Vec4ub, "osg::Vec4ub",INSTANCE)
#endif

