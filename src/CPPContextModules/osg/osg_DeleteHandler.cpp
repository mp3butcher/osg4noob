#include "osg_DeleteHandler.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/DeleteHandler>

using namespace std;
using namespace pmoc;
	  Instance osg_DeleteHandler::createInstance(){
osg::DeleteHandler* realinstance							;
realinstance= new osg::DeleteHandler()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
