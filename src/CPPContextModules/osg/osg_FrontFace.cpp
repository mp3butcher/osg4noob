#include "osg_FrontFace.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/FrontFace>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_FrontFace::createInstance(){
osg::ref_ptr<osg::FrontFace> realinstance				;
realinstance = new osg::FrontFace ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
