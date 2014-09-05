#ifndef CONTEXT_META_CLASS_osgUtil_EdgeCollector_H
#define CONTEXT_META_CLASS_osgUtil_EdgeCollector_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/EdgeCollector>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_EdgeCollector: public MetaClass{
protected:
   public:
osgUtil_EdgeCollector():MetaClass( "osgUtil::EdgeCollector"){_typeid=&typeid(osgUtil::EdgeCollector );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_EdgeCollector(INSTANCE) BACK(osgUtil::EdgeCollector, "osgUtil::EdgeCollector",INSTANCE)
#endif

