#ifndef CONTEXT_META_CLASS_osg_Texture1D_H
#define CONTEXT_META_CLASS_osg_Texture1D_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Texture1D>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Texture1D: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Texture1D> 				 > _managedinstances;
   public:
osg_Texture1D():MetaClass( "osg::Texture1D"){_typeid=&typeid(osg::Texture1D );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Texture1D(INSTANCE) BACK(osg::Texture1D, "osg::Texture1D",INSTANCE)
#endif

