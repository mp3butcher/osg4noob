#ifndef CONTEXT_META_CLASS_osg_BufferData_H
#define CONTEXT_META_CLASS_osg_BufferData_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_BufferData: public MetaClass{
protected:
   public:
osg_BufferData():MetaClass( "osg::BufferData"){_typeid=&typeid(osg::BufferData );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_BufferData(INSTANCE) BACK(osg::BufferData, "osg::BufferData",INSTANCE)
#endif

