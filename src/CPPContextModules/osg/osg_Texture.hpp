#ifndef CONTEXT_META_CLASS_osg_Texture_H
#define CONTEXT_META_CLASS_osg_Texture_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Texture>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Texture: public MetaClass{
protected:
   public:
osg_Texture():MetaClass( "osg::Texture"){_typeid=&typeid(osg::Texture );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Texture(INSTANCE) BACK(osg::Texture, "osg::Texture",INSTANCE)
#endif

