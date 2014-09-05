#ifndef CONTEXT_META_CLASS_osg_ColorMask_H
#define CONTEXT_META_CLASS_osg_ColorMask_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ColorMask>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ColorMask: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ColorMask> 				 > _managedinstances;
   public:
osg_ColorMask():MetaClass( "osg::ColorMask"){_typeid=&typeid(osg::ColorMask );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ColorMask(INSTANCE) BACK(osg::ColorMask, "osg::ColorMask",INSTANCE)
#endif

