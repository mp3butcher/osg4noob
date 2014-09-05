#ifndef CONTEXT_META_CLASS_osg_Vec4f_H
#define CONTEXT_META_CLASS_osg_Vec4f_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4f>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec4f: public MetaClass{
protected:
std::set<osg::Vec4f* 							 > _managedinstances;
   public:
osg_Vec4f():MetaClass( "osg::Vec4f"){_typeid=&typeid(osg::Vec4f );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec4f(INSTANCE) BACK(osg::Vec4f, "osg::Vec4f",INSTANCE)
#endif

