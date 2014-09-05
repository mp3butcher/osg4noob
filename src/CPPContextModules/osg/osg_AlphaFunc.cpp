#include "osg_AlphaFunc.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/AlphaFunc>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_AlphaFunc::createInstance(){
osg::ref_ptr<osg::AlphaFunc> realinstance				;
realinstance = new osg::AlphaFunc ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
