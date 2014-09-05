#include "osgUtil_OptimizerQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/Optimizer>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_OptimizerQQQ_QModel::osgUtil_OptimizerQQQ_QModel(const osgUtil_OptimizerQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_OptimizerQQQ_QModel::~osgUtil_OptimizerQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_OptimizerQQQ_QModel::osgUtil_OptimizerQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::Optimizer*>(i->ptr);
}
QQuickItem *osgUtil_OptimizerQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_OptimizerQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_OptimizerQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_OptimizerQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_OptimizerQQQ::createQQModel(Instance*i){ return new osgUtil_OptimizerQQQ_QModel(i);}
