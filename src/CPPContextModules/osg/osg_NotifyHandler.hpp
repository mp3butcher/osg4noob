#ifndef CONTEXT_META_CLASS_osg_NotifyHandler_H
#define CONTEXT_META_CLASS_osg_NotifyHandler_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Notify>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_NotifyHandler: public MetaClass{
protected:
   public:
osg_NotifyHandler():MetaClass( "osg::NotifyHandler"){_typeid=&typeid(osg::NotifyHandler );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_NotifyHandler(INSTANCE) BACK(osg::NotifyHandler, "osg::NotifyHandler",INSTANCE)
#endif

