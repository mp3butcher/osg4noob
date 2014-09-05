#include "osg_StencilTwoSided.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/StencilTwoSided>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_StencilTwoSided::createInstance(){
osg::ref_ptr<osg::StencilTwoSided> realinstance				;
realinstance = new osg::StencilTwoSided ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
