#include "osgUtil_MultiplyRangeOperator.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/OperationArrayFunctor>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_MultiplyRangeOperator::createInstance(){
 std::cerr<<"osgUtil::MultiplyRangeOperator not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
