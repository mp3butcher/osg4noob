#include "osg_LineStippleQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/LineStipple>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_LineStippleQQQ_QModel::osg_LineStippleQQQ_QModel(const osg_LineStippleQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_LineStippleQQQ_QModel::~osg_LineStippleQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_LineStippleQQQ_QModel::osg_LineStippleQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::LineStipple*>(i->ptr);
}
QQuickItem *osg_LineStippleQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_LineStippleQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_LineStippleQQQ::PREcompoQML()const{return string("");}
const std::string osg_LineStippleQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_LineStippleQQQ::createQQModel(Instance*i){ return new osg_LineStippleQQQ_QModel(i);}
