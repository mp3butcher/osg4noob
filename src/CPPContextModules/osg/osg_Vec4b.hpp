#ifndef CONTEXT_META_CLASS_osg_Vec4b_H
#define CONTEXT_META_CLASS_osg_Vec4b_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4b>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec4b: public MetaClass{
protected:
std::set<osg::Vec4b* 							 > _managedinstances;
   public:
osg_Vec4b():MetaClass( "osg::Vec4b"){_typeid=&typeid(osg::Vec4b );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec4b(INSTANCE) BACK(osg::Vec4b, "osg::Vec4b",INSTANCE)
#endif

