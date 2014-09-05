#include "osgUtil_LessDepthSortFunctorQQQ.hpp"
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
osgUtil_LessDepthSortFunctorQQQ_QModel::osgUtil_LessDepthSortFunctorQQQ_QModel(const osgUtil_LessDepthSortFunctorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_LessDepthSortFunctorQQQ_QModel::~osgUtil_LessDepthSortFunctorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_LessDepthSortFunctorQQQ_QModel::osgUtil_LessDepthSortFunctorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::LessDepthSortFunctor*>(i->ptr);
}
QQuickItem *osgUtil_LessDepthSortFunctorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_LessDepthSortFunctorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_LessDepthSortFunctorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_LessDepthSortFunctorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_LessDepthSortFunctorQQQ::createQQModel(Instance*i){ return new osgUtil_LessDepthSortFunctorQQQ_QModel(i);}
