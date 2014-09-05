#include "osgUtil_ReversePrimitiveFunctor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/ReversePrimitiveFunctor>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_ReversePrimitiveFunctor::createInstance(){
 std::cerr<<"osgUtil::ReversePrimitiveFunctor not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
