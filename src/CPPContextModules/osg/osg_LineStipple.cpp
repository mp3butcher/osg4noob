#include "osg_LineStipple.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/LineStipple>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_LineStipple::createInstance(){
osg::ref_ptr<osg::LineStipple> realinstance				;
realinstance = new osg::LineStipple ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
