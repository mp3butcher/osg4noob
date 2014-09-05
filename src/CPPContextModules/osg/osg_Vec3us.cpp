#include "osg_Vec3us.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3us>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec3us::createInstance(){
osg::Vec3us* realinstance							;
realinstance= new osg::Vec3us()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
