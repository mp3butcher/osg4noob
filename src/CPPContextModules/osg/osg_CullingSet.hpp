#ifndef CONTEXT_META_CLASS_osg_CullingSet_H
#define CONTEXT_META_CLASS_osg_CullingSet_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/CullingSet>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_CullingSet: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::CullingSet> 				 > _managedinstances;
   public:
osg_CullingSet():MetaClass( "osg::CullingSet"){_typeid=&typeid(osg::CullingSet );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_CullingSet(INSTANCE) BACK(osg::CullingSet, "osg::CullingSet",INSTANCE)
#endif

