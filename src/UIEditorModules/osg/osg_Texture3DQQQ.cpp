#include "osg_Texture3DQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Texture3D>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_Texture3DQQQ_QModel::osg_Texture3DQQQ_QModel(const osg_Texture3DQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_Texture3DQQQ_QModel::~osg_Texture3DQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_Texture3DQQQ_QModel::osg_Texture3DQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Texture3D*>(i->ptr);
}
QQuickItem *osg_Texture3DQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_Texture3DQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_Texture3DQQQ::PREcompoQML()const{return string("");}
const std::string osg_Texture3DQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_Texture3DQQQ::createQQModel(Instance*i){ return new osg_Texture3DQQQ_QModel(i);}
