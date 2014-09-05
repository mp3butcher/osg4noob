#ifndef CONTEXT_META_CLASS_osgUtil_GLObjectsVisitor_H
#define CONTEXT_META_CLASS_osgUtil_GLObjectsVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/GLObjectsVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_GLObjectsVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::GLObjectsVisitor> 				 > _managedinstances;
   public:
osgUtil_GLObjectsVisitor():MetaClass( "osgUtil::GLObjectsVisitor"){_typeid=&typeid(osgUtil::GLObjectsVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_GLObjectsVisitor(INSTANCE) BACK(osgUtil::GLObjectsVisitor, "osgUtil::GLObjectsVisitor",INSTANCE)
#endif

