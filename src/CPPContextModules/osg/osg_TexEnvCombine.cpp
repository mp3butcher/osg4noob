#include "osg_TexEnvCombine.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/TexEnvCombine>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_TexEnvCombine::createInstance(){
osg::ref_ptr<osg::TexEnvCombine> realinstance				;
realinstance = new osg::TexEnvCombine ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
