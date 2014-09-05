#include "osgUtil_DelaunayConstraintQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/DelaunayTriangulator>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_DelaunayConstraintQQQ_QModel::osgUtil_DelaunayConstraintQQQ_QModel(const osgUtil_DelaunayConstraintQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_DelaunayConstraintQQQ_QModel::~osgUtil_DelaunayConstraintQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_DelaunayConstraintQQQ_QModel::osgUtil_DelaunayConstraintQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::DelaunayConstraint*>(i->ptr);
}
QQuickItem *osgUtil_DelaunayConstraintQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_DelaunayConstraintQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_DelaunayConstraintQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_DelaunayConstraintQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_DelaunayConstraintQQQ::createQQModel(Instance*i){ return new osgUtil_DelaunayConstraintQQQ_QModel(i);}
