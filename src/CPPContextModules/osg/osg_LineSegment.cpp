#include "osg_LineSegment.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/LineSegment>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_LineSegment::createInstance(){
osg::ref_ptr<osg::LineSegment> realinstance				;
realinstance = new osg::LineSegment ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
