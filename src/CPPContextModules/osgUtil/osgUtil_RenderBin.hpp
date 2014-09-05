#ifndef CONTEXT_META_CLASS_osgUtil_RenderBin_H
#define CONTEXT_META_CLASS_osgUtil_RenderBin_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/RenderBin>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_RenderBin: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::RenderBin> 				 > _managedinstances;
   public:
osgUtil_RenderBin():MetaClass( "osgUtil::RenderBin"){_typeid=&typeid(osgUtil::RenderBin );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_RenderBin(INSTANCE) BACK(osgUtil::RenderBin, "osgUtil::RenderBin",INSTANCE)
#endif

