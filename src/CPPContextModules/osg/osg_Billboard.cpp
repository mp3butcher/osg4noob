#include "osg_Billboard.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Billboard>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Billboard::createInstance(){
osg::ref_ptr<osg::Billboard> realinstance				;
realinstance = new osg::Billboard ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
