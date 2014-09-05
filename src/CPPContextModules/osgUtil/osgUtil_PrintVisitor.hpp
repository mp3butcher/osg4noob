#ifndef CONTEXT_META_CLASS_osgUtil_PrintVisitor_H
#define CONTEXT_META_CLASS_osgUtil_PrintVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/PrintVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_PrintVisitor: public MetaClass{
protected:
   public:
osgUtil_PrintVisitor():MetaClass( "osgUtil::PrintVisitor"){_typeid=&typeid(osgUtil::PrintVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_PrintVisitor(INSTANCE) BACK(osgUtil::PrintVisitor, "osgUtil::PrintVisitor",INSTANCE)
#endif

