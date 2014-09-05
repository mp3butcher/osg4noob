#include "osg_ConstArrayVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Array>

using namespace std;
using namespace pmoc;
	  Instance osg_ConstArrayVisitor::createInstance(){
osg::ConstArrayVisitor* realinstance							;
realinstance= new osg::ConstArrayVisitor()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
