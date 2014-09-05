#include "osg_Vec3i.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3i>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec3i::createInstance(){
osg::Vec3i* realinstance							;
realinstance= new osg::Vec3i()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
