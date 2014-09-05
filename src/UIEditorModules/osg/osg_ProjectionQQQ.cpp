#include "osg_ProjectionQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Projection>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ProjectionQQQ_QModel::osg_ProjectionQQQ_QModel(const osg_ProjectionQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ProjectionQQQ_QModel::~osg_ProjectionQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ProjectionQQQ_QModel::osg_ProjectionQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Projection*>(i->ptr);
}
QQuickItem *osg_ProjectionQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ProjectionQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ProjectionQQQ::PREcompoQML()const{return string("");}
const std::string osg_ProjectionQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ProjectionQQQ::createQQModel(Instance*i){ return new osg_ProjectionQQQ_QModel(i);}
