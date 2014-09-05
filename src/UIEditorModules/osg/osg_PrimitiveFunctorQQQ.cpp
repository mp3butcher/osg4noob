#include "osg_PrimitiveFunctorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PrimitiveSet>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_PrimitiveFunctorQQQ_QModel::osg_PrimitiveFunctorQQQ_QModel(const osg_PrimitiveFunctorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PrimitiveFunctorQQQ_QModel::~osg_PrimitiveFunctorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PrimitiveFunctorQQQ_QModel::osg_PrimitiveFunctorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::PrimitiveFunctor*>(i->ptr);
}
QQuickItem *osg_PrimitiveFunctorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PrimitiveFunctorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PrimitiveFunctorQQQ::PREcompoQML()const{return string("");}
const std::string osg_PrimitiveFunctorQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PrimitiveFunctorQQQ::createQQModel(Instance*i){ return new osg_PrimitiveFunctorQQQ_QModel(i);}
