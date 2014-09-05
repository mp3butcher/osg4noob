#include "osg_CompositeShapeQQQ.hpp"
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
osg_CompositeShapeQQQ_QModel::osg_CompositeShapeQQQ_QModel(const osg_CompositeShapeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_CompositeShapeQQQ_QModel::~osg_CompositeShapeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_CompositeShapeQQQ_QModel::osg_CompositeShapeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::CompositeShape*>(i->ptr);
}
QQuickItem *osg_CompositeShapeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_CompositeShapeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_CompositeShapeQQQ::PREcompoQML()const{return string("");}
const std::string osg_CompositeShapeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_CompositeShapeQQQ::createQQModel(Instance*i){ return new osg_CompositeShapeQQQ_QModel(i);}
