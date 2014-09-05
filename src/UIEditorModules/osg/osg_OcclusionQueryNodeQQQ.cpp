#include "osg_OcclusionQueryNodeQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/OcclusionQueryNode>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_OcclusionQueryNodeQQQ_QModel::osg_OcclusionQueryNodeQQQ_QModel(const osg_OcclusionQueryNodeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_OcclusionQueryNodeQQQ_QModel::~osg_OcclusionQueryNodeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_OcclusionQueryNodeQQQ_QModel::osg_OcclusionQueryNodeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::OcclusionQueryNode*>(i->ptr);
}
QQuickItem *osg_OcclusionQueryNodeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_OcclusionQueryNodeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_OcclusionQueryNodeQQQ::PREcompoQML()const{return string("");}
const std::string osg_OcclusionQueryNodeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_OcclusionQueryNodeQQQ::createQQModel(Instance*i){ return new osg_OcclusionQueryNodeQQQ_QModel(i);}
