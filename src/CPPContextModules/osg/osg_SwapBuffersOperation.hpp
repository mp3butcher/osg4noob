#ifndef CONTEXT_META_CLASS_osg_SwapBuffersOperation_H
#define CONTEXT_META_CLASS_osg_SwapBuffersOperation_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_SwapBuffersOperation: public MetaClass{
protected:
   public:
osg_SwapBuffersOperation():MetaClass( "osg::SwapBuffersOperation"){_typeid=&typeid(osg::SwapBuffersOperation );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_SwapBuffersOperation(INSTANCE) BACK(osg::SwapBuffersOperation, "osg::SwapBuffersOperation",INSTANCE)
#endif

