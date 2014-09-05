#include "osgUtil_IndexMeshVisitorQQQ.hpp"
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
osgUtil_IndexMeshVisitorQQQ_QModel::osgUtil_IndexMeshVisitorQQQ_QModel(const osgUtil_IndexMeshVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_IndexMeshVisitorQQQ_QModel::~osgUtil_IndexMeshVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_IndexMeshVisitorQQQ_QModel::osgUtil_IndexMeshVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::IndexMeshVisitor*>(i->ptr);
}
QQuickItem *osgUtil_IndexMeshVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_IndexMeshVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_IndexMeshVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_IndexMeshVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_IndexMeshVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_IndexMeshVisitorQQQ_QModel(i);}
