#include "osgUtil_ShaderGenVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/ShaderGen>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_ShaderGenVisitorQQQ_QModel::osgUtil_ShaderGenVisitorQQQ_QModel(const osgUtil_ShaderGenVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_ShaderGenVisitorQQQ_QModel::~osgUtil_ShaderGenVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_ShaderGenVisitorQQQ_QModel::osgUtil_ShaderGenVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::ShaderGenVisitor*>(i->ptr);
}
QQuickItem *osgUtil_ShaderGenVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_ShaderGenVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_ShaderGenVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_ShaderGenVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_ShaderGenVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_ShaderGenVisitorQQQ_QModel(i);}
