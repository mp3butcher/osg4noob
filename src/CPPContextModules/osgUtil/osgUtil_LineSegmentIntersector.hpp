#ifndef CONTEXT_META_CLASS_osgUtil_LineSegmentIntersector_H
#define CONTEXT_META_CLASS_osgUtil_LineSegmentIntersector_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/LineSegmentIntersector>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_LineSegmentIntersector: public MetaClass{
protected:
   public:
osgUtil_LineSegmentIntersector():MetaClass( "osgUtil::LineSegmentIntersector"){_typeid=&typeid(osgUtil::LineSegmentIntersector );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_LineSegmentIntersector(INSTANCE) BACK(osgUtil::LineSegmentIntersector, "osgUtil::LineSegmentIntersector",INSTANCE)
#endif

