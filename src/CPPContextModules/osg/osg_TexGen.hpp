#ifndef CONTEXT_META_CLASS_osg_TexGen_H
#define CONTEXT_META_CLASS_osg_TexGen_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/TexGen>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TexGen: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TexGen> 				 > _managedinstances;
   public:
osg_TexGen():MetaClass( "osg::TexGen"){_typeid=&typeid(osg::TexGen );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TexGen(INSTANCE) BACK(osg::TexGen, "osg::TexGen",INSTANCE)
#endif

