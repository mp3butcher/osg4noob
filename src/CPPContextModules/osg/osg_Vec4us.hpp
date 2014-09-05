#ifndef CONTEXT_META_CLASS_osg_Vec4us_H
#define CONTEXT_META_CLASS_osg_Vec4us_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4us>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec4us: public MetaClass{
protected:
std::set<osg::Vec4us* 							 > _managedinstances;
   public:
osg_Vec4us():MetaClass( "osg::Vec4us"){_typeid=&typeid(osg::Vec4us );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec4us(INSTANCE) BACK(osg::Vec4us, "osg::Vec4us",INSTANCE)
#endif

