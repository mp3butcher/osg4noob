#include "osg_VertexAttribAliasQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/State>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_VertexAttribAliasQQQ_QModel::osg_VertexAttribAliasQQQ_QModel(const osg_VertexAttribAliasQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_VertexAttribAliasQQQ_QModel::~osg_VertexAttribAliasQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_VertexAttribAliasQQQ_QModel::osg_VertexAttribAliasQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::VertexAttribAlias*>(i->ptr);
}
QQuickItem *osg_VertexAttribAliasQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_VertexAttribAliasQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_VertexAttribAliasQQQ::PREcompoQML()const{return string("");}
const std::string osg_VertexAttribAliasQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_VertexAttribAliasQQQ::createQQModel(Instance*i){ return new osg_VertexAttribAliasQQQ_QModel(i);}
