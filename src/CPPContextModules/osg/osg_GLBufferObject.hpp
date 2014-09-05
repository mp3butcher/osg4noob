#ifndef CONTEXT_META_CLASS_osg_GLBufferObject_H
#define CONTEXT_META_CLASS_osg_GLBufferObject_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_GLBufferObject: public MetaClass{
protected:
   public:
osg_GLBufferObject():MetaClass( "osg::GLBufferObject"){_typeid=&typeid(osg::GLBufferObject );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_GLBufferObject(INSTANCE) BACK(osg::GLBufferObject, "osg::GLBufferObject",INSTANCE)
#endif

