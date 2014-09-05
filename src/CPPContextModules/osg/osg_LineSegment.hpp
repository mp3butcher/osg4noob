#ifndef CONTEXT_META_CLASS_osg_LineSegment_H
#define CONTEXT_META_CLASS_osg_LineSegment_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/LineSegment>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_LineSegment: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::LineSegment> 				 > _managedinstances;
   public:
osg_LineSegment():MetaClass( "osg::LineSegment"){_typeid=&typeid(osg::LineSegment );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_LineSegment(INSTANCE) BACK(osg::LineSegment, "osg::LineSegment",INSTANCE)
#endif

