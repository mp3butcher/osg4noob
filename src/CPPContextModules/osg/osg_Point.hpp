#ifndef CONTEXT_META_CLASS_osg_Point_H
#define CONTEXT_META_CLASS_osg_Point_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Point>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Point: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Point> 				 > _managedinstances;
   public:
osg_Point():MetaClass( "osg::Point"){_typeid=&typeid(osg::Point );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Point(INSTANCE) BACK(osg::Point, "osg::Point",INSTANCE)
#endif

