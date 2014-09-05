#include "osg_PagedLODQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PagedLOD>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_PagedLODQQQ_QModel::osg_PagedLODQQQ_QModel(const osg_PagedLODQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PagedLODQQQ_QModel::~osg_PagedLODQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PagedLODQQQ_QModel::osg_PagedLODQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::PagedLOD*>(i->ptr);
}
QQuickItem *osg_PagedLODQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PagedLODQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PagedLODQQQ::PREcompoQML()const{return string("");}
const std::string osg_PagedLODQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PagedLODQQQ::createQQModel(Instance*i){ return new osg_PagedLODQQQ_QModel(i);}
