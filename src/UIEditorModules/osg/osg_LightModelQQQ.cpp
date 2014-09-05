#include "osg_LightModelQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/LightModel>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_LightModelQQQ_QModel::osg_LightModelQQQ_QModel(const osg_LightModelQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_LightModelQQQ_QModel::~osg_LightModelQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_LightModelQQQ_QModel::osg_LightModelQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::LightModel*>(i->ptr);
}
QQuickItem *osg_LightModelQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_LightModelQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_LightModelQQQ::PREcompoQML()const{return string("");}
const std::string osg_LightModelQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_LightModelQQQ::createQQModel(Instance*i){ return new osg_LightModelQQQ_QModel(i);}
