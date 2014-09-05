#ifndef CONTEXT_META_CLASS_osg_NodeTrackerCallback_H
#define CONTEXT_META_CLASS_osg_NodeTrackerCallback_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/NodeTrackerCallback>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_NodeTrackerCallback: public MetaClass{
protected:
   public:
osg_NodeTrackerCallback():MetaClass( "osg::NodeTrackerCallback"){_typeid=&typeid(osg::NodeTrackerCallback );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_NodeTrackerCallback(INSTANCE) BACK(osg::NodeTrackerCallback, "osg::NodeTrackerCallback",INSTANCE)
#endif

