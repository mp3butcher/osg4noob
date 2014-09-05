#include "osg_Fog.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Fog>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Fog::createInstance(){
osg::ref_ptr<osg::Fog> realinstance				;
realinstance = new osg::Fog ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
