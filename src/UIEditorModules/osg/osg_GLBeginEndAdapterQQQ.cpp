#include "osg_GLBeginEndAdapterQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/GLBeginEndAdapter>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_GLBeginEndAdapterQQQ_QModel::osg_GLBeginEndAdapterQQQ_QModel(const osg_GLBeginEndAdapterQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_GLBeginEndAdapterQQQ_QModel::~osg_GLBeginEndAdapterQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_GLBeginEndAdapterQQQ_QModel::osg_GLBeginEndAdapterQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::GLBeginEndAdapter*>(i->ptr);
}
QQuickItem *osg_GLBeginEndAdapterQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_GLBeginEndAdapterQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_GLBeginEndAdapterQQQ::PREcompoQML()const{return string("");}
const std::string osg_GLBeginEndAdapterQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_GLBeginEndAdapterQQQ::createQQModel(Instance*i){ return new osg_GLBeginEndAdapterQQQ_QModel(i);}
