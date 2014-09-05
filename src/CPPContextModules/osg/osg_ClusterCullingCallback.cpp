#include "osg_ClusterCullingCallback.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ClusterCullingCallback>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ClusterCullingCallback::createInstance(){
osg::ref_ptr<osg::ClusterCullingCallback> realinstance				;
realinstance = new osg::ClusterCullingCallback ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
