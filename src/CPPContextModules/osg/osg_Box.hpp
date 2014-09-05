#ifndef CONTEXT_META_CLASS_osg_Box_H
#define CONTEXT_META_CLASS_osg_Box_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Box: public MetaClass{
protected:
   public:
osg_Box():MetaClass( "osg::Box"){_typeid=&typeid(osg::Box );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Box(INSTANCE) BACK(osg::Box, "osg::Box",INSTANCE)
#endif

