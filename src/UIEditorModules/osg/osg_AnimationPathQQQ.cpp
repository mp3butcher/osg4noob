#include "osg_AnimationPathQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/AnimationPath>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_AnimationPathQQQ_QModel::osg_AnimationPathQQQ_QModel(const osg_AnimationPathQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_AnimationPathQQQ_QModel::~osg_AnimationPathQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_AnimationPathQQQ_QModel::osg_AnimationPathQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::AnimationPath*>(i->ptr);
}
QQuickItem *osg_AnimationPathQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_AnimationPathQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_AnimationPathQQQ::PREcompoQML()const{return string("");}
const std::string osg_AnimationPathQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_AnimationPathQQQ::createQQModel(Instance*i){ return new osg_AnimationPathQQQ_QModel(i);}
