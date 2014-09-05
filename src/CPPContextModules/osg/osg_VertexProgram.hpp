#ifndef CONTEXT_META_CLASS_osg_VertexProgram_H
#define CONTEXT_META_CLASS_osg_VertexProgram_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/VertexProgram>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_VertexProgram: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::VertexProgram> 				 > _managedinstances;
   public:
osg_VertexProgram():MetaClass( "osg::VertexProgram"){_typeid=&typeid(osg::VertexProgram );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_VertexProgram(INSTANCE) BACK(osg::VertexProgram, "osg::VertexProgram",INSTANCE)
#endif

