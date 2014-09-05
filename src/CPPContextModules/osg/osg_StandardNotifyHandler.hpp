#ifndef CONTEXT_META_CLASS_osg_StandardNotifyHandler_H
#define CONTEXT_META_CLASS_osg_StandardNotifyHandler_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Notify>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_StandardNotifyHandler: public MetaClass{
protected:
   public:
osg_StandardNotifyHandler():MetaClass( "osg::StandardNotifyHandler"){_typeid=&typeid(osg::StandardNotifyHandler );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_StandardNotifyHandler(INSTANCE) BACK(osg::StandardNotifyHandler, "osg::StandardNotifyHandler",INSTANCE)
#endif

