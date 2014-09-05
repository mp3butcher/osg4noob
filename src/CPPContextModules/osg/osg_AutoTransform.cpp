#include "osg_AutoTransform.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/AutoTransform>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_AutoTransform::createInstance(){
osg::ref_ptr<osg::AutoTransform> realinstance				;
realinstance = new osg::AutoTransform ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
