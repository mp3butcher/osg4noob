#include "osg_ScriptCallback.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ScriptEngine>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ScriptCallback::createInstance(){
osg::ref_ptr<osg::ScriptCallback> realinstance				;
realinstance = new osg::ScriptCallback ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
