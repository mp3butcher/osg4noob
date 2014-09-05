#include "osgUtil_GLObjectsVisitorQQQ.hpp"
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
osgUtil_GLObjectsVisitorQQQ_QModel::osgUtil_GLObjectsVisitorQQQ_QModel(const osgUtil_GLObjectsVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_GLObjectsVisitorQQQ_QModel::~osgUtil_GLObjectsVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_GLObjectsVisitorQQQ_QModel::osgUtil_GLObjectsVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::GLObjectsVisitor*>(i->ptr);
}
QQuickItem *osgUtil_GLObjectsVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_GLObjectsVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_GLObjectsVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_GLObjectsVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_GLObjectsVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_GLObjectsVisitorQQQ_QModel(i);}
