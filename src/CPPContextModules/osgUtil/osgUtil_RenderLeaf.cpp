#include "osgUtil_RenderLeaf.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/RenderLeaf>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_RenderLeaf::createInstance(){
 std::cerr<<"osgUtil::RenderLeaf not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
