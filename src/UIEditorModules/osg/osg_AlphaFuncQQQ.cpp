#include "osg_AlphaFuncQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/AlphaFunc>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_AlphaFuncQQQ_QModel::osg_AlphaFuncQQQ_QModel(const osg_AlphaFuncQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_AlphaFuncQQQ_QModel::~osg_AlphaFuncQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_AlphaFuncQQQ_QModel::osg_AlphaFuncQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::AlphaFunc*>(i->ptr);
}
QQuickItem *osg_AlphaFuncQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_AlphaFuncQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_AlphaFuncQQQ::PREcompoQML()const{return string("");}
const std::string osg_AlphaFuncQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_AlphaFuncQQQ::createQQModel(Instance*i){ return new osg_AlphaFuncQQQ_QModel(i);}
