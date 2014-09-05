#include "osg_CullStackQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/CullStack>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_CullStackQQQ_QModel::osg_CullStackQQQ_QModel(const osg_CullStackQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_CullStackQQQ_QModel::~osg_CullStackQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_CullStackQQQ_QModel::osg_CullStackQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::CullStack*>(i->ptr);
}
QQuickItem *osg_CullStackQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_CullStackQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_CullStackQQQ::PREcompoQML()const{return string("");}
const std::string osg_CullStackQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_CullStackQQQ::createQQModel(Instance*i){ return new osg_CullStackQQQ_QModel(i);}
