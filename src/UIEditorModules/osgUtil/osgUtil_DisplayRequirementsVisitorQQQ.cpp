#include "osgUtil_DisplayRequirementsVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/DisplayRequirementsVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_DisplayRequirementsVisitorQQQ_QModel::osgUtil_DisplayRequirementsVisitorQQQ_QModel(const osgUtil_DisplayRequirementsVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_DisplayRequirementsVisitorQQQ_QModel::~osgUtil_DisplayRequirementsVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_DisplayRequirementsVisitorQQQ_QModel::osgUtil_DisplayRequirementsVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::DisplayRequirementsVisitor*>(i->ptr);
}
QQuickItem *osgUtil_DisplayRequirementsVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_DisplayRequirementsVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_DisplayRequirementsVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_DisplayRequirementsVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_DisplayRequirementsVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_DisplayRequirementsVisitorQQQ_QModel(i);}
