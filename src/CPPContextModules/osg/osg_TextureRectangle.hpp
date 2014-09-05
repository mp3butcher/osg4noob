#ifndef CONTEXT_META_CLASS_osg_TextureRectangle_H
#define CONTEXT_META_CLASS_osg_TextureRectangle_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/TextureRectangle>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TextureRectangle: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TextureRectangle> 				 > _managedinstances;
   public:
osg_TextureRectangle():MetaClass( "osg::TextureRectangle"){_typeid=&typeid(osg::TextureRectangle );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TextureRectangle(INSTANCE) BACK(osg::TextureRectangle, "osg::TextureRectangle",INSTANCE)
#endif

