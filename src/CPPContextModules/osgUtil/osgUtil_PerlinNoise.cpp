#include "osgUtil_PerlinNoise.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/PerlinNoise>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_PerlinNoise::createInstance(){
osgUtil::PerlinNoise* realinstance							;
realinstance= new osgUtil::PerlinNoise()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}
