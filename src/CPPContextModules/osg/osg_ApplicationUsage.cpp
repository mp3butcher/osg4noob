#include "osg_ApplicationUsage.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ApplicationUsage>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ApplicationUsage::createInstance(){
osg::ref_ptr<osg::ApplicationUsage> realinstance				;
realinstance = new osg::ApplicationUsage ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
