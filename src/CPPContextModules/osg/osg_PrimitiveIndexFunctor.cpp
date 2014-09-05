#include "osg_PrimitiveIndexFunctor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveSet>

using namespace std;
using namespace pmoc;
	  Instance osg_PrimitiveIndexFunctor::createInstance(){
 std::cerr<<"osg::PrimitiveIndexFunctor not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
