#include "osg_ClusterCullingCallbackQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ClusterCullingCallback>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ClusterCullingCallbackQQQ_QModel::osg_ClusterCullingCallbackQQQ_QModel(const osg_ClusterCullingCallbackQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ClusterCullingCallbackQQQ_QModel::~osg_ClusterCullingCallbackQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ClusterCullingCallbackQQQ_QModel::osg_ClusterCullingCallbackQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ClusterCullingCallback*>(i->ptr);
}
QQuickItem *osg_ClusterCullingCallbackQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ClusterCullingCallbackQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ClusterCullingCallbackQQQ::PREcompoQML()const{return string("");}
const std::string osg_ClusterCullingCallbackQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ClusterCullingCallbackQQQ::createQQModel(Instance*i){ return new osg_ClusterCullingCallbackQQQ_QModel(i);}
