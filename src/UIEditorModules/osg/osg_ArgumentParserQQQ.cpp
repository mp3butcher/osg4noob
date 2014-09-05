#include "osg_ArgumentParserQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ArgumentParser>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ArgumentParserQQQ_QModel::osg_ArgumentParserQQQ_QModel(const osg_ArgumentParserQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ArgumentParserQQQ_QModel::~osg_ArgumentParserQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ArgumentParserQQQ_QModel::osg_ArgumentParserQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ArgumentParser*>(i->ptr);
}
QQuickItem *osg_ArgumentParserQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ArgumentParserQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ArgumentParserQQQ::PREcompoQML()const{return string("");}
const std::string osg_ArgumentParserQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ArgumentParserQQQ::createQQModel(Instance*i){ return new osg_ArgumentParserQQQ_QModel(i);}
