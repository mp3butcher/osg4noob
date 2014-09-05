#include "osg_ShaderBinary.hpp"
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
	  Instance osg_ShaderBinary::createInstance(){
osg::ref_ptr<osg::ShaderBinary> realinstance				;
realinstance = new osg::ShaderBinary ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
