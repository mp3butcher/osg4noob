#include "osg_DisplaySettings.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/DisplaySettings>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_DisplaySettings::createInstance(){
osg::ref_ptr<osg::DisplaySettings> realinstance				;
realinstance = new osg::DisplaySettings ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
