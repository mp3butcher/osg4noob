#include "osg_ConstValueVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Array>

using namespace std;
using namespace pmoc;
	  Instance osg_ConstValueVisitor::createInstance(){
osg::ConstValueVisitor* realinstance							;
realinstance= new osg::ConstValueVisitor()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
