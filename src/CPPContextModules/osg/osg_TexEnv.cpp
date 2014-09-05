#include "osg_TexEnv.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/TexEnv>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_TexEnv::createInstance(){
osg::ref_ptr<osg::TexEnv> realinstance				;
realinstance = new osg::TexEnv ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
