#include "osg_ConvexPlanarPolygonQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ConvexPlanarPolygon>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ConvexPlanarPolygonQQQ_QModel::osg_ConvexPlanarPolygonQQQ_QModel(const osg_ConvexPlanarPolygonQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ConvexPlanarPolygonQQQ_QModel::~osg_ConvexPlanarPolygonQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ConvexPlanarPolygonQQQ_QModel::osg_ConvexPlanarPolygonQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ConvexPlanarPolygon*>(i->ptr);
}
QQuickItem *osg_ConvexPlanarPolygonQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ConvexPlanarPolygonQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ConvexPlanarPolygonQQQ::PREcompoQML()const{return string("");}
const std::string osg_ConvexPlanarPolygonQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ConvexPlanarPolygonQQQ::createQQModel(Instance*i){ return new osg_ConvexPlanarPolygonQQQ_QModel(i);}
