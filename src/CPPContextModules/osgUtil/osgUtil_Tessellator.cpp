#include "osgUtil_Tessellator.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/Tessellator>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_Tessellator::createInstance(){
osg::ref_ptr<osgUtil::Tessellator> realinstance				;
realinstance = new osgUtil::Tessellator ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
