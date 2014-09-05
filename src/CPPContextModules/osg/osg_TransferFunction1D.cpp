#include "osg_TransferFunction1D.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/TransferFunction>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_TransferFunction1D::createInstance(){
osg::ref_ptr<osg::TransferFunction1D> realinstance				;
realinstance = new osg::TransferFunction1D ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
