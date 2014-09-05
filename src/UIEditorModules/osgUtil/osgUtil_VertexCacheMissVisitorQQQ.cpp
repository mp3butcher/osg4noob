#include "osgUtil_VertexCacheMissVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/MeshOptimizers>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_VertexCacheMissVisitorQQQ_QModel::osgUtil_VertexCacheMissVisitorQQQ_QModel(const osgUtil_VertexCacheMissVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_VertexCacheMissVisitorQQQ_QModel::~osgUtil_VertexCacheMissVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_VertexCacheMissVisitorQQQ_QModel::osgUtil_VertexCacheMissVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::VertexCacheMissVisitor*>(i->ptr);
}
QQuickItem *osgUtil_VertexCacheMissVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_VertexCacheMissVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_VertexCacheMissVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_VertexCacheMissVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_VertexCacheMissVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_VertexCacheMissVisitorQQQ_QModel(i);}
