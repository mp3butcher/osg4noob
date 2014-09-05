#include "osg_State.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/State>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_State::createInstance(){
osg::ref_ptr<osg::State> realinstance				;
realinstance = new osg::State ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
