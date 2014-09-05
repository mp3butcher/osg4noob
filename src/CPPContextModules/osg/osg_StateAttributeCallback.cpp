#include "osg_StateAttributeCallback.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/StateAttributeCallback>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_StateAttributeCallback::createInstance(){
osg::ref_ptr<osg::StateAttributeCallback> realinstance				;
realinstance = new osg::StateAttributeCallback ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
