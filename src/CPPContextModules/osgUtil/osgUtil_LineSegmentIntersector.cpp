#include "osgUtil_LineSegmentIntersector.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/LineSegmentIntersector>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_LineSegmentIntersector::createInstance(){
 std::cerr<<"osgUtil::LineSegmentIntersector not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
