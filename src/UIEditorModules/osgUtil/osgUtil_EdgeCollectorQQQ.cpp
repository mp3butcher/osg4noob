#include "osgUtil_EdgeCollectorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/EdgeCollector>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_EdgeCollectorQQQ_QModel::osgUtil_EdgeCollectorQQQ_QModel(const osgUtil_EdgeCollectorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_EdgeCollectorQQQ_QModel::~osgUtil_EdgeCollectorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_EdgeCollectorQQQ_QModel::osgUtil_EdgeCollectorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::EdgeCollector*>(i->ptr);
}
QQuickItem *osgUtil_EdgeCollectorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_EdgeCollectorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_EdgeCollectorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_EdgeCollectorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_EdgeCollectorQQQ::createQQModel(Instance*i){ return new osgUtil_EdgeCollectorQQQ_QModel(i);}
