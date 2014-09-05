#ifndef CONTEXT_META_CLASS_osg_PrimitiveRestartIndex_H
#define CONTEXT_META_CLASS_osg_PrimitiveRestartIndex_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveRestartIndex>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PrimitiveRestartIndex: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::PrimitiveRestartIndex> 				 > _managedinstances;
   public:
osg_PrimitiveRestartIndex():MetaClass( "osg::PrimitiveRestartIndex"){_typeid=&typeid(osg::PrimitiveRestartIndex );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PrimitiveRestartIndex(INSTANCE) BACK(osg::PrimitiveRestartIndex, "osg::PrimitiveRestartIndex",INSTANCE)
#endif

