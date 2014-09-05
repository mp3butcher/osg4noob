#include "osgUtil_PickVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/IntersectVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_PickVisitorQQQ_QModel::osgUtil_PickVisitorQQQ_QModel(const osgUtil_PickVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_PickVisitorQQQ_QModel::~osgUtil_PickVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_PickVisitorQQQ_QModel::osgUtil_PickVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::PickVisitor*>(i->ptr);
}
QQuickItem *osgUtil_PickVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_PickVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_PickVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_PickVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_PickVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_PickVisitorQQQ_QModel(i);}
