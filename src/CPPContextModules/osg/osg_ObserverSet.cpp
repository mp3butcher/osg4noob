#include "osg_ObserverSet.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Observer>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ObserverSet::createInstance(){
 std::cerr<<"osg::ObserverSet not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
