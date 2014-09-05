#ifndef CONTEXT_META_CLASS_osg_ConvexPlanarPolygon_H
#define CONTEXT_META_CLASS_osg_ConvexPlanarPolygon_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ConvexPlanarPolygon>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ConvexPlanarPolygon: public MetaClass{
protected:
std::set<osg::ConvexPlanarPolygon* 							 > _managedinstances;
   public:
osg_ConvexPlanarPolygon():MetaClass( "osg::ConvexPlanarPolygon"){_typeid=&typeid(osg::ConvexPlanarPolygon );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ConvexPlanarPolygon(INSTANCE) BACK(osg::ConvexPlanarPolygon, "osg::ConvexPlanarPolygon",INSTANCE)
#endif

