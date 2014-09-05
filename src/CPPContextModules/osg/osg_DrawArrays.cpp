#include "osg_DrawArrays.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveSet>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_DrawArrays::createInstance(){
osg::ref_ptr<osg::DrawArrays> realinstance				;
realinstance = new osg::DrawArrays ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
