#include "osg_LogicOpQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/LogicOp>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_LogicOpQQQ_QModel::osg_LogicOpQQQ_QModel(const osg_LogicOpQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_LogicOpQQQ_QModel::~osg_LogicOpQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_LogicOpQQQ_QModel::osg_LogicOpQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::LogicOp*>(i->ptr);
}
QQuickItem *osg_LogicOpQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_LogicOpQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_LogicOpQQQ::PREcompoQML()const{return string("");}
const std::string osg_LogicOpQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_LogicOpQQQ::createQQModel(Instance*i){ return new osg_LogicOpQQQ_QModel(i);}
