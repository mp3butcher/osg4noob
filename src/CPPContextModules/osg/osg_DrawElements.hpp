#ifndef CONTEXT_META_CLASS_osg_DrawElements_H
#define CONTEXT_META_CLASS_osg_DrawElements_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveSet>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_DrawElements: public MetaClass{
protected:
   public:
osg_DrawElements():MetaClass( "osg::DrawElements"){_typeid=&typeid(osg::DrawElements );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_DrawElements(INSTANCE) BACK(osg::DrawElements, "osg::DrawElements",INSTANCE)
#endif

