#ifndef CONTEXT_META_CLASS_osg_ApplicationUsageProxy_H
#define CONTEXT_META_CLASS_osg_ApplicationUsageProxy_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ApplicationUsage>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ApplicationUsageProxy: public MetaClass{
protected:
   public:
osg_ApplicationUsageProxy():MetaClass( "osg::ApplicationUsageProxy"){_typeid=&typeid(osg::ApplicationUsageProxy );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ApplicationUsageProxy(INSTANCE) BACK(osg::ApplicationUsageProxy, "osg::ApplicationUsageProxy",INSTANCE)
#endif

