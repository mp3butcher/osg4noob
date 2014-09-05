#include "osg_Point.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Point>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Point::createInstance(){
osg::ref_ptr<osg::Point> realinstance				;
realinstance = new osg::Point ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
