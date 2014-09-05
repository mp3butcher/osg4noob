#include "osg_BlendEquation.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/BlendEquation>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_BlendEquation::createInstance(){
osg::ref_ptr<osg::BlendEquation> realinstance				;
realinstance = new osg::BlendEquation ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
