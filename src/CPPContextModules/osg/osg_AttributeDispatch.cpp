#include "osg_AttributeDispatch.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ArrayDispatchers>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_AttributeDispatch::createInstance(){
 std::cerr<<"osg::AttributeDispatch not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
