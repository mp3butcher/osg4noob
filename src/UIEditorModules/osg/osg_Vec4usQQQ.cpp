#include "osg_Vec4usQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Vec4us>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_Vec4usQQQ_QModel::osg_Vec4usQQQ_QModel(const osg_Vec4usQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_Vec4usQQQ_QModel::~osg_Vec4usQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_Vec4usQQQ_QModel::osg_Vec4usQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Vec4us*>(i->ptr);
}
QQuickItem *osg_Vec4usQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_Vec4usQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_Vec4usQQQ::PREcompoQML()const{return string("");}
const std::string osg_Vec4usQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_Vec4usQQQ::createQQModel(Instance*i){ return new osg_Vec4usQQQ_QModel(i);}
