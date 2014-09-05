#ifndef CONTEXT_META_CLASS_osg_Operation_H
#define CONTEXT_META_CLASS_osg_Operation_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/OperationThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Operation: public MetaClass{
protected:
   public:
osg_Operation():MetaClass( "osg::Operation"){_typeid=&typeid(osg::Operation );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Operation(INSTANCE) BACK(osg::Operation, "osg::Operation",INSTANCE)
#endif

