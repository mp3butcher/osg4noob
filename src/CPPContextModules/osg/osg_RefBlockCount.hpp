#ifndef CONTEXT_META_CLASS_osg_RefBlockCount_H
#define CONTEXT_META_CLASS_osg_RefBlockCount_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/OperationThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_RefBlockCount: public MetaClass{
protected:
   public:
osg_RefBlockCount():MetaClass( "osg::RefBlockCount"){_typeid=&typeid(osg::RefBlockCount );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_RefBlockCount(INSTANCE) BACK(osg::RefBlockCount, "osg::RefBlockCount",INSTANCE)
#endif

