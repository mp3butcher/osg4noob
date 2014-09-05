#include "osg_ImageQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Image>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ImageQQQ_QModel::osg_ImageQQQ_QModel(const osg_ImageQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ImageQQQ_QModel::~osg_ImageQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ImageQQQ_QModel::osg_ImageQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Image*>(i->ptr);
}
QQuickItem *osg_ImageQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ImageQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ImageQQQ::PREcompoQML()const{return string("");}
const std::string osg_ImageQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ImageQQQ::createQQModel(Instance*i){ return new osg_ImageQQQ_QModel(i);}
