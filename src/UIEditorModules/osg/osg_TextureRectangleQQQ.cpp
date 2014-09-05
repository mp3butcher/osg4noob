#include "osg_TextureRectangleQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/TextureRectangle>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_TextureRectangleQQQ_QModel::osg_TextureRectangleQQQ_QModel(const osg_TextureRectangleQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_TextureRectangleQQQ_QModel::~osg_TextureRectangleQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_TextureRectangleQQQ_QModel::osg_TextureRectangleQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::TextureRectangle*>(i->ptr);
}
QQuickItem *osg_TextureRectangleQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_TextureRectangleQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_TextureRectangleQQQ::PREcompoQML()const{return string("");}
const std::string osg_TextureRectangleQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_TextureRectangleQQQ::createQQModel(Instance*i){ return new osg_TextureRectangleQQQ_QModel(i);}