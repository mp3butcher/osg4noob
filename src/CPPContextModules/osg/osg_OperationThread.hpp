#ifndef CONTEXT_META_CLASS_osg_OperationThread_H
#define CONTEXT_META_CLASS_osg_OperationThread_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/OperationThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_OperationThread: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::OperationThread> 				 > _managedinstances;
   public:
osg_OperationThread():MetaClass( "osg::OperationThread"){_typeid=&typeid(osg::OperationThread );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_OperationThread(INSTANCE) BACK(osg::OperationThread, "osg::OperationThread",INSTANCE)
#endif

