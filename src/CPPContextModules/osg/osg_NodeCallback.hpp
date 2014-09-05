#ifndef CONTEXT_META_CLASS_osg_NodeCallback_H
#define CONTEXT_META_CLASS_osg_NodeCallback_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/NodeCallback>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_NodeCallback: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::NodeCallback> 				 > _managedinstances;
   public:
osg_NodeCallback():MetaClass( "osg::NodeCallback"){_typeid=&typeid(osg::NodeCallback );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_NodeCallback(INSTANCE) BACK(osg::NodeCallback, "osg::NodeCallback",INSTANCE)
#endif

