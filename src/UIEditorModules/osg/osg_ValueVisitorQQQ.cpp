#include "osg_ValueVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Array>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ValueVisitorQQQ_QModel::osg_ValueVisitorQQQ_QModel(const osg_ValueVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ValueVisitorQQQ_QModel::~osg_ValueVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ValueVisitorQQQ_QModel::osg_ValueVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ValueVisitor*>(i->ptr);
}
QQuickItem *osg_ValueVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ValueVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ValueVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osg_ValueVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ValueVisitorQQQ::createQQModel(Instance*i){ return new osg_ValueVisitorQQQ_QModel(i);}
