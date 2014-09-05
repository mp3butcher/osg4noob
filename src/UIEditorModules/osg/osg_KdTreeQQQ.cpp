#include "osg_KdTreeQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/KdTree>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_KdTreeQQQ_QModel::osg_KdTreeQQQ_QModel(const osg_KdTreeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_KdTreeQQQ_QModel::~osg_KdTreeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_KdTreeQQQ_QModel::osg_KdTreeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::KdTree*>(i->ptr);
}
QQuickItem *osg_KdTreeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_KdTreeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_KdTreeQQQ::PREcompoQML()const{return string("");}
const std::string osg_KdTreeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_KdTreeQQQ::createQQModel(Instance*i){ return new osg_KdTreeQQQ_QModel(i);}
