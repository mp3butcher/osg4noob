#include "osgUtil_RenderStage.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/RenderStage>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_RenderStage::createInstance(){
osg::ref_ptr<osgUtil::RenderStage> realinstance				;
realinstance = new osgUtil::RenderStage ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
