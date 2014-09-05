#ifndef CONTEXT_META_CLASS_osg_BarrierOperation_H
#define CONTEXT_META_CLASS_osg_BarrierOperation_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_BarrierOperation: public MetaClass{
protected:
   public:
osg_BarrierOperation():MetaClass( "osg::BarrierOperation"){_typeid=&typeid(osg::BarrierOperation );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_BarrierOperation(INSTANCE) BACK(osg::BarrierOperation, "osg::BarrierOperation",INSTANCE)
#endif

