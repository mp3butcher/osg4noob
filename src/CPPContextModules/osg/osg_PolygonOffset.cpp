#include "osg_PolygonOffset.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/PolygonOffset>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_PolygonOffset::createInstance(){
osg::ref_ptr<osg::PolygonOffset> realinstance				;
realinstance = new osg::PolygonOffset ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
