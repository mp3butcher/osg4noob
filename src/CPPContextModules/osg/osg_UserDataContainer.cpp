#include "osg_UserDataContainer.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/UserDataContainer>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_UserDataContainer::createInstance(){
 std::cerr<<"osg::UserDataContainer not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
