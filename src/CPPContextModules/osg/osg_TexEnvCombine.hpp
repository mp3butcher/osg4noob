#ifndef CONTEXT_META_CLASS_osg_TexEnvCombine_H
#define CONTEXT_META_CLASS_osg_TexEnvCombine_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/TexEnvCombine>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TexEnvCombine: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TexEnvCombine> 				 > _managedinstances;
   public:
osg_TexEnvCombine():MetaClass( "osg::TexEnvCombine"){_typeid=&typeid(osg::TexEnvCombine );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TexEnvCombine(INSTANCE) BACK(osg::TexEnvCombine, "osg::TexEnvCombine",INSTANCE)
#endif

