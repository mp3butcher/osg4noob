#include "osgUtil_SceneView.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/SceneView>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_SceneView::createInstance(){
osg::ref_ptr<osgUtil::SceneView> realinstance				;
realinstance = new osgUtil::SceneView ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
