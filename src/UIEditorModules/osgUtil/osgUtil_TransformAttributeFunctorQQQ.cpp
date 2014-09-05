#include "osgUtil_TransformAttributeFunctorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/TransformAttributeFunctor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_TransformAttributeFunctorQQQ_QModel::osgUtil_TransformAttributeFunctorQQQ_QModel(const osgUtil_TransformAttributeFunctorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_TransformAttributeFunctorQQQ_QModel::~osgUtil_TransformAttributeFunctorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_TransformAttributeFunctorQQQ_QModel::osgUtil_TransformAttributeFunctorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::TransformAttributeFunctor*>(i->ptr);
}
QQuickItem *osgUtil_TransformAttributeFunctorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_TransformAttributeFunctorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_TransformAttributeFunctorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_TransformAttributeFunctorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_TransformAttributeFunctorQQQ::createQQModel(Instance*i){ return new osgUtil_TransformAttributeFunctorQQQ_QModel(i);}
