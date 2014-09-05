#ifndef CONTEXT_META_CLASS_osgUtil_TriStripVisitor_H
#define CONTEXT_META_CLASS_osgUtil_TriStripVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/TriStripVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_TriStripVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::TriStripVisitor> 				 > _managedinstances;
   public:
osgUtil_TriStripVisitor():MetaClass( "osgUtil::TriStripVisitor"){_typeid=&typeid(osgUtil::TriStripVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_TriStripVisitor(INSTANCE) BACK(osgUtil::TriStripVisitor, "osgUtil::TriStripVisitor",INSTANCE)
#endif

