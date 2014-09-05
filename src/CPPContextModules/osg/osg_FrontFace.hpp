#ifndef CONTEXT_META_CLASS_osg_FrontFace_H
#define CONTEXT_META_CLASS_osg_FrontFace_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/FrontFace>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_FrontFace: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::FrontFace> 				 > _managedinstances;
   public:
osg_FrontFace():MetaClass( "osg::FrontFace"){_typeid=&typeid(osg::FrontFace );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_FrontFace(INSTANCE) BACK(osg::FrontFace, "osg::FrontFace",INSTANCE)
#endif

