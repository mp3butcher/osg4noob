#ifndef CONTEXT_META_CLASS_osgUtil_RenderStage_H
#define CONTEXT_META_CLASS_osgUtil_RenderStage_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/RenderStage>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_RenderStage: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::RenderStage> 				 > _managedinstances;
   public:
osgUtil_RenderStage():MetaClass( "osgUtil::RenderStage"){_typeid=&typeid(osgUtil::RenderStage );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_RenderStage(INSTANCE) BACK(osgUtil::RenderStage, "osgUtil::RenderStage",INSTANCE)
#endif

