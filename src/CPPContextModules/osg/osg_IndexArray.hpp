#ifndef CONTEXT_META_CLASS_osg_IndexArray_H
#define CONTEXT_META_CLASS_osg_IndexArray_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Array>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_IndexArray: public MetaClass{
protected:
   public:
osg_IndexArray():MetaClass( "osg::IndexArray"){_typeid=&typeid(osg::IndexArray );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_IndexArray(INSTANCE) BACK(osg::IndexArray, "osg::IndexArray",INSTANCE)
#endif

