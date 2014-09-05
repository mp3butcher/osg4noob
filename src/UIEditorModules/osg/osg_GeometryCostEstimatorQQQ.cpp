#include "osg_GeometryCostEstimatorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/GraphicsCostEstimator>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_GeometryCostEstimatorQQQ_QModel::osg_GeometryCostEstimatorQQQ_QModel(const osg_GeometryCostEstimatorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_GeometryCostEstimatorQQQ_QModel::~osg_GeometryCostEstimatorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_GeometryCostEstimatorQQQ_QModel::osg_GeometryCostEstimatorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::GeometryCostEstimator*>(i->ptr);
}
QQuickItem *osg_GeometryCostEstimatorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_GeometryCostEstimatorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_GeometryCostEstimatorQQQ::PREcompoQML()const{return string("");}
const std::string osg_GeometryCostEstimatorQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_GeometryCostEstimatorQQQ::createQQModel(Instance*i){ return new osg_GeometryCostEstimatorQQQ_QModel(i);}
