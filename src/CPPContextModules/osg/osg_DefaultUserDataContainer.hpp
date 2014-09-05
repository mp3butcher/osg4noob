#ifndef CONTEXT_META_CLASS_osg_DefaultUserDataContainer_H
#define CONTEXT_META_CLASS_osg_DefaultUserDataContainer_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/UserDataContainer>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_DefaultUserDataContainer: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::DefaultUserDataContainer> 				 > _managedinstances;
   public:
osg_DefaultUserDataContainer():MetaClass( "osg::DefaultUserDataContainer"){_typeid=&typeid(osg::DefaultUserDataContainer );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_DefaultUserDataContainer(INSTANCE) BACK(osg::DefaultUserDataContainer, "osg::DefaultUserDataContainer",INSTANCE)
#endif

