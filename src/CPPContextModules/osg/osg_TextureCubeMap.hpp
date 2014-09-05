#ifndef CONTEXT_META_CLASS_osg_TextureCubeMap_H
#define CONTEXT_META_CLASS_osg_TextureCubeMap_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/TextureCubeMap>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TextureCubeMap: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TextureCubeMap> 				 > _managedinstances;
   public:
osg_TextureCubeMap():MetaClass( "osg::TextureCubeMap"){_typeid=&typeid(osg::TextureCubeMap );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TextureCubeMap(INSTANCE) BACK(osg::TextureCubeMap, "osg::TextureCubeMap",INSTANCE)
#endif

