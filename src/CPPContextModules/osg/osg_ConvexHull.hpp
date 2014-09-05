#ifndef CONTEXT_META_CLASS_osg_ConvexHull_H
#define CONTEXT_META_CLASS_osg_ConvexHull_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ConvexHull: public MetaClass{
protected:
   public:
osg_ConvexHull():MetaClass( "osg::ConvexHull"){_typeid=&typeid(osg::ConvexHull );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ConvexHull(INSTANCE) BACK(osg::ConvexHull, "osg::ConvexHull",INSTANCE)
#endif

