#include "osg_StateSet.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/StateSet>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_StateSet::createInstance(){
osg::ref_ptr<osg::StateSet> realinstance				;
realinstance = new osg::StateSet ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
