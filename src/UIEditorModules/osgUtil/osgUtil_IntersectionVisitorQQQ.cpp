#include "osgUtil_IntersectionVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/IntersectionVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_IntersectionVisitorQQQ_QModel::osgUtil_IntersectionVisitorQQQ_QModel(const osgUtil_IntersectionVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_IntersectionVisitorQQQ_QModel::~osgUtil_IntersectionVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_IntersectionVisitorQQQ_QModel::osgUtil_IntersectionVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::IntersectionVisitor*>(i->ptr);
}
QQuickItem *osgUtil_IntersectionVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_IntersectionVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_IntersectionVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_IntersectionVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_IntersectionVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_IntersectionVisitorQQQ_QModel(i);}
