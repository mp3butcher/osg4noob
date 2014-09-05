#include "osg_MatrixdQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Matrixd>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_MatrixdQQQ_QModel::osg_MatrixdQQQ_QModel(const osg_MatrixdQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_MatrixdQQQ_QModel::~osg_MatrixdQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_MatrixdQQQ_QModel::osg_MatrixdQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Matrixd*>(i->ptr);
}
QQuickItem *osg_MatrixdQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_MatrixdQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_MatrixdQQQ::PREcompoQML()const{return string("");}
const std::string osg_MatrixdQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_MatrixdQQQ::createQQModel(Instance*i){ return new osg_MatrixdQQQ_QModel(i);}
