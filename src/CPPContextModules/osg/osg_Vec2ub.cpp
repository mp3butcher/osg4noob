#include "osg_Vec2ub.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2ub>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec2ub::createInstance(){
osg::Vec2ub* realinstance							;
realinstance= new osg::Vec2ub()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
