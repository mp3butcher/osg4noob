#include "osg_ClampColor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ClampColor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ClampColor::createInstance(){
osg::ref_ptr<osg::ClampColor> realinstance				;
realinstance = new osg::ClampColor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
