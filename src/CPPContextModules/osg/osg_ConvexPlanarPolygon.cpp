#include "osg_ConvexPlanarPolygon.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ConvexPlanarPolygon>

using namespace std;
using namespace pmoc;
	  Instance osg_ConvexPlanarPolygon::createInstance(){
osg::ConvexPlanarPolygon* realinstance							;
realinstance= new osg::ConvexPlanarPolygon()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
