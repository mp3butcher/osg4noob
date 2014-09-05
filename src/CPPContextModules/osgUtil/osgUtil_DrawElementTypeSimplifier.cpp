#include "osgUtil_DrawElementTypeSimplifier.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/DrawElementTypeSimplifier>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_DrawElementTypeSimplifier::createInstance(){
 std::cerr<<"osgUtil::DrawElementTypeSimplifier not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
