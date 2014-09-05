#ifndef CONTEXT_META_CLASS_osg_PrimitiveIndexFunctor_H
#define CONTEXT_META_CLASS_osg_PrimitiveIndexFunctor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveSet>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PrimitiveIndexFunctor: public MetaClass{
protected:
   public:
osg_PrimitiveIndexFunctor():MetaClass( "osg::PrimitiveIndexFunctor"){_typeid=&typeid(osg::PrimitiveIndexFunctor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PrimitiveIndexFunctor(INSTANCE) BACK(osg::PrimitiveIndexFunctor, "osg::PrimitiveIndexFunctor",INSTANCE)
#endif

