#include "osg_FragmentProgramQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/FragmentProgram>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_FragmentProgramQQQ_QModel::osg_FragmentProgramQQQ_QModel(const osg_FragmentProgramQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_FragmentProgramQQQ_QModel::~osg_FragmentProgramQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_FragmentProgramQQQ_QModel::osg_FragmentProgramQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::FragmentProgram*>(i->ptr);
}
QQuickItem *osg_FragmentProgramQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_FragmentProgramQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_FragmentProgramQQQ::PREcompoQML()const{return string("");}
const std::string osg_FragmentProgramQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_FragmentProgramQQQ::createQQModel(Instance*i){ return new osg_FragmentProgramQQQ_QModel(i);}
