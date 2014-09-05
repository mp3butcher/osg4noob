#include "osg_GeometryCostEstimator.hpp"
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
	  Instance osg_GeometryCostEstimator::createInstance(){
osg::ref_ptr<osg::GeometryCostEstimator> realinstance				;
realinstance = new osg::GeometryCostEstimator ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
