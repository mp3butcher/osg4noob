#include "osg_Depth.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Depth>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Depth::createInstance(){
osg::ref_ptr<osg::Depth> realinstance				;
realinstance = new osg::Depth ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
