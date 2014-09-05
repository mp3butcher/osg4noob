#ifndef CONTEXT_META_CLASS_osg_PrimitiveFunctor_H
#define CONTEXT_META_CLASS_osg_PrimitiveFunctor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveSet>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PrimitiveFunctor: public MetaClass{
protected:
   public:
osg_PrimitiveFunctor():MetaClass( "osg::PrimitiveFunctor"){_typeid=&typeid(osg::PrimitiveFunctor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PrimitiveFunctor(INSTANCE) BACK(osg::PrimitiveFunctor, "osg::PrimitiveFunctor",INSTANCE)
#endif

