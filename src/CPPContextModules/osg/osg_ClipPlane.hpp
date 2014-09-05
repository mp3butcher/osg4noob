#ifndef CONTEXT_META_CLASS_osg_ClipPlane_H
#define CONTEXT_META_CLASS_osg_ClipPlane_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ClipPlane>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ClipPlane: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ClipPlane> 				 > _managedinstances;
   public:
osg_ClipPlane():MetaClass( "osg::ClipPlane"){_typeid=&typeid(osg::ClipPlane );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ClipPlane(INSTANCE) BACK(osg::ClipPlane, "osg::ClipPlane",INSTANCE)
#endif

