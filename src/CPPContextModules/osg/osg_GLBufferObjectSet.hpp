#ifndef CONTEXT_META_CLASS_osg_GLBufferObjectSet_H
#define CONTEXT_META_CLASS_osg_GLBufferObjectSet_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_GLBufferObjectSet: public MetaClass{
protected:
   public:
osg_GLBufferObjectSet():MetaClass( "osg::GLBufferObjectSet"){_typeid=&typeid(osg::GLBufferObjectSet );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_GLBufferObjectSet(INSTANCE) BACK(osg::GLBufferObjectSet, "osg::GLBufferObjectSet",INSTANCE)
#endif

