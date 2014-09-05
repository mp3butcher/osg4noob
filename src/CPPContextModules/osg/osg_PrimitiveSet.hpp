#ifndef CONTEXT_META_CLASS_osg_PrimitiveSet_H
#define CONTEXT_META_CLASS_osg_PrimitiveSet_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveSet>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PrimitiveSet: public MetaClass{
protected:
   public:
osg_PrimitiveSet():MetaClass( "osg::PrimitiveSet"){_typeid=&typeid(osg::PrimitiveSet );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PrimitiveSet(INSTANCE) BACK(osg::PrimitiveSet, "osg::PrimitiveSet",INSTANCE)
#endif

