#include "osg_Vec3f.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3f>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec3f::createInstance(){
osg::Vec3f* realinstance							;
realinstance= new osg::Vec3f()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
