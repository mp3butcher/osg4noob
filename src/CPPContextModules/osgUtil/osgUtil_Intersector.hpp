#ifndef CONTEXT_META_CLASS_osgUtil_Intersector_H
#define CONTEXT_META_CLASS_osgUtil_Intersector_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IntersectionVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_Intersector: public MetaClass{
protected:
   public:
osgUtil_Intersector():MetaClass( "osgUtil::Intersector"){_typeid=&typeid(osgUtil::Intersector );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_Intersector(INSTANCE) BACK(osgUtil::Intersector, "osgUtil::Intersector",INSTANCE)
#endif

