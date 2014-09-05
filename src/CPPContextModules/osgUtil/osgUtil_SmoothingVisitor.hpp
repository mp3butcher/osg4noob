#ifndef CONTEXT_META_CLASS_osgUtil_SmoothingVisitor_H
#define CONTEXT_META_CLASS_osgUtil_SmoothingVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/SmoothingVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_SmoothingVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::SmoothingVisitor> 				 > _managedinstances;
   public:
osgUtil_SmoothingVisitor():MetaClass( "osgUtil::SmoothingVisitor"){_typeid=&typeid(osgUtil::SmoothingVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_SmoothingVisitor(INSTANCE) BACK(osgUtil::SmoothingVisitor, "osgUtil::SmoothingVisitor",INSTANCE)
#endif

