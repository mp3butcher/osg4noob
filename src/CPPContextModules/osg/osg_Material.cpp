#include "osg_Material.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Material>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Material::createInstance(){
osg::ref_ptr<osg::Material> realinstance				;
realinstance = new osg::Material ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
