#include "osgUtil_StatsVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/Statistics>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_StatsVisitorQQQ_QModel::osgUtil_StatsVisitorQQQ_QModel(const osgUtil_StatsVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_StatsVisitorQQQ_QModel::~osgUtil_StatsVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_StatsVisitorQQQ_QModel::osgUtil_StatsVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::StatsVisitor*>(i->ptr);
}
QQuickItem *osgUtil_StatsVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_StatsVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_StatsVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_StatsVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_StatsVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_StatsVisitorQQQ_QModel(i);}
