#include "osg_BlendColor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/BlendColor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_BlendColor::createInstance(){
osg::ref_ptr<osg::BlendColor> realinstance				;
realinstance = new osg::BlendColor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
