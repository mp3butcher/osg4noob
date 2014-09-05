#include "osg_ShaderComposer.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ShaderComposer>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ShaderComposer::createInstance(){
osg::ref_ptr<osg::ShaderComposer> realinstance				;
realinstance = new osg::ShaderComposer ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
