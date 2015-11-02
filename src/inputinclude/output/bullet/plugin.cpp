#include "MetaQQuickLibraryRegistry.h"
//#include <pmoc.blackboard.hpp>
#include "plugin.h"
using namespace pmoc;
REGISTER_METAQQUICKLIBRARY(BulletCollision_QMLLibrary);
 BulletCollision_QMLLibrary::BulletCollision_QMLLibrary():MetaQQuickLibrary("BulletCollision"){

}
BulletCollision_QMLLibrary::~BulletCollision_QMLLibrary(){}
	///setup metaclass children and parents (require dependancies to be loaded)
 void BulletCollision_QMLLibrary::setupRelations() {}
 