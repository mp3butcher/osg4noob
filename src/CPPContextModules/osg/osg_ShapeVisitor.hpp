#ifndef CONTEXT_META_CLASS_osg_ShapeVisitor_H
#define CONTEXT_META_CLASS_osg_ShapeVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ShapeVisitor: public MetaClass{
protected:
std::set<osg::ShapeVisitor* 							 > _managedinstances;
   public:
osg_ShapeVisitor():MetaClass( "osg::ShapeVisitor"){_typeid=&typeid(osg::ShapeVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ShapeVisitor(INSTANCE) BACK(osg::ShapeVisitor, "osg::ShapeVisitor",INSTANCE)
#endif

