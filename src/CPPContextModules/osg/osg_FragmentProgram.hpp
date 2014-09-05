#ifndef CONTEXT_META_CLASS_osg_FragmentProgram_H
#define CONTEXT_META_CLASS_osg_FragmentProgram_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/FragmentProgram>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_FragmentProgram: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::FragmentProgram> 				 > _managedinstances;
   public:
osg_FragmentProgram():MetaClass( "osg::FragmentProgram"){_typeid=&typeid(osg::FragmentProgram );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_FragmentProgram(INSTANCE) BACK(osg::FragmentProgram, "osg::FragmentProgram",INSTANCE)
#endif

