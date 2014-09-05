#ifndef CONTEXT_META_CLASS_osgUtil_TransformCallback_H
#define CONTEXT_META_CLASS_osgUtil_TransformCallback_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/TransformCallback>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_TransformCallback: public MetaClass{
protected:
   public:
osgUtil_TransformCallback():MetaClass( "osgUtil::TransformCallback"){_typeid=&typeid(osgUtil::TransformCallback );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_TransformCallback(INSTANCE) BACK(osgUtil::TransformCallback, "osgUtil::TransformCallback",INSTANCE)
#endif

