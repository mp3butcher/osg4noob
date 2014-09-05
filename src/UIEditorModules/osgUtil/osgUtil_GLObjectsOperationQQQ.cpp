#include "osgUtil_GLObjectsOperationQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/GLObjectsVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_GLObjectsOperationQQQ_QModel::osgUtil_GLObjectsOperationQQQ_QModel(const osgUtil_GLObjectsOperationQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_GLObjectsOperationQQQ_QModel::~osgUtil_GLObjectsOperationQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_GLObjectsOperationQQQ_QModel::osgUtil_GLObjectsOperationQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::GLObjectsOperation*>(i->ptr);
}
QQuickItem *osgUtil_GLObjectsOperationQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_GLObjectsOperationQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_GLObjectsOperationQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_GLObjectsOperationQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_GLObjectsOperationQQQ::createQQModel(Instance*i){ return new osgUtil_GLObjectsOperationQQQ_QModel(i);}
