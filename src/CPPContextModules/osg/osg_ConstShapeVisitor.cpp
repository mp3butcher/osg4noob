#include "osg_ConstShapeVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>

using namespace std;
using namespace pmoc;
	  Instance osg_ConstShapeVisitor::createInstance(){
osg::ConstShapeVisitor* realinstance							;
realinstance= new osg::ConstShapeVisitor()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
