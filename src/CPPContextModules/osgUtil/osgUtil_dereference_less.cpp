#include "osgUtil_dereference_less.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/EdgeCollector>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_dereference_less::createInstance(){
 std::cerr<<"osgUtil::dereference_less not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
