#include "osg_UniformQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Uniform>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_UniformQQQ_QModel::osg_UniformQQQ_QModel(const osg_UniformQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_UniformQQQ_QModel::~osg_UniformQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_UniformQQQ_QModel::osg_UniformQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Uniform*>(i->ptr);
}
QQuickItem *osg_UniformQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_UniformQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_UniformQQQ::PREcompoQML()const{return string("");}
const std::string osg_UniformQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_UniformQQQ::createQQModel(Instance*i){ return new osg_UniformQQQ_QModel(i);}
