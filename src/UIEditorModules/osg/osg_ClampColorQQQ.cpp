#include "osg_ClampColorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ClampColor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ClampColorQQQ_QModel::osg_ClampColorQQQ_QModel(const osg_ClampColorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ClampColorQQQ_QModel::~osg_ClampColorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ClampColorQQQ_QModel::osg_ClampColorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ClampColor*>(i->ptr);
}
QQuickItem *osg_ClampColorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ClampColorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ClampColorQQQ::PREcompoQML()const{return string("");}
const std::string osg_ClampColorQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ClampColorQQQ::createQQModel(Instance*i){ return new osg_ClampColorQQQ_QModel(i);}
