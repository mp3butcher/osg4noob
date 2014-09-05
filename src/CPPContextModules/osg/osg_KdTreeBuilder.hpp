#ifndef CONTEXT_META_CLASS_osg_KdTreeBuilder_H
#define CONTEXT_META_CLASS_osg_KdTreeBuilder_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/KdTree>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_KdTreeBuilder: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::KdTreeBuilder> 				 > _managedinstances;
   public:
osg_KdTreeBuilder():MetaClass( "osg::KdTreeBuilder"){_typeid=&typeid(osg::KdTreeBuilder );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_KdTreeBuilder(INSTANCE) BACK(osg::KdTreeBuilder, "osg::KdTreeBuilder",INSTANCE)
#endif

