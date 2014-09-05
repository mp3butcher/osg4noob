#include "osg_KdTreeBuilder.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/KdTree>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_KdTreeBuilder::createInstance(){
osg::ref_ptr<osg::KdTreeBuilder> realinstance				;
realinstance = new osg::KdTreeBuilder ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
