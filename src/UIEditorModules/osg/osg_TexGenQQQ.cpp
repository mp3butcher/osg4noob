#include "osg_TexGenQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/TexGen>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_TexGenQQQ_QModel::osg_TexGenQQQ_QModel(const osg_TexGenQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_TexGenQQQ_QModel::~osg_TexGenQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_TexGenQQQ_QModel::osg_TexGenQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::TexGen*>(i->ptr);
}
QQuickItem *osg_TexGenQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_TexGenQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_TexGenQQQ::PREcompoQML()const{return string("");}
const std::string osg_TexGenQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_TexGenQQQ::createQQModel(Instance*i){ return new osg_TexGenQQQ_QModel(i);}
