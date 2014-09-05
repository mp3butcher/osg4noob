#include "osgUtil_LessDepthSortFunctor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/StateGraph>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_LessDepthSortFunctor::createInstance(){
 std::cerr<<"osgUtil::LessDepthSortFunctor not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
