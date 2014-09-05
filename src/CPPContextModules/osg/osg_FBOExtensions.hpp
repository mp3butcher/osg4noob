#ifndef CONTEXT_META_CLASS_osg_FBOExtensions_H
#define CONTEXT_META_CLASS_osg_FBOExtensions_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/FrameBufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_FBOExtensions: public MetaClass{
protected:
   public:
osg_FBOExtensions():MetaClass( "osg::FBOExtensions"){_typeid=&typeid(osg::FBOExtensions );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_FBOExtensions(INSTANCE) BACK(osg::FBOExtensions, "osg::FBOExtensions",INSTANCE)
#endif

