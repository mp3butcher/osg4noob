#ifndef CONTEXT_META_CLASS_osg_PointSprite_H
#define CONTEXT_META_CLASS_osg_PointSprite_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PointSprite>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PointSprite: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::PointSprite> 				 > _managedinstances;
   public:
osg_PointSprite():MetaClass( "osg::PointSprite"){_typeid=&typeid(osg::PointSprite );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PointSprite(INSTANCE) BACK(osg::PointSprite, "osg::PointSprite",INSTANCE)
#endif

