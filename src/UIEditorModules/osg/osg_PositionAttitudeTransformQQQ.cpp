#include "osg_PositionAttitudeTransformQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PositionAttitudeTransform>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_PositionAttitudeTransformQQQ_QModel::osg_PositionAttitudeTransformQQQ_QModel(const osg_PositionAttitudeTransformQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PositionAttitudeTransformQQQ_QModel::~osg_PositionAttitudeTransformQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PositionAttitudeTransformQQQ_QModel::osg_PositionAttitudeTransformQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::PositionAttitudeTransform*>(i->ptr);
}
QQuickItem *osg_PositionAttitudeTransformQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PositionAttitudeTransformQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PositionAttitudeTransformQQQ::PREcompoQML()const{return string("");}
const std::string osg_PositionAttitudeTransformQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PositionAttitudeTransformQQQ::createQQModel(Instance*i){ return new osg_PositionAttitudeTransformQQQ_QModel(i);}
