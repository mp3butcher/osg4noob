#include "osg_ImageStreamQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ImageStream>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ImageStreamQQQ_QModel::osg_ImageStreamQQQ_QModel(const osg_ImageStreamQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ImageStreamQQQ_QModel::~osg_ImageStreamQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ImageStreamQQQ_QModel::osg_ImageStreamQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ImageStream*>(i->ptr);
}
QQuickItem *osg_ImageStreamQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ImageStreamQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ImageStreamQQQ::PREcompoQML()const{return string("");}
const std::string osg_ImageStreamQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ImageStreamQQQ::createQQModel(Instance*i){ return new osg_ImageStreamQQQ_QModel(i);}
