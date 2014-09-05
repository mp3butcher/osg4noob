#include "osg_Texture2DMultisample.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Texture2DMultisample>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Texture2DMultisample::createInstance(){
osg::ref_ptr<osg::Texture2DMultisample> realinstance				;
realinstance = new osg::Texture2DMultisample ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
