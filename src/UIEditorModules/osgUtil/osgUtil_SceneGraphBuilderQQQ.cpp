#include "osgUtil_SceneGraphBuilderQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/SceneGraphBuilder>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_SceneGraphBuilderQQQ_QModel::osgUtil_SceneGraphBuilderQQQ_QModel(const osgUtil_SceneGraphBuilderQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_SceneGraphBuilderQQQ_QModel::~osgUtil_SceneGraphBuilderQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_SceneGraphBuilderQQQ_QModel::osgUtil_SceneGraphBuilderQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::SceneGraphBuilder*>(i->ptr);
}
QQuickItem *osgUtil_SceneGraphBuilderQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_SceneGraphBuilderQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_SceneGraphBuilderQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_SceneGraphBuilderQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_SceneGraphBuilderQQQ::createQQModel(Instance*i){ return new osgUtil_SceneGraphBuilderQQQ_QModel(i);}
