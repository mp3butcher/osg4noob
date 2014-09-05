#ifndef CONTEXT_META_CLASS_osg_Vec2us_H
#define CONTEXT_META_CLASS_osg_Vec2us_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2us>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Vec2us: public MetaClass{
protected:
std::set<osg::Vec2us* 							 > _managedinstances;
   public:
osg_Vec2us():MetaClass( "osg::Vec2us"){_typeid=&typeid(osg::Vec2us );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Vec2us(INSTANCE) BACK(osg::Vec2us, "osg::Vec2us",INSTANCE)
#endif

