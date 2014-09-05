#ifndef CONTEXT_META_CLASS_osg_QueryGeometry_H
#define CONTEXT_META_CLASS_osg_QueryGeometry_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/OcclusionQueryNode>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_QueryGeometry: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::QueryGeometry> 				 > _managedinstances;
   public:
osg_QueryGeometry():MetaClass( "osg::QueryGeometry"){_typeid=&typeid(osg::QueryGeometry );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_QueryGeometry(INSTANCE) BACK(osg::QueryGeometry, "osg::QueryGeometry",INSTANCE)
#endif

