#ifndef CONTEXT_META_CLASS_osgUtil_ShaderGenCache_H
#define CONTEXT_META_CLASS_osgUtil_ShaderGenCache_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/ShaderGen>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_ShaderGenCache: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::ShaderGenCache> 				 > _managedinstances;
   public:
osgUtil_ShaderGenCache():MetaClass( "osgUtil::ShaderGenCache"){_typeid=&typeid(osgUtil::ShaderGenCache );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_ShaderGenCache(INSTANCE) BACK(osgUtil::ShaderGenCache, "osgUtil::ShaderGenCache",INSTANCE)
#endif

