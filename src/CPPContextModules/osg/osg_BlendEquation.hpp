#ifndef CONTEXT_META_CLASS_osg_BlendEquation_H
#define CONTEXT_META_CLASS_osg_BlendEquation_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BlendEquation>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_BlendEquation: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::BlendEquation> 				 > _managedinstances;
   public:
osg_BlendEquation():MetaClass( "osg::BlendEquation"){_typeid=&typeid(osg::BlendEquation );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_BlendEquation(INSTANCE) BACK(osg::BlendEquation, "osg::BlendEquation",INSTANCE)
#endif

