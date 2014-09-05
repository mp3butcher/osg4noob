#include "osg_ClipPlaneQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ClipPlane>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ClipPlaneQQQ_QModel::osg_ClipPlaneQQQ_QModel(const osg_ClipPlaneQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ClipPlaneQQQ_QModel::~osg_ClipPlaneQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ClipPlaneQQQ_QModel::osg_ClipPlaneQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ClipPlane*>(i->ptr);
}
QQuickItem *osg_ClipPlaneQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ClipPlaneQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ClipPlaneQQQ::PREcompoQML()const{return string("");}
const std::string osg_ClipPlaneQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ClipPlaneQQQ::createQQModel(Instance*i){ return new osg_ClipPlaneQQQ_QModel(i);}
