#ifndef CONTEXT_META_CLASS_osg_Viewport_H
#define CONTEXT_META_CLASS_osg_Viewport_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Viewport>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Viewport: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Viewport> 				 > _managedinstances;
   public:
osg_Viewport():MetaClass( "osg::Viewport"){_typeid=&typeid(osg::Viewport );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Viewport(INSTANCE) BACK(osg::Viewport, "osg::Viewport",INSTANCE)
#endif

