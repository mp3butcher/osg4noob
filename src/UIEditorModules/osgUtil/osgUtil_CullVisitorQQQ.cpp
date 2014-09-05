#include "osgUtil_CullVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/CullVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_CullVisitorQQQ_QModel::osgUtil_CullVisitorQQQ_QModel(const osgUtil_CullVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_CullVisitorQQQ_QModel::~osgUtil_CullVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_CullVisitorQQQ_QModel::osgUtil_CullVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::CullVisitor*>(i->ptr);
}
QQuickItem *osgUtil_CullVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_CullVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_CullVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_CullVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_CullVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_CullVisitorQQQ_QModel(i);}
