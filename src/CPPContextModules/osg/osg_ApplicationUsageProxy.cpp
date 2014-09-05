#include "osg_ApplicationUsageProxy.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ApplicationUsage>

using namespace std;
using namespace pmoc;
	  Instance osg_ApplicationUsageProxy::createInstance(){
 std::cerr<<"osg::ApplicationUsageProxy not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
