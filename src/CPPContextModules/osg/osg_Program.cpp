#include "osg_Program.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Program>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Program::createInstance(){
osg::ref_ptr<osg::Program> realinstance				;
realinstance = new osg::Program ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
