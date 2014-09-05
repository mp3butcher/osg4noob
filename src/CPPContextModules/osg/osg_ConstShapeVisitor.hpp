#ifndef CONTEXT_META_CLASS_osg_ConstShapeVisitor_H
#define CONTEXT_META_CLASS_osg_ConstShapeVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ConstShapeVisitor: public MetaClass{
protected:
std::set<osg::ConstShapeVisitor* 							 > _managedinstances;
   public:
osg_ConstShapeVisitor():MetaClass( "osg::ConstShapeVisitor"){_typeid=&typeid(osg::ConstShapeVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ConstShapeVisitor(INSTANCE) BACK(osg::ConstShapeVisitor, "osg::ConstShapeVisitor",INSTANCE)
#endif

