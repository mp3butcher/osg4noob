#include "osg_Light.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Light>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Light::createInstance(){
osg::ref_ptr<osg::Light> realinstance				;
realinstance = new osg::Light ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
