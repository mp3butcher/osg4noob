#ifndef CONTEXT_META_CLASS_osg_ImageSequence_H
#define CONTEXT_META_CLASS_osg_ImageSequence_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ImageSequence>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ImageSequence: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ImageSequence> 				 > _managedinstances;
   public:
osg_ImageSequence():MetaClass( "osg::ImageSequence"){_typeid=&typeid(osg::ImageSequence );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ImageSequence(INSTANCE) BACK(osg::ImageSequence, "osg::ImageSequence",INSTANCE)
#endif

