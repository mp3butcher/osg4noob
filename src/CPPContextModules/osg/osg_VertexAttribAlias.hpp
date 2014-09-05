#ifndef CONTEXT_META_CLASS_osg_VertexAttribAlias_H
#define CONTEXT_META_CLASS_osg_VertexAttribAlias_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/State>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_VertexAttribAlias: public MetaClass{
protected:
std::set<osg::VertexAttribAlias* 							 > _managedinstances;
   public:
osg_VertexAttribAlias():MetaClass( "osg::VertexAttribAlias"){_typeid=&typeid(osg::VertexAttribAlias );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_VertexAttribAlias(INSTANCE) BACK(osg::VertexAttribAlias, "osg::VertexAttribAlias",INSTANCE)
#endif

