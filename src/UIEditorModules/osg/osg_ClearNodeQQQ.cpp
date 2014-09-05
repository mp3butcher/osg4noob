#include "osg_ClearNodeQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ClearNode>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ClearNodeQQQ_QModel::osg_ClearNodeQQQ_QModel(const osg_ClearNodeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ClearNodeQQQ_QModel::~osg_ClearNodeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ClearNodeQQQ_QModel::osg_ClearNodeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ClearNode*>(i->ptr);
}
QQuickItem *osg_ClearNodeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ClearNodeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ClearNodeQQQ::PREcompoQML()const{return string("");}
const std::string osg_ClearNodeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ClearNodeQQQ::createQQModel(Instance*i){ return new osg_ClearNodeQQQ_QModel(i);}
