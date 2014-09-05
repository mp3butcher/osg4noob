#ifndef CONTEXT_META_CLASS_osg_TexEnvFilter_H
#define CONTEXT_META_CLASS_osg_TexEnvFilter_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/TexEnvFilter>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TexEnvFilter: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TexEnvFilter> 				 > _managedinstances;
   public:
osg_TexEnvFilter():MetaClass( "osg::TexEnvFilter"){_typeid=&typeid(osg::TexEnvFilter );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TexEnvFilter(INSTANCE) BACK(osg::TexEnvFilter, "osg::TexEnvFilter",INSTANCE)
#endif

