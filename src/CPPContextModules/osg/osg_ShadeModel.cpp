#include "osg_ShadeModel.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ShadeModel>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ShadeModel::createInstance(){
osg::ref_ptr<osg::ShadeModel> realinstance				;
realinstance = new osg::ShadeModel ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
