#include "osg_SampleMaskiQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/SampleMaski>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_SampleMaskiQQQ_QModel::osg_SampleMaskiQQQ_QModel(const osg_SampleMaskiQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_SampleMaskiQQQ_QModel::~osg_SampleMaskiQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_SampleMaskiQQQ_QModel::osg_SampleMaskiQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::SampleMaski*>(i->ptr);
}
QQuickItem *osg_SampleMaskiQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_SampleMaskiQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_SampleMaskiQQQ::PREcompoQML()const{return string("");}
const std::string osg_SampleMaskiQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_SampleMaskiQQQ::createQQModel(Instance*i){ return new osg_SampleMaskiQQQ_QModel(i);}
