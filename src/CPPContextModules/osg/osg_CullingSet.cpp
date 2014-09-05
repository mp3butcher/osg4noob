#include "osg_CullingSet.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/CullingSet>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_CullingSet::createInstance(){
osg::ref_ptr<osg::CullingSet> realinstance				;
realinstance = new osg::CullingSet ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
