#include "osg_ViewQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/View>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ViewQQQ_QModel::osg_ViewQQQ_QModel(const osg_ViewQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ViewQQQ_QModel::~osg_ViewQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ViewQQQ_QModel::osg_ViewQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::View*>(i->ptr);
}
QQuickItem *osg_ViewQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ViewQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ViewQQQ::PREcompoQML()const{return string("");}
const std::string osg_ViewQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ViewQQQ::createQQModel(Instance*i){ return new osg_ViewQQQ_QModel(i);}
