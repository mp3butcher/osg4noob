#include "osg_QuatQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Quat>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_QuatQQQ_QModel::osg_QuatQQQ_QModel(const osg_QuatQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_QuatQQQ_QModel::~osg_QuatQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_QuatQQQ_QModel::osg_QuatQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Quat*>(i->ptr);
}
QQuickItem *osg_QuatQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_QuatQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_QuatQQQ::PREcompoQML()const{return string("");}
const std::string osg_QuatQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_QuatQQQ::createQQModel(Instance*i){ return new osg_QuatQQQ_QModel(i);}
