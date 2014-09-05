#ifndef CONTEXT_META_CLASS_osg_StateAttribute_H
#define CONTEXT_META_CLASS_osg_StateAttribute_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/StateAttribute>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_StateAttribute: public MetaClass{
protected:
   public:
osg_StateAttribute():MetaClass( "osg::StateAttribute"){_typeid=&typeid(osg::StateAttribute );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_StateAttribute(INSTANCE) BACK(osg::StateAttribute, "osg::StateAttribute",INSTANCE)
#endif

