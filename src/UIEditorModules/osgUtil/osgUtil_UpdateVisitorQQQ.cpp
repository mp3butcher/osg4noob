#include "osgUtil_UpdateVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/UpdateVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_UpdateVisitorQQQ_QModel::osgUtil_UpdateVisitorQQQ_QModel(const osgUtil_UpdateVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_UpdateVisitorQQQ_QModel::~osgUtil_UpdateVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_UpdateVisitorQQQ_QModel::osgUtil_UpdateVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::UpdateVisitor*>(i->ptr);
}
QQuickItem *osgUtil_UpdateVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_UpdateVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_UpdateVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_UpdateVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_UpdateVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_UpdateVisitorQQQ_QModel(i);}
