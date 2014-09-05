#include "osgUtil_AddRangeOperatorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/OperationArrayFunctor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_AddRangeOperatorQQQ_QModel::osgUtil_AddRangeOperatorQQQ_QModel(const osgUtil_AddRangeOperatorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_AddRangeOperatorQQQ_QModel::~osgUtil_AddRangeOperatorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_AddRangeOperatorQQQ_QModel::osgUtil_AddRangeOperatorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::AddRangeOperator*>(i->ptr);
}
QQuickItem *osgUtil_AddRangeOperatorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_AddRangeOperatorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_AddRangeOperatorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_AddRangeOperatorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_AddRangeOperatorQQQ::createQQModel(Instance*i){ return new osgUtil_AddRangeOperatorQQQ_QModel(i);}
