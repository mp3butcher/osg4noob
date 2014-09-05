#ifndef CONTEXT_META_CLASS_osgUtil_StateToCompile_H
#define CONTEXT_META_CLASS_osgUtil_StateToCompile_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IncrementalCompileOperation>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_StateToCompile: public MetaClass{
protected:
   public:
osgUtil_StateToCompile():MetaClass( "osgUtil::StateToCompile"){_typeid=&typeid(osgUtil::StateToCompile );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_StateToCompile(INSTANCE) BACK(osgUtil::StateToCompile, "osgUtil::StateToCompile",INSTANCE)
#endif

