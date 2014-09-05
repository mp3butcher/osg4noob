#include "osgUtil_IntersectorGroup.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IntersectionVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_IntersectorGroup::createInstance(){
osg::ref_ptr<osgUtil::IntersectorGroup> realinstance				;
realinstance = new osgUtil::IntersectorGroup ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
