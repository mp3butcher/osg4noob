#include "osg_PrimitiveRestartIndex.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveRestartIndex>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_PrimitiveRestartIndex::createInstance(){
osg::ref_ptr<osg::PrimitiveRestartIndex> realinstance				;
realinstance = new osg::PrimitiveRestartIndex ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
