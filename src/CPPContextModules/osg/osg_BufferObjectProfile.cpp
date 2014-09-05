#include "osg_BufferObjectProfile.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>

using namespace std;
using namespace pmoc;
	  Instance osg_BufferObjectProfile::createInstance(){
osg::BufferObjectProfile* realinstance							;
realinstance= new osg::BufferObjectProfile()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
