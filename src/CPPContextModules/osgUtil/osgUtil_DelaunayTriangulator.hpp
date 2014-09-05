#ifndef CONTEXT_META_CLASS_osgUtil_DelaunayTriangulator_H
#define CONTEXT_META_CLASS_osgUtil_DelaunayTriangulator_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/DelaunayTriangulator>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_DelaunayTriangulator: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::DelaunayTriangulator> 				 > _managedinstances;
   public:
osgUtil_DelaunayTriangulator():MetaClass( "osgUtil::DelaunayTriangulator"){_typeid=&typeid(osgUtil::DelaunayTriangulator );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_DelaunayTriangulator(INSTANCE) BACK(osgUtil::DelaunayTriangulator, "osgUtil::DelaunayTriangulator",INSTANCE)
#endif

