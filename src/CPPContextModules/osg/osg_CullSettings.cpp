#include "osg_CullSettings.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/CullSettings>

using namespace std;
using namespace pmoc;
	  Instance osg_CullSettings::createInstance(){
osg::CullSettings* realinstance							;
realinstance= new osg::CullSettings()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
