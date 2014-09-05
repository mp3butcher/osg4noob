#include "osg_PolygonOffsetQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PolygonOffset>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_PolygonOffsetQQQ_QModel::osg_PolygonOffsetQQQ_QModel(const osg_PolygonOffsetQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PolygonOffsetQQQ_QModel::~osg_PolygonOffsetQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PolygonOffsetQQQ_QModel::osg_PolygonOffsetQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::PolygonOffset*>(i->ptr);
}
QQuickItem *osg_PolygonOffsetQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PolygonOffsetQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PolygonOffsetQQQ::PREcompoQML()const{return string("");}
const std::string osg_PolygonOffsetQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PolygonOffsetQQQ::createQQModel(Instance*i){ return new osg_PolygonOffsetQQQ_QModel(i);}
