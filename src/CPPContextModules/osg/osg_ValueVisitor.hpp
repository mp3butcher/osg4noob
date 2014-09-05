#ifndef CONTEXT_META_CLASS_osg_ValueVisitor_H
#define CONTEXT_META_CLASS_osg_ValueVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Array>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ValueVisitor: public MetaClass{
protected:
std::set<osg::ValueVisitor* 							 > _managedinstances;
   public:
osg_ValueVisitor():MetaClass( "osg::ValueVisitor"){_typeid=&typeid(osg::ValueVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ValueVisitor(INSTANCE) BACK(osg::ValueVisitor, "osg::ValueVisitor",INSTANCE)
#endif

