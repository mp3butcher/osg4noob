#include "osg_KdTree.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/KdTree>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_KdTree::createInstance(){
 std::cerr<<"osg::KdTree not instanciable"<<std::endl;
return(Instance(0, 0)); 
}