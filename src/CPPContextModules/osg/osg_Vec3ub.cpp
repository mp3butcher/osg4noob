#include "osg_Vec3ub.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3ub>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec3ub::createInstance(){
osg::Vec3ub* realinstance							;
realinstance= new osg::Vec3ub()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
