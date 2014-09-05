#include "osgUtil_PositionalStateContainer.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/PositionalStateContainer>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_PositionalStateContainer::createInstance(){
osg::ref_ptr<osgUtil::PositionalStateContainer> realinstance				;
realinstance = new osgUtil::PositionalStateContainer ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
