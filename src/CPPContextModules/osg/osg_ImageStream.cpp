#include "osg_ImageStream.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ImageStream>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ImageStream::createInstance(){
osg::ref_ptr<osg::ImageStream> realinstance				;
realinstance = new osg::ImageStream ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
