#include "osg_ArrayVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Array>

using namespace std;
using namespace pmoc;
	  Instance osg_ArrayVisitor::createInstance(){
osg::ArrayVisitor* realinstance							;
realinstance= new osg::ArrayVisitor()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
