#include "osgUtil_AddRangeOperator.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/OperationArrayFunctor>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_AddRangeOperator::createInstance(){
 std::cerr<<"osgUtil::AddRangeOperator not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
