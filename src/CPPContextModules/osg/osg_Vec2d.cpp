#include "osg_Vec2d.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2d>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec2d::createInstance(){
osg::Vec2d* realinstance							;
realinstance= new osg::Vec2d()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
