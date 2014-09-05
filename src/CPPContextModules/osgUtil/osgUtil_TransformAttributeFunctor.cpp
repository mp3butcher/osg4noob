#include "osgUtil_TransformAttributeFunctor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/TransformAttributeFunctor>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_TransformAttributeFunctor::createInstance(){
 std::cerr<<"osgUtil::TransformAttributeFunctor not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
