#include "osg_Geometry.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Geometry>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Geometry::createInstance(){
osg::ref_ptr<osg::Geometry> realinstance				;
realinstance = new osg::Geometry ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
