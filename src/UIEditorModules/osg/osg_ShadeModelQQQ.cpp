#include "osg_ShadeModelQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ShadeModel>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ShadeModelQQQ_QModel::osg_ShadeModelQQQ_QModel(const osg_ShadeModelQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ShadeModelQQQ_QModel::~osg_ShadeModelQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ShadeModelQQQ_QModel::osg_ShadeModelQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ShadeModel*>(i->ptr);
}
QQuickItem *osg_ShadeModelQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ShadeModelQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ShadeModelQQQ::PREcompoQML()const{return string("");}
const std::string osg_ShadeModelQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ShadeModelQQQ::createQQModel(Instance*i){ return new osg_ShadeModelQQQ_QModel(i);}
