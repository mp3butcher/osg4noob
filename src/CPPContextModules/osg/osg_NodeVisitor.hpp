#ifndef CONTEXT_META_CLASS_osg_NodeVisitor_H
#define CONTEXT_META_CLASS_osg_NodeVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/NodeVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_NodeVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::NodeVisitor> 				 > _managedinstances;
   public:
osg_NodeVisitor():MetaClass( "osg::NodeVisitor"){_typeid=&typeid(osg::NodeVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_NodeVisitor(INSTANCE) BACK(osg::NodeVisitor, "osg::NodeVisitor",INSTANCE)
#endif

