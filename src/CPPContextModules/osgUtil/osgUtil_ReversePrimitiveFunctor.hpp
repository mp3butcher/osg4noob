#ifndef CONTEXT_META_CLASS_osgUtil_ReversePrimitiveFunctor_H
#define CONTEXT_META_CLASS_osgUtil_ReversePrimitiveFunctor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/ReversePrimitiveFunctor>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_ReversePrimitiveFunctor: public MetaClass{
protected:
   public:
osgUtil_ReversePrimitiveFunctor():MetaClass( "osgUtil::ReversePrimitiveFunctor"){_typeid=&typeid(osgUtil::ReversePrimitiveFunctor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_ReversePrimitiveFunctor(INSTANCE) BACK(osgUtil::ReversePrimitiveFunctor, "osgUtil::ReversePrimitiveFunctor",INSTANCE)
#endif

