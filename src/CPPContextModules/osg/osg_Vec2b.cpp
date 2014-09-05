#include "osg_Vec2b.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2b>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec2b::createInstance(){
osg::Vec2b* realinstance							;
realinstance= new osg::Vec2b()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
