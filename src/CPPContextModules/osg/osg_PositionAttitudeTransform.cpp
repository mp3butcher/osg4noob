#include "osg_PositionAttitudeTransform.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/PositionAttitudeTransform>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_PositionAttitudeTransform::createInstance(){
osg::ref_ptr<osg::PositionAttitudeTransform> realinstance				;
realinstance = new osg::PositionAttitudeTransform ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
