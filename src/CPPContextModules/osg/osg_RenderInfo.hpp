#ifndef CONTEXT_META_CLASS_osg_RenderInfo_H
#define CONTEXT_META_CLASS_osg_RenderInfo_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/RenderInfo>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_RenderInfo: public MetaClass{
protected:
std::set<osg::RenderInfo* 							 > _managedinstances;
   public:
osg_RenderInfo():MetaClass( "osg::RenderInfo"){_typeid=&typeid(osg::RenderInfo );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_RenderInfo(INSTANCE) BACK(osg::RenderInfo, "osg::RenderInfo",INSTANCE)
#endif

