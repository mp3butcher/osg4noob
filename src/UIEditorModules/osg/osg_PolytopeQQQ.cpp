#include "osg_PolytopeQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Polytope>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_PolytopeQQQ_QModel::osg_PolytopeQQQ_QModel(const osg_PolytopeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PolytopeQQQ_QModel::~osg_PolytopeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PolytopeQQQ_QModel::osg_PolytopeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Polytope*>(i->ptr);
}
QQuickItem *osg_PolytopeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PolytopeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PolytopeQQQ::PREcompoQML()const{return string("");}
const std::string osg_PolytopeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PolytopeQQQ::createQQModel(Instance*i){ return new osg_PolytopeQQQ_QModel(i);}
