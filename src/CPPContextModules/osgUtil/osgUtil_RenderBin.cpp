#include "osgUtil_RenderBin.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/RenderBin>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_RenderBin::createInstance(){
osg::ref_ptr<osgUtil::RenderBin> realinstance				;
realinstance = new osgUtil::RenderBin ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
