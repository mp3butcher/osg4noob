#include "osg_ClipPlane.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ClipPlane>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ClipPlane::createInstance(){
osg::ref_ptr<osg::ClipPlane> realinstance				;
realinstance = new osg::ClipPlane ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
