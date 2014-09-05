#include "osg_DrawPixels.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/DrawPixels>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_DrawPixels::createInstance(){
osg::ref_ptr<osg::DrawPixels> realinstance				;
realinstance = new osg::DrawPixels ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
