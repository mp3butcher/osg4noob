#ifndef CONTEXT_META_CLASS_osg_AttributeDispatch_H
#define CONTEXT_META_CLASS_osg_AttributeDispatch_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ArrayDispatchers>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_AttributeDispatch: public MetaClass{
protected:
   public:
osg_AttributeDispatch():MetaClass( "osg::AttributeDispatch"){_typeid=&typeid(osg::AttributeDispatch );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_AttributeDispatch(INSTANCE) BACK(osg::AttributeDispatch, "osg::AttributeDispatch",INSTANCE)
#endif

