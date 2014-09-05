#include "osg_LineSegmentQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/LineSegment>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_LineSegmentQQQ_QModel::osg_LineSegmentQQQ_QModel(const osg_LineSegmentQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_LineSegmentQQQ_QModel::~osg_LineSegmentQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_LineSegmentQQQ_QModel::osg_LineSegmentQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::LineSegment*>(i->ptr);
}
QQuickItem *osg_LineSegmentQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_LineSegmentQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_LineSegmentQQQ::PREcompoQML()const{return string("");}
const std::string osg_LineSegmentQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_LineSegmentQQQ::createQQModel(Instance*i){ return new osg_LineSegmentQQQ_QModel(i);}
