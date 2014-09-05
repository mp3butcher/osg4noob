#include "osg_ProgramQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Program>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ProgramQQQ_QModel::osg_ProgramQQQ_QModel(const osg_ProgramQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ProgramQQQ_QModel::~osg_ProgramQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ProgramQQQ_QModel::osg_ProgramQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Program*>(i->ptr);
}
QQuickItem *osg_ProgramQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ProgramQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ProgramQQQ::PREcompoQML()const{return string("");}
const std::string osg_ProgramQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ProgramQQQ::createQQModel(Instance*i){ return new osg_ProgramQQQ_QModel(i);}
