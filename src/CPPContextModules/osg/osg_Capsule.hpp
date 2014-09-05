#ifndef CONTEXT_META_CLASS_osg_Capsule_H
#define CONTEXT_META_CLASS_osg_Capsule_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Capsule: public MetaClass{
protected:
   public:
osg_Capsule():MetaClass( "osg::Capsule"){_typeid=&typeid(osg::Capsule );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Capsule(INSTANCE) BACK(osg::Capsule, "osg::Capsule",INSTANCE)
#endif

