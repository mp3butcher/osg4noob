#include "osg_Texture2DArrayQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Texture2DArray>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_Texture2DArrayQQQ_QModel::osg_Texture2DArrayQQQ_QModel(const osg_Texture2DArrayQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_Texture2DArrayQQQ_QModel::~osg_Texture2DArrayQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_Texture2DArrayQQQ_QModel::osg_Texture2DArrayQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Texture2DArray*>(i->ptr);
}
QQuickItem *osg_Texture2DArrayQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_Texture2DArrayQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_Texture2DArrayQQQ::PREcompoQML()const{return string("");}
const std::string osg_Texture2DArrayQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_Texture2DArrayQQQ::createQQModel(Instance*i){ return new osg_Texture2DArrayQQQ_QModel(i);}
