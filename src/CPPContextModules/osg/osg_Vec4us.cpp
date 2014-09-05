#include "osg_Vec4us.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4us>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec4us::createInstance(){
osg::Vec4us* realinstance							;
realinstance= new osg::Vec4us()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
