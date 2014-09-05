#include "osg_ImageSequence.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ImageSequence>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ImageSequence::createInstance(){
osg::ref_ptr<osg::ImageSequence> realinstance				;
realinstance = new osg::ImageSequence ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
