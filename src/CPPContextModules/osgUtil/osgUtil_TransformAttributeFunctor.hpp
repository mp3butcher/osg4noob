#ifndef CONTEXT_META_CLASS_osgUtil_TransformAttributeFunctor_H
#define CONTEXT_META_CLASS_osgUtil_TransformAttributeFunctor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/TransformAttributeFunctor>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_TransformAttributeFunctor: public MetaClass{
protected:
   public:
osgUtil_TransformAttributeFunctor():MetaClass( "osgUtil::TransformAttributeFunctor"){_typeid=&typeid(osgUtil::TransformAttributeFunctor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_TransformAttributeFunctor(INSTANCE) BACK(osgUtil::TransformAttributeFunctor, "osgUtil::TransformAttributeFunctor",INSTANCE)
#endif

