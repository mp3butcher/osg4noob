#include "osg_BlendFuncQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/BlendFunc>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_BlendFuncQQQ_QModel::osg_BlendFuncQQQ_QModel(const osg_BlendFuncQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_BlendFuncQQQ_QModel::~osg_BlendFuncQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_BlendFuncQQQ_QModel::osg_BlendFuncQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::BlendFunc*>(i->ptr);
}
QQuickItem *osg_BlendFuncQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_BlendFuncQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_BlendFuncQQQ::PREcompoQML()const{return string("");}
const std::string osg_BlendFuncQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_BlendFuncQQQ::createQQModel(Instance*i){ return new osg_BlendFuncQQQ_QModel(i);}
