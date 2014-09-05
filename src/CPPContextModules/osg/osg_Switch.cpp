#include "osg_Switch.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Switch>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Switch::createInstance(){
osg::ref_ptr<osg::Switch> realinstance				;
realinstance = new osg::Switch ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
