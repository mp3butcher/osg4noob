#ifndef CONTEXT_META_CLASS_osg_Shape_H
#define CONTEXT_META_CLASS_osg_Shape_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Shape: public MetaClass{
protected:
   public:
osg_Shape():MetaClass( "osg::Shape"){_typeid=&typeid(osg::Shape );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Shape(INSTANCE) BACK(osg::Shape, "osg::Shape",INSTANCE)
#endif

