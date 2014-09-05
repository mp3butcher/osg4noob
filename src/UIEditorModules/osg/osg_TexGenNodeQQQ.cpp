#include "osg_TexGenNodeQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/TexGenNode>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_TexGenNodeQQQ_QModel::osg_TexGenNodeQQQ_QModel(const osg_TexGenNodeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_TexGenNodeQQQ_QModel::~osg_TexGenNodeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_TexGenNodeQQQ_QModel::osg_TexGenNodeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::TexGenNode*>(i->ptr);
}
QQuickItem *osg_TexGenNodeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_TexGenNodeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_TexGenNodeQQQ::PREcompoQML()const{return string("");}
const std::string osg_TexGenNodeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_TexGenNodeQQQ::createQQModel(Instance*i){ return new osg_TexGenNodeQQQ_QModel(i);}
