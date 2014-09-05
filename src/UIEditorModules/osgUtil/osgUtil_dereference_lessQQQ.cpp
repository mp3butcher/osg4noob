#include "osgUtil_dereference_lessQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/EdgeCollector>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_dereference_lessQQQ_QModel::osgUtil_dereference_lessQQQ_QModel(const osgUtil_dereference_lessQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_dereference_lessQQQ_QModel::~osgUtil_dereference_lessQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_dereference_lessQQQ_QModel::osgUtil_dereference_lessQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::dereference_less*>(i->ptr);
}
QQuickItem *osgUtil_dereference_lessQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_dereference_lessQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_dereference_lessQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_dereference_lessQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_dereference_lessQQQ::createQQModel(Instance*i){ return new osgUtil_dereference_lessQQQ_QModel(i);}
