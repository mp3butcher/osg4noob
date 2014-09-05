#include "osg_OperationThreadQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/OperationThread>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_OperationThreadQQQ_QModel::osg_OperationThreadQQQ_QModel(const osg_OperationThreadQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_OperationThreadQQQ_QModel::~osg_OperationThreadQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_OperationThreadQQQ_QModel::osg_OperationThreadQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::OperationThread*>(i->ptr);
}
QQuickItem *osg_OperationThreadQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_OperationThreadQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_OperationThreadQQQ::PREcompoQML()const{return string("");}
const std::string osg_OperationThreadQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_OperationThreadQQQ::createQQModel(Instance*i){ return new osg_OperationThreadQQQ_QModel(i);}
