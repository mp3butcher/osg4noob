#include "osg_NodeCallback.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/NodeCallback>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_NodeCallback::createInstance(){
osg::ref_ptr<osg::NodeCallback> realinstance				;
realinstance = new osg::NodeCallback ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
