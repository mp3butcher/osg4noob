#include "osg_StateAttribute.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/StateAttribute>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_StateAttribute::createInstance(){
 std::cerr<<"osg::StateAttribute not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
