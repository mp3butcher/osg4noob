#include "osg_TransformQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Transform>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_TransformQQQ_QModel::osg_TransformQQQ_QModel(const osg_TransformQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_TransformQQQ_QModel::~osg_TransformQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_TransformQQQ_QModel::osg_TransformQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Transform*>(i->ptr);
}
QQuickItem *osg_TransformQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_TransformQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_TransformQQQ::PREcompoQML()const{return string("");}
const std::string osg_TransformQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_TransformQQQ::createQQModel(Instance*i){ return new osg_TransformQQQ_QModel(i);}
