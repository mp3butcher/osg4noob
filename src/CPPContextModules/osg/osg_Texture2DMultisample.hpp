#ifndef CONTEXT_META_CLASS_osg_Texture2DMultisample_H
#define CONTEXT_META_CLASS_osg_Texture2DMultisample_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Texture2DMultisample>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Texture2DMultisample: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Texture2DMultisample> 				 > _managedinstances;
   public:
osg_Texture2DMultisample():MetaClass( "osg::Texture2DMultisample"){_typeid=&typeid(osg::Texture2DMultisample );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Texture2DMultisample(INSTANCE) BACK(osg::Texture2DMultisample, "osg::Texture2DMultisample",INSTANCE)
#endif

