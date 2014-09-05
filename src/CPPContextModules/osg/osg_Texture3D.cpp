#include "osg_Texture3D.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Texture3D>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Texture3D::createInstance(){
osg::ref_ptr<osg::Texture3D> realinstance				;
realinstance = new osg::Texture3D ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
