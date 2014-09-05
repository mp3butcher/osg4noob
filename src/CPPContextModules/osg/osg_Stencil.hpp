#ifndef CONTEXT_META_CLASS_osg_Stencil_H
#define CONTEXT_META_CLASS_osg_Stencil_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Stencil>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Stencil: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Stencil> 				 > _managedinstances;
   public:
osg_Stencil():MetaClass( "osg::Stencil"){_typeid=&typeid(osg::Stencil );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Stencil(INSTANCE) BACK(osg::Stencil, "osg::Stencil",INSTANCE)
#endif

