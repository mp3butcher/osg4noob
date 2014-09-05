#include "osgUtil_VertexCacheVisitorQQQ.hpp"
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
osgUtil_VertexCacheVisitorQQQ_QModel::osgUtil_VertexCacheVisitorQQQ_QModel(const osgUtil_VertexCacheVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_VertexCacheVisitorQQQ_QModel::~osgUtil_VertexCacheVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_VertexCacheVisitorQQQ_QModel::osgUtil_VertexCacheVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::VertexCacheVisitor*>(i->ptr);
}
QQuickItem *osgUtil_VertexCacheVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_VertexCacheVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_VertexCacheVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_VertexCacheVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_VertexCacheVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_VertexCacheVisitorQQQ_QModel(i);}
