#include "osg_PrimitiveFunctor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveSet>

using namespace std;
using namespace pmoc;
	  Instance osg_PrimitiveFunctor::createInstance(){
 std::cerr<<"osg::PrimitiveFunctor not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
