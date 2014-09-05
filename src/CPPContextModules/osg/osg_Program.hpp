#ifndef CONTEXT_META_CLASS_osg_Program_H
#define CONTEXT_META_CLASS_osg_Program_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Program>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Program: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Program> 				 > _managedinstances;
   public:
osg_Program():MetaClass( "osg::Program"){_typeid=&typeid(osg::Program );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Program(INSTANCE) BACK(osg::Program, "osg::Program",INSTANCE)
#endif

