#include "osg_Vec2f.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2f>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec2f::createInstance(){
osg::Vec2f* realinstance							;
realinstance= new osg::Vec2f()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
