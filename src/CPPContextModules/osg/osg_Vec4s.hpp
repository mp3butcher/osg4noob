#ifndef CONTEXT_META_CLASS_osg_Vec4s_H
#define CONTEXT_META_CLASS_osg_Vec4s_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4s>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec4s: public MetaClass{
protected:
std::set<osg::Vec4s* 							 > _managedinstances;
   public:
osg_Vec4s():MetaClass( "osg::Vec4s"){_typeid=&typeid(osg::Vec4s );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec4s(INSTANCE) BACK(osg::Vec4s, "osg::Vec4s",INSTANCE)
#endif

