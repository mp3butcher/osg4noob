#include "osg_ConvexPlanarOccluderQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ConvexPlanarOccluder>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ConvexPlanarOccluderQQQ_QModel::osg_ConvexPlanarOccluderQQQ_QModel(const osg_ConvexPlanarOccluderQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ConvexPlanarOccluderQQQ_QModel::~osg_ConvexPlanarOccluderQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ConvexPlanarOccluderQQQ_QModel::osg_ConvexPlanarOccluderQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ConvexPlanarOccluder*>(i->ptr);
}
QQuickItem *osg_ConvexPlanarOccluderQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ConvexPlanarOccluderQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ConvexPlanarOccluderQQQ::PREcompoQML()const{return string("");}
const std::string osg_ConvexPlanarOccluderQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ConvexPlanarOccluderQQQ::createQQModel(Instance*i){ return new osg_ConvexPlanarOccluderQQQ_QModel(i);}
