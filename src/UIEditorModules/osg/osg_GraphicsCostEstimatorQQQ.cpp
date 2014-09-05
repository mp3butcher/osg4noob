#include "osg_GraphicsCostEstimatorQQQ.hpp"
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
osg_GraphicsCostEstimatorQQQ_QModel::osg_GraphicsCostEstimatorQQQ_QModel(const osg_GraphicsCostEstimatorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_GraphicsCostEstimatorQQQ_QModel::~osg_GraphicsCostEstimatorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_GraphicsCostEstimatorQQQ_QModel::osg_GraphicsCostEstimatorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::GraphicsCostEstimator*>(i->ptr);
}
QQuickItem *osg_GraphicsCostEstimatorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_GraphicsCostEstimatorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_GraphicsCostEstimatorQQQ::PREcompoQML()const{return string("");}
const std::string osg_GraphicsCostEstimatorQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_GraphicsCostEstimatorQQQ::createQQModel(Instance*i){ return new osg_GraphicsCostEstimatorQQQ_QModel(i);}
