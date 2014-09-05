#ifndef CONTEXT_META_CLASS_osg_GL2Extensions_H
#define CONTEXT_META_CLASS_osg_GL2Extensions_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GL2Extensions>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_GL2Extensions: public MetaClass{
protected:
   public:
osg_GL2Extensions():MetaClass( "osg::GL2Extensions"){_typeid=&typeid(osg::GL2Extensions );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_GL2Extensions(INSTANCE) BACK(osg::GL2Extensions, "osg::GL2Extensions",INSTANCE)
#endif

