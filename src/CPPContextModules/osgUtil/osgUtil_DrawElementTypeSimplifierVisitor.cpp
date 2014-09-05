#include "osgUtil_DrawElementTypeSimplifierVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/DrawElementTypeSimplifier>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_DrawElementTypeSimplifierVisitor::createInstance(){
 std::cerr<<"osgUtil::DrawElementTypeSimplifierVisitor not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
