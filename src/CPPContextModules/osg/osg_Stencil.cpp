#include "osg_Stencil.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Stencil>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Stencil::createInstance(){
osg::ref_ptr<osg::Stencil> realinstance				;
realinstance = new osg::Stencil ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
