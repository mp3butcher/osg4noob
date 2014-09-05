#ifndef CONTEXT_META_CLASS_osg_BufferObjectProfile_H
#define CONTEXT_META_CLASS_osg_BufferObjectProfile_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_BufferObjectProfile: public MetaClass{
protected:
std::set<osg::BufferObjectProfile* 							 > _managedinstances;
   public:
osg_BufferObjectProfile():MetaClass( "osg::BufferObjectProfile"){_typeid=&typeid(osg::BufferObjectProfile );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_BufferObjectProfile(INSTANCE) BACK(osg::BufferObjectProfile, "osg::BufferObjectProfile",INSTANCE)
#endif

