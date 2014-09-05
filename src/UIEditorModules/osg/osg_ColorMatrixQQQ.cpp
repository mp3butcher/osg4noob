#include "osg_ColorMatrixQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ColorMatrix>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ColorMatrixQQQ_QModel::osg_ColorMatrixQQQ_QModel(const osg_ColorMatrixQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ColorMatrixQQQ_QModel::~osg_ColorMatrixQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ColorMatrixQQQ_QModel::osg_ColorMatrixQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ColorMatrix*>(i->ptr);
}
QQuickItem *osg_ColorMatrixQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ColorMatrixQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ColorMatrixQQQ::PREcompoQML()const{return string("");}
const std::string osg_ColorMatrixQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ColorMatrixQQQ::createQQModel(Instance*i){ return new osg_ColorMatrixQQQ_QModel(i);}
