#include "osgUtil_EdgeCollector.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/EdgeCollector>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_EdgeCollector::createInstance(){
 std::cerr<<"osgUtil::EdgeCollector not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
