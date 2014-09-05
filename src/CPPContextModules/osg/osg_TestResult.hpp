#ifndef CONTEXT_META_CLASS_osg_TestResult_H
#define CONTEXT_META_CLASS_osg_TestResult_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/OcclusionQueryNode>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TestResult: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TestResult> 				 > _managedinstances;
   public:
osg_TestResult():MetaClass( "osg::TestResult"){_typeid=&typeid(osg::TestResult );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TestResult(INSTANCE) BACK(osg::TestResult, "osg::TestResult",INSTANCE)
#endif

