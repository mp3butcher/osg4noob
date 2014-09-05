#include "osg_PointSprite.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/PointSprite>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_PointSprite::createInstance(){
osg::ref_ptr<osg::PointSprite> realinstance				;
realinstance = new osg::PointSprite ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
