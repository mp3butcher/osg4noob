#include "osg_DrawElements.hpp"
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
	  Instance osg_DrawElements::createInstance(){
 std::cerr<<"osg::DrawElements not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
