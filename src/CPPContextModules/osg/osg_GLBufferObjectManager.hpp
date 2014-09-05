#ifndef CONTEXT_META_CLASS_osg_GLBufferObjectManager_H
#define CONTEXT_META_CLASS_osg_GLBufferObjectManager_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_GLBufferObjectManager: public MetaClass{
protected:
   public:
osg_GLBufferObjectManager():MetaClass( "osg::GLBufferObjectManager"){_typeid=&typeid(osg::GLBufferObjectManager );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_GLBufferObjectManager(INSTANCE) BACK(osg::GLBufferObjectManager, "osg::GLBufferObjectManager",INSTANCE)
#endif

