#ifndef CONTEXT_META_CLASS_osg_TexMat_H
#define CONTEXT_META_CLASS_osg_TexMat_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/TexMat>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TexMat: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TexMat> 				 > _managedinstances;
   public:
osg_TexMat():MetaClass( "osg::TexMat"){_typeid=&typeid(osg::TexMat );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TexMat(INSTANCE) BACK(osg::TexMat, "osg::TexMat",INSTANCE)
#endif

