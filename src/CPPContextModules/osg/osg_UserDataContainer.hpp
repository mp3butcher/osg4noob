#ifndef CONTEXT_META_CLASS_osg_UserDataContainer_H
#define CONTEXT_META_CLASS_osg_UserDataContainer_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/UserDataContainer>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_UserDataContainer: public MetaClass{
protected:
   public:
osg_UserDataContainer():MetaClass( "osg::UserDataContainer"){_typeid=&typeid(osg::UserDataContainer );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_UserDataContainer(INSTANCE) BACK(osg::UserDataContainer, "osg::UserDataContainer",INSTANCE)
#endif

