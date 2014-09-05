#include "osg_Vec4b.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4b>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec4b::createInstance(){
osg::Vec4b* realinstance							;
realinstance= new osg::Vec4b()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
