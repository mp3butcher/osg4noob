#include "osgUtil_SceneViewQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/SceneView>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_SceneViewQQQ_QModel::osgUtil_SceneViewQQQ_QModel(const osgUtil_SceneViewQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_SceneViewQQQ_QModel::~osgUtil_SceneViewQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_SceneViewQQQ_QModel::osgUtil_SceneViewQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::SceneView*>(i->ptr);
}
QQuickItem *osgUtil_SceneViewQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_SceneViewQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_SceneViewQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_SceneViewQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_SceneViewQQQ::createQQModel(Instance*i){ return new osgUtil_SceneViewQQQ_QModel(i);}
