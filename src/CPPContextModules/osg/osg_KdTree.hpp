#ifndef CONTEXT_META_CLASS_osg_KdTree_H
#define CONTEXT_META_CLASS_osg_KdTree_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/KdTree>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_KdTree: public MetaClass{
protected:
   public:
osg_KdTree():MetaClass( "osg::KdTree"){_typeid=&typeid(osg::KdTree );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_KdTree(INSTANCE) BACK(osg::KdTree, "osg::KdTree",INSTANCE)
#endif

