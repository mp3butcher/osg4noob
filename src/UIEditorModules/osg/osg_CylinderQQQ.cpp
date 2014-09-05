#include "osg_CylinderQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Shape>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_CylinderQQQ_QModel::osg_CylinderQQQ_QModel(const osg_CylinderQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_CylinderQQQ_QModel::~osg_CylinderQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_CylinderQQQ_QModel::osg_CylinderQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Cylinder*>(i->ptr);
}
QQuickItem *osg_CylinderQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_CylinderQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_CylinderQQQ::PREcompoQML()const{return string("");}
const std::string osg_CylinderQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_CylinderQQQ::createQQModel(Instance*i){ return new osg_CylinderQQQ_QModel(i);}
