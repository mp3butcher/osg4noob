#include "osgUtil_dereference_clear.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/EdgeCollector>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_dereference_clear::createInstance(){
 std::cerr<<"osgUtil::dereference_clear not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
