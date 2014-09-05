#include "osg_ClampedLinearCostFunction1DQQQ.hpp"
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
osg_ClampedLinearCostFunction1DQQQ_QModel::osg_ClampedLinearCostFunction1DQQQ_QModel(const osg_ClampedLinearCostFunction1DQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ClampedLinearCostFunction1DQQQ_QModel::~osg_ClampedLinearCostFunction1DQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ClampedLinearCostFunction1DQQQ_QModel::osg_ClampedLinearCostFunction1DQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ClampedLinearCostFunction1D*>(i->ptr);
}
QQuickItem *osg_ClampedLinearCostFunction1DQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ClampedLinearCostFunction1DQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ClampedLinearCostFunction1DQQQ::PREcompoQML()const{return string("");}
const std::string osg_ClampedLinearCostFunction1DQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ClampedLinearCostFunction1DQQQ::createQQModel(Instance*i){ return new osg_ClampedLinearCostFunction1DQQQ_QModel(i);}
