#ifndef GLOBAL_CPP_CONTEXT_osgH
#define GLOBAL_CPP_CONTEXT_osgH 

 #include <list> 
#include <map>
#include <MetaQQuickLibrary.h>
#include <memory>
#include <osg/ref_ptr>

namespace pmoc{
	class osg_QMLLibrary: public MetaQQuickLibrary{
	private:
 public:
 //virtual Instance createClassInstance(const std::string&);
	///TODO all products of the factory (hierarchyleafs)
		//osg::Group * managedPointer_osg_Group;
		//osg::MatrixTransform * managed_osg_Matrix;
	public:
///Add  object whose lifecycle is not managed by the context	 
//carefull to the crash if you operate them after you delete
//perhaps a type_info could be bettet
//void addObject(osg::Node*n){ Instance o((void*)n, getClassByID("osg::Node"), false); if (o.model != 0){ managedobjects.push_back(o); objectrecord[o.MetaClass].push_back(&managedobjects.back()) } else{ cerr << "osg.Node class not managed" << endl; } }
//...etc..
osg_QMLLibrary();
~osg_QMLLibrary();
	///setup metaclass children and parents (require dependancies to be loaded)
virtual void setupRelations() ;
 };
		 
}
#endif

