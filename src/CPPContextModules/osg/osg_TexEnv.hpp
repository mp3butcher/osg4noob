#ifndef CONTEXT_META_CLASS_osg_TexEnv_H
#define CONTEXT_META_CLASS_osg_TexEnv_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/TexEnv>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TexEnv: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TexEnv> 				 > _managedinstances;
   public:
osg_TexEnv():MetaClass( "osg::TexEnv"){_typeid=&typeid(osg::TexEnv );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TexEnv(INSTANCE) BACK(osg::TexEnv, "osg::TexEnv",INSTANCE)
#endif

