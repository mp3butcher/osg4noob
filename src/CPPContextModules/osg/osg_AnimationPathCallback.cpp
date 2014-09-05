#include "osg_AnimationPathCallback.hpp"
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
	  Instance osg_AnimationPathCallback::createInstance(){
osg::ref_ptr<osg::AnimationPathCallback> realinstance				;
realinstance = new osg::AnimationPathCallback ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
