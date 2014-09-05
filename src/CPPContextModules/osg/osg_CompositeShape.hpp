#ifndef CONTEXT_META_CLASS_osg_CompositeShape_H
#define CONTEXT_META_CLASS_osg_CompositeShape_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_CompositeShape: public MetaClass{
protected:
   public:
osg_CompositeShape():MetaClass( "osg::CompositeShape"){_typeid=&typeid(osg::CompositeShape );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_CompositeShape(INSTANCE) BACK(osg::CompositeShape, "osg::CompositeShape",INSTANCE)
#endif

