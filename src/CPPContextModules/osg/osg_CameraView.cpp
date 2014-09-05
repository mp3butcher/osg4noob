#include "osg_CameraView.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/CameraView>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_CameraView::createInstance(){
osg::ref_ptr<osg::CameraView> realinstance				;
realinstance = new osg::CameraView ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
