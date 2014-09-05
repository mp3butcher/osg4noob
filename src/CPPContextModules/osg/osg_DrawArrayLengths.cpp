#include "osg_DrawArrayLengths.hpp"
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
	  Instance osg_DrawArrayLengths::createInstance(){
osg::ref_ptr<osg::DrawArrayLengths> realinstance				;
realinstance = new osg::DrawArrayLengths ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
