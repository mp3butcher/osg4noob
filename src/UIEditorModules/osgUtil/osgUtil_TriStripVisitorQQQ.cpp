#include "osgUtil_TriStripVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/TriStripVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_TriStripVisitorQQQ_QModel::osgUtil_TriStripVisitorQQQ_QModel(const osgUtil_TriStripVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_TriStripVisitorQQQ_QModel::~osgUtil_TriStripVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_TriStripVisitorQQQ_QModel::osgUtil_TriStripVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::TriStripVisitor*>(i->ptr);
}
QQuickItem *osgUtil_TriStripVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_TriStripVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_TriStripVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_TriStripVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_TriStripVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_TriStripVisitorQQQ_QModel(i);}
