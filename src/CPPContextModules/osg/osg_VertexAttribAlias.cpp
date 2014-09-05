#include "osg_VertexAttribAlias.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/State>

using namespace std;
using namespace pmoc;
	  Instance osg_VertexAttribAlias::createInstance(){
osg::VertexAttribAlias* realinstance							;
realinstance= new osg::VertexAttribAlias()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
