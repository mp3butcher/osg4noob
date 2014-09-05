#include "osg_ConvexPlanarOccluder.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ConvexPlanarOccluder>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ConvexPlanarOccluder::createInstance(){
osg::ref_ptr<osg::ConvexPlanarOccluder> realinstance				;
realinstance = new osg::ConvexPlanarOccluder ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
