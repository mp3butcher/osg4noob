#include "osg_Vec3ui.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec3ui>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec3ui::createInstance(){
osg::Vec3ui* realinstance							;
realinstance= new osg::Vec3ui()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
