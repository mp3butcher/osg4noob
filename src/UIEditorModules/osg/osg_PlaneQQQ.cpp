#include "osg_PlaneQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Plane>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_PlaneQQQ_QModel::osg_PlaneQQQ_QModel(const osg_PlaneQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PlaneQQQ_QModel::~osg_PlaneQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PlaneQQQ_QModel::osg_PlaneQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Plane*>(i->ptr);
}
QQuickItem *osg_PlaneQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PlaneQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PlaneQQQ::PREcompoQML()const{return string("");}
const std::string osg_PlaneQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PlaneQQQ::createQQModel(Instance*i){ return new osg_PlaneQQQ_QModel(i);}
