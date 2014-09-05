#ifndef CONTEXT_META_CLASS_osg_CullFace_H
#define CONTEXT_META_CLASS_osg_CullFace_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/CullFace>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_CullFace: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::CullFace> 				 > _managedinstances;
   public:
osg_CullFace():MetaClass( "osg::CullFace"){_typeid=&typeid(osg::CullFace );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_CullFace(INSTANCE) BACK(osg::CullFace, "osg::CullFace",INSTANCE)
#endif

