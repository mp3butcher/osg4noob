#ifndef CONTEXT_META_CLASS_osg_OperationQueue_H
#define CONTEXT_META_CLASS_osg_OperationQueue_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/OperationThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_OperationQueue: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::OperationQueue> 				 > _managedinstances;
   public:
osg_OperationQueue():MetaClass( "osg::OperationQueue"){_typeid=&typeid(osg::OperationQueue );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_OperationQueue(INSTANCE) BACK(osg::OperationQueue, "osg::OperationQueue",INSTANCE)
#endif

