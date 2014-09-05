#include "osg_TestResultQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/OcclusionQueryNode>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_TestResultQQQ_QModel::osg_TestResultQQQ_QModel(const osg_TestResultQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_TestResultQQQ_QModel::~osg_TestResultQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_TestResultQQQ_QModel::osg_TestResultQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::TestResult*>(i->ptr);
}
QQuickItem *osg_TestResultQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_TestResultQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_TestResultQQQ::PREcompoQML()const{return string("");}
const std::string osg_TestResultQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_TestResultQQQ::createQQModel(Instance*i){ return new osg_TestResultQQQ_QModel(i);}
