#include "osg_Vec4s.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4s>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec4s::createInstance(){
osg::Vec4s* realinstance							;
realinstance= new osg::Vec4s()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
