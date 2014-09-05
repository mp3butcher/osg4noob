#include "osg_Vec2ubQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Vec2ub>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_Vec2ubQQQ_QModel::osg_Vec2ubQQQ_QModel(const osg_Vec2ubQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_Vec2ubQQQ_QModel::~osg_Vec2ubQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_Vec2ubQQQ_QModel::osg_Vec2ubQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Vec2ub*>(i->ptr);
}
QQuickItem *osg_Vec2ubQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_Vec2ubQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_Vec2ubQQQ::PREcompoQML()const{return string("");}
const std::string osg_Vec2ubQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_Vec2ubQQQ::createQQModel(Instance*i){ return new osg_Vec2ubQQQ_QModel(i);}
