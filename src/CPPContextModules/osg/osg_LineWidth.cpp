#include "osg_LineWidth.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/LineWidth>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_LineWidth::createInstance(){
osg::ref_ptr<osg::LineWidth> realinstance				;
realinstance = new osg::LineWidth ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
