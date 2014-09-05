#include "osg_ShaderComponent.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Shader>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ShaderComponent::createInstance(){
osg::ref_ptr<osg::ShaderComponent> realinstance				;
realinstance = new osg::ShaderComponent ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
