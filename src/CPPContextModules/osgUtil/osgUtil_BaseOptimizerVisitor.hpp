#ifndef CONTEXT_META_CLASS_osgUtil_BaseOptimizerVisitor_H
#define CONTEXT_META_CLASS_osgUtil_BaseOptimizerVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/Optimizer>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_BaseOptimizerVisitor: public MetaClass{
protected:
   public:
osgUtil_BaseOptimizerVisitor():MetaClass( "osgUtil::BaseOptimizerVisitor"){_typeid=&typeid(osgUtil::BaseOptimizerVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_BaseOptimizerVisitor(INSTANCE) BACK(osgUtil::BaseOptimizerVisitor, "osgUtil::BaseOptimizerVisitor",INSTANCE)
#endif

