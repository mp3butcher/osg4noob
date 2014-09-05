#include "osg_StatsQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Stats>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_StatsQQQ_QModel::osg_StatsQQQ_QModel(const osg_StatsQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_StatsQQQ_QModel::~osg_StatsQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_StatsQQQ_QModel::osg_StatsQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Stats*>(i->ptr);
}
QQuickItem *osg_StatsQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_StatsQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_StatsQQQ::PREcompoQML()const{return string("");}
const std::string osg_StatsQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_StatsQQQ::createQQModel(Instance*i){ return new osg_StatsQQQ_QModel(i);}
