#include "osgUtil_HighlightMapGenerator.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/HighlightMapGenerator>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_HighlightMapGenerator::createInstance(){
 std::cerr<<"osgUtil::HighlightMapGenerator not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
