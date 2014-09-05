#include "osg_OccluderNodeQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/OccluderNode>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_OccluderNodeQQQ_QModel::osg_OccluderNodeQQQ_QModel(const osg_OccluderNodeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_OccluderNodeQQQ_QModel::~osg_OccluderNodeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_OccluderNodeQQQ_QModel::osg_OccluderNodeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::OccluderNode*>(i->ptr);
}
QQuickItem *osg_OccluderNodeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_OccluderNodeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_OccluderNodeQQQ::PREcompoQML()const{return string("");}
const std::string osg_OccluderNodeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_OccluderNodeQQQ::createQQModel(Instance*i){ return new osg_OccluderNodeQQQ_QModel(i);}
