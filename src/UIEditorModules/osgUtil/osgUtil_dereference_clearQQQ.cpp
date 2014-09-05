#include "osgUtil_dereference_clearQQQ.hpp"
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
osgUtil_dereference_clearQQQ_QModel::osgUtil_dereference_clearQQQ_QModel(const osgUtil_dereference_clearQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_dereference_clearQQQ_QModel::~osgUtil_dereference_clearQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_dereference_clearQQQ_QModel::osgUtil_dereference_clearQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::dereference_clear*>(i->ptr);
}
QQuickItem *osgUtil_dereference_clearQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_dereference_clearQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_dereference_clearQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_dereference_clearQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_dereference_clearQQQ::createQQModel(Instance*i){ return new osgUtil_dereference_clearQQQ_QModel(i);}
