#ifndef CONTEXT_META_CLASS_osg_GraphicsOperation_H
#define CONTEXT_META_CLASS_osg_GraphicsOperation_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_GraphicsOperation: public MetaClass{
protected:
   public:
osg_GraphicsOperation():MetaClass( "osg::GraphicsOperation"){_typeid=&typeid(osg::GraphicsOperation );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_GraphicsOperation(INSTANCE) BACK(osg::GraphicsOperation, "osg::GraphicsOperation",INSTANCE)
#endif

