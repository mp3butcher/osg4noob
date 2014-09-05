#ifndef CONTEXT_META_CLASS_osgUtil_dereference_less_H
#define CONTEXT_META_CLASS_osgUtil_dereference_less_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/EdgeCollector>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_dereference_less: public MetaClass{
protected:
   public:
osgUtil_dereference_less():MetaClass( "osgUtil::dereference_less"){_typeid=&typeid(osgUtil::dereference_less );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_dereference_less(INSTANCE) BACK(osgUtil::dereference_less, "osgUtil::dereference_less",INSTANCE)
#endif

