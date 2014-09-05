#include "osg_BarrierOperationQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/GraphicsThread>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_BarrierOperationQQQ_QModel::osg_BarrierOperationQQQ_QModel(const osg_BarrierOperationQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_BarrierOperationQQQ_QModel::~osg_BarrierOperationQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_BarrierOperationQQQ_QModel::osg_BarrierOperationQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::BarrierOperation*>(i->ptr);
}
QQuickItem *osg_BarrierOperationQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_BarrierOperationQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_BarrierOperationQQQ::PREcompoQML()const{return string("");}
const std::string osg_BarrierOperationQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_BarrierOperationQQQ::createQQModel(Instance*i){ return new osg_BarrierOperationQQQ_QModel(i);}
