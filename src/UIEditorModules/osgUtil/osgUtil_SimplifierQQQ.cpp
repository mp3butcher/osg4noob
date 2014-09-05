#include "osgUtil_SimplifierQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/Simplifier>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_SimplifierQQQ_QModel::osgUtil_SimplifierQQQ_QModel(const osgUtil_SimplifierQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_SimplifierQQQ_QModel::~osgUtil_SimplifierQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_SimplifierQQQ_QModel::osgUtil_SimplifierQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::Simplifier*>(i->ptr);
}
QQuickItem *osgUtil_SimplifierQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_SimplifierQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_SimplifierQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_SimplifierQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_SimplifierQQQ::createQQModel(Instance*i){ return new osgUtil_SimplifierQQQ_QModel(i);}
