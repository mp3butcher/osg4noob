#ifndef CONTEXT_META_CLASS_osgUtil_RenderLeaf_H
#define CONTEXT_META_CLASS_osgUtil_RenderLeaf_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/RenderLeaf>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_RenderLeaf: public MetaClass{
protected:
   public:
osgUtil_RenderLeaf():MetaClass( "osgUtil::RenderLeaf"){_typeid=&typeid(osgUtil::RenderLeaf );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_RenderLeaf(INSTANCE) BACK(osgUtil::RenderLeaf, "osgUtil::RenderLeaf",INSTANCE)
#endif

