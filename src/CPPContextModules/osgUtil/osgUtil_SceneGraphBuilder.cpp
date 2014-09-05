#include "osgUtil_SceneGraphBuilder.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/SceneGraphBuilder>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_SceneGraphBuilder::createInstance(){
osgUtil::SceneGraphBuilder* realinstance							;
realinstance= new osgUtil::SceneGraphBuilder()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
