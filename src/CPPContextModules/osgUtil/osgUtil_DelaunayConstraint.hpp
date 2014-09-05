#ifndef CONTEXT_META_CLASS_osgUtil_DelaunayConstraint_H
#define CONTEXT_META_CLASS_osgUtil_DelaunayConstraint_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/DelaunayTriangulator>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_DelaunayConstraint: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::DelaunayConstraint> 				 > _managedinstances;
   public:
osgUtil_DelaunayConstraint():MetaClass( "osgUtil::DelaunayConstraint"){_typeid=&typeid(osgUtil::DelaunayConstraint );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_DelaunayConstraint(INSTANCE) BACK(osgUtil::DelaunayConstraint, "osgUtil::DelaunayConstraint",INSTANCE)
#endif

