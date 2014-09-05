#include "osg_ShadowVolumeOccluder.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ShadowVolumeOccluder>

using namespace std;
using namespace pmoc;
	  Instance osg_ShadowVolumeOccluder::createInstance(){
osg::ShadowVolumeOccluder* realinstance							;
realinstance= new osg::ShadowVolumeOccluder()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
