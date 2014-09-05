#include "osg_TextureRectangle.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/TextureRectangle>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_TextureRectangle::createInstance(){
osg::ref_ptr<osg::TextureRectangle> realinstance				;
realinstance = new osg::TextureRectangle ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
