#include "osg_Vec2us.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2us>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec2us::createInstance(){
osg::Vec2us* realinstance							;
realinstance= new osg::Vec2us()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
