#include "osg_Vec3b.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3b>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec3b::createInstance(){
osg::Vec3b* realinstance							;
realinstance= new osg::Vec3b()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
