#ifndef CONTEXT_META_CLASS_osg_ScriptCallback_H
#define CONTEXT_META_CLASS_osg_ScriptCallback_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ScriptEngine>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ScriptCallback: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ScriptCallback> 				 > _managedinstances;
   public:
osg_ScriptCallback():MetaClass( "osg::ScriptCallback"){_typeid=&typeid(osg::ScriptCallback );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ScriptCallback(INSTANCE) BACK(osg::ScriptCallback, "osg::ScriptCallback",INSTANCE)
#endif

