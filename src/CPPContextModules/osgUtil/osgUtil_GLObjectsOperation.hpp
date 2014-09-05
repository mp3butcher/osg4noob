#ifndef CONTEXT_META_CLASS_osgUtil_GLObjectsOperation_H
#define CONTEXT_META_CLASS_osgUtil_GLObjectsOperation_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/GLObjectsVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_GLObjectsOperation: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::GLObjectsOperation> 				 > _managedinstances;
   public:
osgUtil_GLObjectsOperation():MetaClass( "osgUtil::GLObjectsOperation"){_typeid=&typeid(osgUtil::GLObjectsOperation );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_GLObjectsOperation(INSTANCE) BACK(osgUtil::GLObjectsOperation, "osgUtil::GLObjectsOperation",INSTANCE)
#endif

