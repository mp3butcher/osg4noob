#ifndef CONTEXT_META_CLASS_osg_LineWidth_H
#define CONTEXT_META_CLASS_osg_LineWidth_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/LineWidth>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_LineWidth: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::LineWidth> 				 > _managedinstances;
   public:
osg_LineWidth():MetaClass( "osg::LineWidth"){_typeid=&typeid(osg::LineWidth );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_LineWidth(INSTANCE) BACK(osg::LineWidth, "osg::LineWidth",INSTANCE)
#endif

