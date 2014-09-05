#ifndef CONTEXT_META_CLASS_osg_StateAttributeCallback_H
#define CONTEXT_META_CLASS_osg_StateAttributeCallback_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/StateAttributeCallback>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_StateAttributeCallback: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::StateAttributeCallback> 				 > _managedinstances;
   public:
osg_StateAttributeCallback():MetaClass( "osg::StateAttributeCallback"){_typeid=&typeid(osg::StateAttributeCallback );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_StateAttributeCallback(INSTANCE) BACK(osg::StateAttributeCallback, "osg::StateAttributeCallback",INSTANCE)
#endif

