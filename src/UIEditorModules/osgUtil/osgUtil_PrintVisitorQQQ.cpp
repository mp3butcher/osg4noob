#include "osgUtil_PrintVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/PrintVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_PrintVisitorQQQ_QModel::osgUtil_PrintVisitorQQQ_QModel(const osgUtil_PrintVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_PrintVisitorQQQ_QModel::~osgUtil_PrintVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_PrintVisitorQQQ_QModel::osgUtil_PrintVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::PrintVisitor*>(i->ptr);
}
QQuickItem *osgUtil_PrintVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_PrintVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_PrintVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_PrintVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_PrintVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_PrintVisitorQQQ_QModel(i);}
