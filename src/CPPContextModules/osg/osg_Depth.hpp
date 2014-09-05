#ifndef CONTEXT_META_CLASS_osg_Depth_H
#define CONTEXT_META_CLASS_osg_Depth_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Depth>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Depth: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Depth> 				 > _managedinstances;
   public:
osg_Depth():MetaClass( "osg::Depth"){_typeid=&typeid(osg::Depth );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Depth(INSTANCE) BACK(osg::Depth, "osg::Depth",INSTANCE)
#endif

