#include "osg_SphereQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Shape>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_SphereQQQ_QModel::osg_SphereQQQ_QModel(const osg_SphereQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_SphereQQQ_QModel::~osg_SphereQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_SphereQQQ_QModel::osg_SphereQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Sphere*>(i->ptr);
}
QQuickItem *osg_SphereQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_SphereQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_SphereQQQ::PREcompoQML()const{return string("");}
const std::string osg_SphereQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_SphereQQQ::createQQModel(Instance*i){ return new osg_SphereQQQ_QModel(i);}
