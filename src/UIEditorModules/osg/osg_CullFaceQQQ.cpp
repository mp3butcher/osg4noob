#include "osg_CullFaceQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/CullFace>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_CullFaceQQQ_QModel::osg_CullFaceQQQ_QModel(const osg_CullFaceQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_CullFaceQQQ_QModel::~osg_CullFaceQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_CullFaceQQQ_QModel::osg_CullFaceQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::CullFace*>(i->ptr);
}
QQuickItem *osg_CullFaceQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_CullFaceQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_CullFaceQQQ::PREcompoQML()const{return string("");}
const std::string osg_CullFaceQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_CullFaceQQQ::createQQModel(Instance*i){ return new osg_CullFaceQQQ_QModel(i);}
