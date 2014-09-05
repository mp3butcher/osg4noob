#ifndef CONTEXT_META_CLASS_osg_Vec4i_H
#define CONTEXT_META_CLASS_osg_Vec4i_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4i>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec4i: public MetaClass{
protected:
std::set<osg::Vec4i* 							 > _managedinstances;
   public:
osg_Vec4i():MetaClass( "osg::Vec4i"){_typeid=&typeid(osg::Vec4i );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec4i(INSTANCE) BACK(osg::Vec4i, "osg::Vec4i",INSTANCE)
#endif

