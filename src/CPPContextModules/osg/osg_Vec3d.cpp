#include "osg_Vec3d.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3d>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec3d::createInstance(){
osg::Vec3d* realinstance							;
realinstance= new osg::Vec3d()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
