#include "osg_BlendFunc.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/BlendFunc>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_BlendFunc::createInstance(){
osg::ref_ptr<osg::BlendFunc> realinstance				;
realinstance = new osg::BlendFunc ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
