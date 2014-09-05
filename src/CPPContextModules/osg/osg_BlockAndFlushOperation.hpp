#ifndef CONTEXT_META_CLASS_osg_BlockAndFlushOperation_H
#define CONTEXT_META_CLASS_osg_BlockAndFlushOperation_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_BlockAndFlushOperation: public MetaClass{
protected:
   public:
osg_BlockAndFlushOperation():MetaClass( "osg::BlockAndFlushOperation"){_typeid=&typeid(osg::BlockAndFlushOperation );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_BlockAndFlushOperation(INSTANCE) BACK(osg::BlockAndFlushOperation, "osg::BlockAndFlushOperation",INSTANCE)
#endif

