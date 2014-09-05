#include "osg_Vec2i.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2i>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec2i::createInstance(){
osg::Vec2i* realinstance							;
realinstance= new osg::Vec2i()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
