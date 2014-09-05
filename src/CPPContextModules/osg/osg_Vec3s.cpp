#include "osg_Vec3s.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3s>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec3s::createInstance(){
osg::Vec3s* realinstance							;
realinstance= new osg::Vec3s()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
