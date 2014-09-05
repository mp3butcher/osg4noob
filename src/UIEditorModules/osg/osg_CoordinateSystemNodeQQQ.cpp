#include "osg_CoordinateSystemNodeQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/CoordinateSystemNode>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_CoordinateSystemNodeQQQ_QModel::osg_CoordinateSystemNodeQQQ_QModel(const osg_CoordinateSystemNodeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_CoordinateSystemNodeQQQ_QModel::~osg_CoordinateSystemNodeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_CoordinateSystemNodeQQQ_QModel::osg_CoordinateSystemNodeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::CoordinateSystemNode*>(i->ptr);
}
QQuickItem *osg_CoordinateSystemNodeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_CoordinateSystemNodeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_CoordinateSystemNodeQQQ::PREcompoQML()const{return string("");}
const std::string osg_CoordinateSystemNodeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_CoordinateSystemNodeQQQ::createQQModel(Instance*i){ return new osg_CoordinateSystemNodeQQQ_QModel(i);}
