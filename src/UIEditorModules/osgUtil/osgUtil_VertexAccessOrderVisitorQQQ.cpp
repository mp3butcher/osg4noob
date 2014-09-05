#include "osgUtil_VertexAccessOrderVisitorQQQ.hpp"
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
osgUtil_VertexAccessOrderVisitorQQQ_QModel::osgUtil_VertexAccessOrderVisitorQQQ_QModel(const osgUtil_VertexAccessOrderVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_VertexAccessOrderVisitorQQQ_QModel::~osgUtil_VertexAccessOrderVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_VertexAccessOrderVisitorQQQ_QModel::osgUtil_VertexAccessOrderVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::VertexAccessOrderVisitor*>(i->ptr);
}
QQuickItem *osgUtil_VertexAccessOrderVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_VertexAccessOrderVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_VertexAccessOrderVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_VertexAccessOrderVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_VertexAccessOrderVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_VertexAccessOrderVisitorQQQ_QModel(i);}
