#include "osg_PatchParameterQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PatchParameter>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_PatchParameterQQQ_QModel::osg_PatchParameterQQQ_QModel(const osg_PatchParameterQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PatchParameterQQQ_QModel::~osg_PatchParameterQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PatchParameterQQQ_QModel::osg_PatchParameterQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::PatchParameter*>(i->ptr);
}
QQuickItem *osg_PatchParameterQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PatchParameterQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PatchParameterQQQ::PREcompoQML()const{return string("");}
const std::string osg_PatchParameterQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PatchParameterQQQ::createQQModel(Instance*i){ return new osg_PatchParameterQQQ_QModel(i);}
