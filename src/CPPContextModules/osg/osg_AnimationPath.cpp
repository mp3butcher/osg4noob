#include "osg_AnimationPath.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/AnimationPath>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_AnimationPath::createInstance(){
osg::ref_ptr<osg::AnimationPath> realinstance				;
realinstance = new osg::AnimationPath ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
