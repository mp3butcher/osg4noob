#include "osg_Texture1D.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Texture1D>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Texture1D::createInstance(){
osg::ref_ptr<osg::Texture1D> realinstance				;
realinstance = new osg::Texture1D ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
