#include "osg_Image.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Image>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Image::createInstance(){
osg::ref_ptr<osg::Image> realinstance				;
realinstance = new osg::Image ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
