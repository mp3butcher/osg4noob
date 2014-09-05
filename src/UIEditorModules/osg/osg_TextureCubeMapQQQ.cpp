#include "osg_TextureCubeMapQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/TextureCubeMap>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_TextureCubeMapQQQ_QModel::osg_TextureCubeMapQQQ_QModel(const osg_TextureCubeMapQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_TextureCubeMapQQQ_QModel::~osg_TextureCubeMapQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_TextureCubeMapQQQ_QModel::osg_TextureCubeMapQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::TextureCubeMap*>(i->ptr);
}
QQuickItem *osg_TextureCubeMapQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_TextureCubeMapQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_TextureCubeMapQQQ::PREcompoQML()const{return string("");}
const std::string osg_TextureCubeMapQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_TextureCubeMapQQQ::createQQModel(Instance*i){ return new osg_TextureCubeMapQQQ_QModel(i);}
