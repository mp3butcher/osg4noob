#ifndef CONTEXT_META_CLASS_osgUtil_IntersectorGroup_H
#define CONTEXT_META_CLASS_osgUtil_IntersectorGroup_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IntersectionVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_IntersectorGroup: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::IntersectorGroup> 				 > _managedinstances;
   public:
osgUtil_IntersectorGroup():MetaClass( "osgUtil::IntersectorGroup"){_typeid=&typeid(osgUtil::IntersectorGroup );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_IntersectorGroup(INSTANCE) BACK(osgUtil::IntersectorGroup, "osgUtil::IntersectorGroup",INSTANCE)
#endif

