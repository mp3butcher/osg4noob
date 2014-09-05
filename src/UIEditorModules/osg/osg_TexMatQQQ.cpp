#include "osg_TexMatQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/TexMat>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_TexMatQQQ_QModel::osg_TexMatQQQ_QModel(const osg_TexMatQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_TexMatQQQ_QModel::~osg_TexMatQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_TexMatQQQ_QModel::osg_TexMatQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::TexMat*>(i->ptr);
}
QQuickItem *osg_TexMatQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_TexMatQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_TexMatQQQ::PREcompoQML()const{return string("");}
const std::string osg_TexMatQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_TexMatQQQ::createQQModel(Instance*i){ return new osg_TexMatQQQ_QModel(i);}
