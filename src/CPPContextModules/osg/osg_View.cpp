#include "osg_View.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/View>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_View::createInstance(){
osg::ref_ptr<osg::View> realinstance				;
realinstance = new osg::View ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
