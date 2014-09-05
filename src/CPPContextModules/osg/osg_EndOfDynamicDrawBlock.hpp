#ifndef CONTEXT_META_CLASS_osg_EndOfDynamicDrawBlock_H
#define CONTEXT_META_CLASS_osg_EndOfDynamicDrawBlock_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_EndOfDynamicDrawBlock: public MetaClass{
protected:
   public:
osg_EndOfDynamicDrawBlock():MetaClass( "osg::EndOfDynamicDrawBlock"){_typeid=&typeid(osg::EndOfDynamicDrawBlock );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_EndOfDynamicDrawBlock(INSTANCE) BACK(osg::EndOfDynamicDrawBlock, "osg::EndOfDynamicDrawBlock",INSTANCE)
#endif

