#include "osg_ProgramCostEstimator.hpp"
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
	  Instance osg_ProgramCostEstimator::createInstance(){
osg::ref_ptr<osg::ProgramCostEstimator> realinstance				;
realinstance = new osg::ProgramCostEstimator ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
