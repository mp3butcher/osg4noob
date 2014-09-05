#ifndef CONTEXT_META_CLASS_osg_GLBeginEndAdapter_H
#define CONTEXT_META_CLASS_osg_GLBeginEndAdapter_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GLBeginEndAdapter>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_GLBeginEndAdapter: public MetaClass{
protected:
std::set<osg::GLBeginEndAdapter* 							 > _managedinstances;
   public:
osg_GLBeginEndAdapter():MetaClass( "osg::GLBeginEndAdapter"){_typeid=&typeid(osg::GLBeginEndAdapter );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_GLBeginEndAdapter(INSTANCE) BACK(osg::GLBeginEndAdapter, "osg::GLBeginEndAdapter",INSTANCE)
#endif

