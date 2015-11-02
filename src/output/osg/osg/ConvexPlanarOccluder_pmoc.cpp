#include <osg/ConvexPlanarOccluder>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ConvexPlanarOccluder_pmoc.hpp>
#include <customCode/osg/ConvexPlanarOccluder_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/ConvexPlanarPolygon_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ConvexPlanarOccluder::addHole(osg::QReflect_ConvexPlanarPolygon *p0){
 _model->addHole(*p0->_model);

}
 void osg::QReflect_ConvexPlanarOccluder::setOccluder(osg::QReflect_ConvexPlanarPolygon *p0){
 _model->setOccluder(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ConvexPlanarOccluder::QReflect_ConvexPlanarOccluder(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ConvexPlanarOccluder*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ConvexPlanarOccluder::~QReflect_ConvexPlanarOccluder( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ConvexPlanarOccluder::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ConvexPlanarOccluder::createInstance( ){
osg::ref_ptr<osg::ConvexPlanarOccluder> osg_ConvexPlanarOccluder_ptr	;
osg_ConvexPlanarOccluder_ptr = new osg::ConvexPlanarOccluder ()	;
Instance o(PMOCGETMETACLASS("osg::ConvexPlanarOccluder"),(void*)osg_ConvexPlanarOccluder_ptr.get()		,true);
_managedinstances.insert(osg_ConvexPlanarOccluder_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ConvexPlanarOccluder::MetaQReflect_ConvexPlanarOccluder():MetaQQuickClass( "osg::ConvexPlanarOccluder"){
_typeid=&typeid(osg::ConvexPlanarOccluder );           qRegisterMetaType<QMLConvexPlanarOccluder>();
qmlRegisterType<QReflect_ConvexPlanarOccluder>("pmoc.osg",1,0,"QReflect_ConvexPlanarOccluder");
           qmlRegisterType<QMLConvexPlanarOccluder>("pmoc.osg",1,0,"QMLConvexPlanarOccluder");
};
const std::string osg::MetaQReflect_ConvexPlanarOccluder::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ConvexPlanarOccluder::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ConvexPlanarOccluder::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ConvexPlanarOccluder::createQQModel(Instance*i){ //return new MetaQReflect_ConvexPlanarOccluder_QModel(i);}
QMLConvexPlanarOccluder *ret =new QMLConvexPlanarOccluder(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::ConvexPlanarOccluderis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::ConvexPlanarOccluderis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ConvexPlanarOccluder_pmoc.cpp"
#endif


