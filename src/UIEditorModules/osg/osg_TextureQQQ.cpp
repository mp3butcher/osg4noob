#include "osg_TextureQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Texture>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_TextureQQQ_QModel::osg_TextureQQQ_QModel(const osg_TextureQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_TextureQQQ_QModel::~osg_TextureQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_TextureQQQ_QModel::osg_TextureQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Texture*>(i->ptr);
}
QQuickItem *osg_TextureQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_TextureQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_TextureQQQ::PREcompoQML()const{return string("");}
const std::string osg_TextureQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_TextureQQQ::createQQModel(Instance*i){ return new osg_TextureQQQ_QModel(i);}
