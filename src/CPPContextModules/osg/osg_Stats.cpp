#include "osg_Stats.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Stats>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Stats::createInstance(){
 std::cerr<<"osg::Stats not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
