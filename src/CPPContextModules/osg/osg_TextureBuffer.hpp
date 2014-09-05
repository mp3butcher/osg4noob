#ifndef CONTEXT_META_CLASS_osg_TextureBuffer_H
#define CONTEXT_META_CLASS_osg_TextureBuffer_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/TextureBuffer>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TextureBuffer: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TextureBuffer> 				 > _managedinstances;
   public:
osg_TextureBuffer():MetaClass( "osg::TextureBuffer"){_typeid=&typeid(osg::TextureBuffer );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TextureBuffer(INSTANCE) BACK(osg::TextureBuffer, "osg::TextureBuffer",INSTANCE)
#endif

