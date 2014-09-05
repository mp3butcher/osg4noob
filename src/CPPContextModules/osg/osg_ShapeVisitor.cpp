#include "osg_ShapeVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>

using namespace std;
using namespace pmoc;
	  Instance osg_ShapeVisitor::createInstance(){
osg::ShapeVisitor* realinstance							;
realinstance= new osg::ShapeVisitor()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
