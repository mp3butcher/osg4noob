#include "osg_DrawElementsUByte.hpp"
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
	  Instance osg_DrawElementsUByte::createInstance(){
osg::ref_ptr<osg::DrawElementsUByte> realinstance				;
realinstance = new osg::DrawElementsUByte ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
