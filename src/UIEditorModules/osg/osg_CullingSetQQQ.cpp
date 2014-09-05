#include "osg_CullingSetQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/CullingSet>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_CullingSetQQQ_QModel::osg_CullingSetQQQ_QModel(const osg_CullingSetQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_CullingSetQQQ_QModel::~osg_CullingSetQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_CullingSetQQQ_QModel::osg_CullingSetQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::CullingSet*>(i->ptr);
}
QQuickItem *osg_CullingSetQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_CullingSetQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_CullingSetQQQ::PREcompoQML()const{return string("");}
const std::string osg_CullingSetQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_CullingSetQQQ::createQQModel(Instance*i){ return new osg_CullingSetQQQ_QModel(i);}
