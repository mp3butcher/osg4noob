#include "osgUtil_BaseOptimizerVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/Optimizer>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_BaseOptimizerVisitor::createInstance(){
 std::cerr<<"osgUtil::BaseOptimizerVisitor not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
