#include "osgUtil_StatisticsQQQ.hpp"
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
osgUtil_StatisticsQQQ_QModel::osgUtil_StatisticsQQQ_QModel(const osgUtil_StatisticsQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_StatisticsQQQ_QModel::~osgUtil_StatisticsQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_StatisticsQQQ_QModel::osgUtil_StatisticsQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::Statistics*>(i->ptr);
}
QQuickItem *osgUtil_StatisticsQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_StatisticsQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_StatisticsQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_StatisticsQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_StatisticsQQQ::createQQModel(Instance*i){ return new osgUtil_StatisticsQQQ_QModel(i);}
