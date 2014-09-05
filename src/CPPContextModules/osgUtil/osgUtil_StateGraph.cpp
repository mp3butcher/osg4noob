#include "osgUtil_StateGraph.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/StateGraph>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_StateGraph::createInstance(){
osg::ref_ptr<osgUtil::StateGraph> realinstance				;
realinstance = new osgUtil::StateGraph ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
