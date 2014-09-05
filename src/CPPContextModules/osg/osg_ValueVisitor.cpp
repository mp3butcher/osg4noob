#include "osg_ValueVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Array>

using namespace std;
using namespace pmoc;
	  Instance osg_ValueVisitor::createInstance(){
osg::ValueVisitor* realinstance							;
realinstance= new osg::ValueVisitor()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
