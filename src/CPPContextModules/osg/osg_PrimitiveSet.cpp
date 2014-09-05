#include "osg_PrimitiveSet.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveSet>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_PrimitiveSet::createInstance(){
 std::cerr<<"osg::PrimitiveSet not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
