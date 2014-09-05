#ifndef CONTEXT_META_CLASS_osg_ReleaseContext_Block_MakeCurrentOperation_H
#define CONTEXT_META_CLASS_osg_ReleaseContext_Block_MakeCurrentOperation_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ReleaseContext_Block_MakeCurrentOperation: public MetaClass{
protected:
   public:
osg_ReleaseContext_Block_MakeCurrentOperation():MetaClass( "osg::ReleaseContext_Block_MakeCurrentOperation"){_typeid=&typeid(osg::ReleaseContext_Block_MakeCurrentOperation );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ReleaseContext_Block_MakeCurrentOperation(INSTANCE) BACK(osg::ReleaseContext_Block_MakeCurrentOperation, "osg::ReleaseContext_Block_MakeCurrentOperation",INSTANCE)
#endif

