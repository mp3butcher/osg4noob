#include "osgUtil_BaseOptimizerVisitorQQQ.hpp"
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
osgUtil_BaseOptimizerVisitorQQQ_QModel::osgUtil_BaseOptimizerVisitorQQQ_QModel(const osgUtil_BaseOptimizerVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_BaseOptimizerVisitorQQQ_QModel::~osgUtil_BaseOptimizerVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_BaseOptimizerVisitorQQQ_QModel::osgUtil_BaseOptimizerVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::BaseOptimizerVisitor*>(i->ptr);
}
QQuickItem *osgUtil_BaseOptimizerVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_BaseOptimizerVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_BaseOptimizerVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_BaseOptimizerVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_BaseOptimizerVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_BaseOptimizerVisitorQQQ_QModel(i);}
