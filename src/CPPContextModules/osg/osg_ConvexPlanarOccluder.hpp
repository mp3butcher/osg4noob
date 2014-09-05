#ifndef CONTEXT_META_CLASS_osg_ConvexPlanarOccluder_H
#define CONTEXT_META_CLASS_osg_ConvexPlanarOccluder_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ConvexPlanarOccluder>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ConvexPlanarOccluder: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ConvexPlanarOccluder> 				 > _managedinstances;
   public:
osg_ConvexPlanarOccluder():MetaClass( "osg::ConvexPlanarOccluder"){_typeid=&typeid(osg::ConvexPlanarOccluder );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ConvexPlanarOccluder(INSTANCE) BACK(osg::ConvexPlanarOccluder, "osg::ConvexPlanarOccluder",INSTANCE)
#endif

