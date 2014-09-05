#ifndef CONTEXT_META_CLASS_osg_Texture2D_H
#define CONTEXT_META_CLASS_osg_Texture2D_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Texture2D>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Texture2D: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Texture2D> 				 > _managedinstances;
   public:
osg_Texture2D():MetaClass( "osg::Texture2D"){_typeid=&typeid(osg::Texture2D );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Texture2D(INSTANCE) BACK(osg::Texture2D, "osg::Texture2D",INSTANCE)
#endif

