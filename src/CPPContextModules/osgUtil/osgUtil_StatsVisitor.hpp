#ifndef CONTEXT_META_CLASS_osgUtil_StatsVisitor_H
#define CONTEXT_META_CLASS_osgUtil_StatsVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/Statistics>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_StatsVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::StatsVisitor> 				 > _managedinstances;
   public:
osgUtil_StatsVisitor():MetaClass( "osgUtil::StatsVisitor"){_typeid=&typeid(osgUtil::StatsVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_StatsVisitor(INSTANCE) BACK(osgUtil::StatsVisitor, "osgUtil::StatsVisitor",INSTANCE)
#endif

