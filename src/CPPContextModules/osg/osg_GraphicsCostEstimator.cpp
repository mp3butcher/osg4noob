#include "osg_GraphicsCostEstimator.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsCostEstimator>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_GraphicsCostEstimator::createInstance(){
osg::ref_ptr<osg::GraphicsCostEstimator> realinstance				;
realinstance = new osg::GraphicsCostEstimator ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
