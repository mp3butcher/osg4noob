#ifndef CONTEXT_META_CLASS_osg_Array_H
#define CONTEXT_META_CLASS_osg_Array_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Array>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Array: public MetaClass{
protected:
   public:
osg_Array():MetaClass( "osg::Array"){_typeid=&typeid(osg::Array );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Array(INSTANCE) BACK(osg::Array, "osg::Array",INSTANCE)
#endif

