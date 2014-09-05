#ifndef CONTEXT_META_CLASS_osgUtil_IncrementalCompileOperation_H
#define CONTEXT_META_CLASS_osgUtil_IncrementalCompileOperation_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IncrementalCompileOperation>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_IncrementalCompileOperation: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::IncrementalCompileOperation> 				 > _managedinstances;
   public:
osgUtil_IncrementalCompileOperation():MetaClass( "osgUtil::IncrementalCompileOperation"){_typeid=&typeid(osgUtil::IncrementalCompileOperation );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_IncrementalCompileOperation(INSTANCE) BACK(osgUtil::IncrementalCompileOperation, "osgUtil::IncrementalCompileOperation",INSTANCE)
#endif

