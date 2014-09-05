#ifndef CONTEXT_META_CLASS_osg_TriangleMesh_H
#define CONTEXT_META_CLASS_osg_TriangleMesh_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TriangleMesh: public MetaClass{
protected:
   public:
osg_TriangleMesh():MetaClass( "osg::TriangleMesh"){_typeid=&typeid(osg::TriangleMesh );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TriangleMesh(INSTANCE) BACK(osg::TriangleMesh, "osg::TriangleMesh",INSTANCE)
#endif

