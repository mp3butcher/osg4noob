#ifndef CONTEXT_META_CLASS_osg_ScriptEngine_H
#define CONTEXT_META_CLASS_osg_ScriptEngine_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ScriptEngine>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ScriptEngine: public MetaClass{
protected:
   public:
osg_ScriptEngine():MetaClass( "osg::ScriptEngine"){_typeid=&typeid(osg::ScriptEngine );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ScriptEngine(INSTANCE) BACK(osg::ScriptEngine, "osg::ScriptEngine",INSTANCE)
#endif

