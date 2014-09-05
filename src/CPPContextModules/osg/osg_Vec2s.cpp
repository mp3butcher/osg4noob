#include "osg_Vec2s.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2s>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec2s::createInstance(){
osg::Vec2s* realinstance							;
realinstance= new osg::Vec2s()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
