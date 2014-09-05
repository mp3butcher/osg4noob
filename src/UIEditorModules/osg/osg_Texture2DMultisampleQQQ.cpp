#include "osg_Texture2DMultisampleQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Texture2DMultisample>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_Texture2DMultisampleQQQ_QModel::osg_Texture2DMultisampleQQQ_QModel(const osg_Texture2DMultisampleQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_Texture2DMultisampleQQQ_QModel::~osg_Texture2DMultisampleQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_Texture2DMultisampleQQQ_QModel::osg_Texture2DMultisampleQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Texture2DMultisample*>(i->ptr);
}
QQuickItem *osg_Texture2DMultisampleQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_Texture2DMultisampleQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_Texture2DMultisampleQQQ::PREcompoQML()const{return string("");}
const std::string osg_Texture2DMultisampleQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_Texture2DMultisampleQQQ::createQQModel(Instance*i){ return new osg_Texture2DMultisampleQQQ_QModel(i);}
