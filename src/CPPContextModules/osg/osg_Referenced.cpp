#include "osg_Referenced.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Referenced>

using namespace std;
using namespace pmoc;
	  Instance osg_Referenced::createInstance(){
osg::Referenced* realinstance							;
realinstance= new osg::Referenced()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
