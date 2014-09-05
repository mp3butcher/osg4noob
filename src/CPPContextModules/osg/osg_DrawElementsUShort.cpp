#include "osg_DrawElementsUShort.hpp"
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
	  Instance osg_DrawElementsUShort::createInstance(){
osg::ref_ptr<osg::DrawElementsUShort> realinstance				;
realinstance = new osg::DrawElementsUShort ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
