#include "osg_LightModel.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/LightModel>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_LightModel::createInstance(){
osg::ref_ptr<osg::LightModel> realinstance				;
realinstance = new osg::LightModel ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
