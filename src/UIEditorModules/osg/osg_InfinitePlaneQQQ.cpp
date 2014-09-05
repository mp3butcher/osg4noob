#include "osg_InfinitePlaneQQQ.hpp"
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
osg_InfinitePlaneQQQ_QModel::osg_InfinitePlaneQQQ_QModel(const osg_InfinitePlaneQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_InfinitePlaneQQQ_QModel::~osg_InfinitePlaneQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_InfinitePlaneQQQ_QModel::osg_InfinitePlaneQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::InfinitePlane*>(i->ptr);
}
QQuickItem *osg_InfinitePlaneQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_InfinitePlaneQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_InfinitePlaneQQQ::PREcompoQML()const{return string("");}
const std::string osg_InfinitePlaneQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_InfinitePlaneQQQ::createQQModel(Instance*i){ return new osg_InfinitePlaneQQQ_QModel(i);}
