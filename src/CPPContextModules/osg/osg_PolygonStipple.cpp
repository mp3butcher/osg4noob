#include "osg_PolygonStipple.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/PolygonStipple>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_PolygonStipple::createInstance(){
osg::ref_ptr<osg::PolygonStipple> realinstance				;
realinstance = new osg::PolygonStipple ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
