#include "osg_IndexArrayQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Array>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_IndexArrayQQQ_QModel::osg_IndexArrayQQQ_QModel(const osg_IndexArrayQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_IndexArrayQQQ_QModel::~osg_IndexArrayQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_IndexArrayQQQ_QModel::osg_IndexArrayQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::IndexArray*>(i->ptr);
}
QQuickItem *osg_IndexArrayQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_IndexArrayQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_IndexArrayQQQ::PREcompoQML()const{return string("");}
const std::string osg_IndexArrayQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_IndexArrayQQQ::createQQModel(Instance*i){ return new osg_IndexArrayQQQ_QModel(i);}
