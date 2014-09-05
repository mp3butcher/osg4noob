#include "osg_RenderInfoQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/RenderInfo>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_RenderInfoQQQ_QModel::osg_RenderInfoQQQ_QModel(const osg_RenderInfoQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_RenderInfoQQQ_QModel::~osg_RenderInfoQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_RenderInfoQQQ_QModel::osg_RenderInfoQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::RenderInfo*>(i->ptr);
}
QQuickItem *osg_RenderInfoQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_RenderInfoQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_RenderInfoQQQ::PREcompoQML()const{return string("");}
const std::string osg_RenderInfoQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_RenderInfoQQQ::createQQModel(Instance*i){ return new osg_RenderInfoQQQ_QModel(i);}
