#include "osg_ClampedLinearCostFunction1D.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsCostEstimator>

using namespace std;
using namespace pmoc;
	  Instance osg_ClampedLinearCostFunction1D::createInstance(){
 std::cerr<<"osg::ClampedLinearCostFunction1D not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
