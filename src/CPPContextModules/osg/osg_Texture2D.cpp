#include "osg_Texture2D.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Texture2D>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Texture2D::createInstance(){
osg::ref_ptr<osg::Texture2D> realinstance				;
realinstance = new osg::Texture2D ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
