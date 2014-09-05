#include "osg_Plane.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Plane>

using namespace std;
using namespace pmoc;
	  Instance osg_Plane::createInstance(){
osg::Plane* realinstance							;
realinstance= new osg::Plane()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
