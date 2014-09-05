#include "osg_Viewport.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Viewport>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Viewport::createInstance(){
osg::ref_ptr<osg::Viewport> realinstance				;
realinstance = new osg::Viewport ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
