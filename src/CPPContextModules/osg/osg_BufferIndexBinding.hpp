#ifndef CONTEXT_META_CLASS_osg_BufferIndexBinding_H
#define CONTEXT_META_CLASS_osg_BufferIndexBinding_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferIndexBinding>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_BufferIndexBinding: public MetaClass{
protected:
   public:
osg_BufferIndexBinding():MetaClass( "osg::BufferIndexBinding"){_typeid=&typeid(osg::BufferIndexBinding );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_BufferIndexBinding(INSTANCE) BACK(osg::BufferIndexBinding, "osg::BufferIndexBinding",INSTANCE)
#endif

