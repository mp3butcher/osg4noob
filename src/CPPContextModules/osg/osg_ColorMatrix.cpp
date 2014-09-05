#include "osg_ColorMatrix.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ColorMatrix>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ColorMatrix::createInstance(){
osg::ref_ptr<osg::ColorMatrix> realinstance				;
realinstance = new osg::ColorMatrix ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
