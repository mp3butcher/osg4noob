#include "osg_Vec2ui.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec2ui>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec2ui::createInstance(){
osg::Vec2ui* realinstance							;
realinstance= new osg::Vec2ui()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
