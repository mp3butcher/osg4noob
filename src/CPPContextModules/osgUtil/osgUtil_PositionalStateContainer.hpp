#ifndef CONTEXT_META_CLASS_osgUtil_PositionalStateContainer_H
#define CONTEXT_META_CLASS_osgUtil_PositionalStateContainer_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/PositionalStateContainer>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_PositionalStateContainer: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::PositionalStateContainer> 				 > _managedinstances;
   public:
osgUtil_PositionalStateContainer():MetaClass( "osgUtil::PositionalStateContainer"){_typeid=&typeid(osgUtil::PositionalStateContainer );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_PositionalStateContainer(INSTANCE) BACK(osgUtil::PositionalStateContainer, "osgUtil::PositionalStateContainer",INSTANCE)
#endif

