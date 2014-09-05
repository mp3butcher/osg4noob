#include "osg_Shader.hpp"
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
	  Instance osg_Shader::createInstance(){
osg::ref_ptr<osg::Shader> realinstance				;
realinstance = new osg::Shader ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
