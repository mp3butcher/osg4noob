#ifndef CONTEXT_META_CLASS_osg_GraphicsThread_H
#define CONTEXT_META_CLASS_osg_GraphicsThread_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_GraphicsThread: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::GraphicsThread> 				 > _managedinstances;
   public:
osg_GraphicsThread():MetaClass( "osg::GraphicsThread"){_typeid=&typeid(osg::GraphicsThread );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_GraphicsThread(INSTANCE) BACK(osg::GraphicsThread, "osg::GraphicsThread",INSTANCE)
#endif

