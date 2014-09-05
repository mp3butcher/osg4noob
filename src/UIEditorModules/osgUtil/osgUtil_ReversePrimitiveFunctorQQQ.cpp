#include "osgUtil_ReversePrimitiveFunctorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/ReversePrimitiveFunctor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_ReversePrimitiveFunctorQQQ_QModel::osgUtil_ReversePrimitiveFunctorQQQ_QModel(const osgUtil_ReversePrimitiveFunctorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_ReversePrimitiveFunctorQQQ_QModel::~osgUtil_ReversePrimitiveFunctorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_ReversePrimitiveFunctorQQQ_QModel::osgUtil_ReversePrimitiveFunctorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::ReversePrimitiveFunctor*>(i->ptr);
}
QQuickItem *osgUtil_ReversePrimitiveFunctorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_ReversePrimitiveFunctorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_ReversePrimitiveFunctorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_ReversePrimitiveFunctorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_ReversePrimitiveFunctorQQQ::createQQModel(Instance*i){ return new osgUtil_ReversePrimitiveFunctorQQQ_QModel(i);}
