#include "osg_CameraViewQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/CameraView>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_CameraViewQQQ_QModel::osg_CameraViewQQQ_QModel(const osg_CameraViewQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_CameraViewQQQ_QModel::~osg_CameraViewQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_CameraViewQQQ_QModel::osg_CameraViewQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::CameraView*>(i->ptr);
}
QQuickItem *osg_CameraViewQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_CameraViewQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_CameraViewQQQ::PREcompoQML()const{return string("");}
const std::string osg_CameraViewQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_CameraViewQQQ::createQQModel(Instance*i){ return new osg_CameraViewQQQ_QModel(i);}
