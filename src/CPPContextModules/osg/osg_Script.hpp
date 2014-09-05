#ifndef CONTEXT_META_CLASS_osg_Script_H
#define CONTEXT_META_CLASS_osg_Script_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ScriptEngine>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Script: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Script> 				 > _managedinstances;
   public:
osg_Script():MetaClass( "osg::Script"){_typeid=&typeid(osg::Script );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Script(INSTANCE) BACK(osg::Script, "osg::Script",INSTANCE)
#endif

