#ifndef CONTEXT_META_CLASS_osg_FlushDeletedGLObjectsOperation_H
#define CONTEXT_META_CLASS_osg_FlushDeletedGLObjectsOperation_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_FlushDeletedGLObjectsOperation: public MetaClass{
protected:
   public:
osg_FlushDeletedGLObjectsOperation():MetaClass( "osg::FlushDeletedGLObjectsOperation"){_typeid=&typeid(osg::FlushDeletedGLObjectsOperation );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_FlushDeletedGLObjectsOperation(INSTANCE) BACK(osg::FlushDeletedGLObjectsOperation, "osg::FlushDeletedGLObjectsOperation",INSTANCE)
#endif

