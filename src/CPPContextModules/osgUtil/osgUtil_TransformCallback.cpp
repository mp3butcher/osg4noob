#include "osgUtil_TransformCallback.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/TransformCallback>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_TransformCallback::createInstance(){
 std::cerr<<"osgUtil::TransformCallback not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
