#ifndef CONTEXT_META_CLASS_osg_Texture3D_H
#define CONTEXT_META_CLASS_osg_Texture3D_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Texture3D>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Texture3D: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Texture3D> 				 > _managedinstances;
   public:
osg_Texture3D():MetaClass( "osg::Texture3D"){_typeid=&typeid(osg::Texture3D );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Texture3D(INSTANCE) BACK(osg::Texture3D, "osg::Texture3D",INSTANCE)
#endif

