#include "osg_Script.hpp"
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
	  Instance osg_Script::createInstance(){
osg::ref_ptr<osg::Script> realinstance				;
realinstance = new osg::Script ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
