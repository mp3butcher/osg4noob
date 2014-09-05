#include "osg_Camera.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Camera>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Camera::createInstance(){
osg::ref_ptr<osg::Camera> realinstance				;
realinstance = new osg::Camera ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
