#ifndef CONTEXT_META_CLASS_osg_DeleteHandler_H
#define CONTEXT_META_CLASS_osg_DeleteHandler_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/DeleteHandler>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_DeleteHandler: public MetaClass{
protected:
std::set<osg::DeleteHandler* 							 > _managedinstances;
   public:
osg_DeleteHandler():MetaClass( "osg::DeleteHandler"){_typeid=&typeid(osg::DeleteHandler );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_DeleteHandler(INSTANCE) BACK(osg::DeleteHandler, "osg::DeleteHandler",INSTANCE)
#endif

