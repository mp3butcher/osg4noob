#ifndef CONTEXT_META_CLASS_osg_GraphicsContext_H
#define CONTEXT_META_CLASS_osg_GraphicsContext_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsContext>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_GraphicsContext: public MetaClass{
protected:
   public:
osg_GraphicsContext():MetaClass( "osg::GraphicsContext"){_typeid=&typeid(osg::GraphicsContext );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_GraphicsContext(INSTANCE) BACK(osg::GraphicsContext, "osg::GraphicsContext",INSTANCE)
#endif

