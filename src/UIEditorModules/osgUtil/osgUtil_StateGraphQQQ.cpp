#include "osgUtil_StateGraphQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/StateGraph>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_StateGraphQQQ_QModel::osgUtil_StateGraphQQQ_QModel(const osgUtil_StateGraphQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_StateGraphQQQ_QModel::~osgUtil_StateGraphQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_StateGraphQQQ_QModel::osgUtil_StateGraphQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::StateGraph*>(i->ptr);
}
QQuickItem *osgUtil_StateGraphQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_StateGraphQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_StateGraphQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_StateGraphQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_StateGraphQQQ::createQQModel(Instance*i){ return new osgUtil_StateGraphQQQ_QModel(i);}
