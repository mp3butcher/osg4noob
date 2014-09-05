#include "osg_ProgramCostEstimatorQQQ.hpp"
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
osg_ProgramCostEstimatorQQQ_QModel::osg_ProgramCostEstimatorQQQ_QModel(const osg_ProgramCostEstimatorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ProgramCostEstimatorQQQ_QModel::~osg_ProgramCostEstimatorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ProgramCostEstimatorQQQ_QModel::osg_ProgramCostEstimatorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ProgramCostEstimator*>(i->ptr);
}
QQuickItem *osg_ProgramCostEstimatorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ProgramCostEstimatorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ProgramCostEstimatorQQQ::PREcompoQML()const{return string("");}
const std::string osg_ProgramCostEstimatorQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ProgramCostEstimatorQQQ::createQQModel(Instance*i){ return new osg_ProgramCostEstimatorQQQ_QModel(i);}
