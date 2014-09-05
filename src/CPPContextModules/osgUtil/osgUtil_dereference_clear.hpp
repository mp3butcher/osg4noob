#ifndef CONTEXT_META_CLASS_osgUtil_dereference_clear_H
#define CONTEXT_META_CLASS_osgUtil_dereference_clear_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/EdgeCollector>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_dereference_clear: public MetaClass{
protected:
   public:
osgUtil_dereference_clear():MetaClass( "osgUtil::dereference_clear"){_typeid=&typeid(osgUtil::dereference_clear );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_dereference_clear(INSTANCE) BACK(osgUtil::dereference_clear, "osgUtil::dereference_clear",INSTANCE)
#endif

