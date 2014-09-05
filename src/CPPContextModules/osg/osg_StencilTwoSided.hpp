#ifndef CONTEXT_META_CLASS_osg_StencilTwoSided_H
#define CONTEXT_META_CLASS_osg_StencilTwoSided_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/StencilTwoSided>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_StencilTwoSided: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::StencilTwoSided> 				 > _managedinstances;
   public:
osg_StencilTwoSided():MetaClass( "osg::StencilTwoSided"){_typeid=&typeid(osg::StencilTwoSided );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_StencilTwoSided(INSTANCE) BACK(osg::StencilTwoSided, "osg::StencilTwoSided",INSTANCE)
#endif

