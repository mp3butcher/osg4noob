#include "osg_ShaderAttribute.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ShaderAttribute>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ShaderAttribute::createInstance(){
osg::ref_ptr<osg::ShaderAttribute> realinstance				;
realinstance = new osg::ShaderAttribute ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
