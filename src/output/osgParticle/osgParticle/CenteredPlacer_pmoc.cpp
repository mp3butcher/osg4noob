#include <osgParticle/CenteredPlacer>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/CenteredPlacer_pmoc.hpp>
#include <customCode/osgParticle/CenteredPlacer_pmoc.hpp>
#include <customCode/osgParticle/Placer_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_CenteredPlacer:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_CenteredPlacer::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 void osgParticle::QReflect_CenteredPlacer::setCenter( float  p0 , float  p1 , float  p2){
//params checking
 _model->setCenter(p0 ,p1 ,p2);

}
 void osgParticle::QReflect_CenteredPlacer::setCenter(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_CenteredPlacer::setCenter : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCenter(*p0->_model);

}
const  char*  osgParticle::QReflect_CenteredPlacer:: className()const{
//params checking
return _model->className();

}
const  char*  osgParticle::QReflect_CenteredPlacer:: libraryName()const{
//params checking
return _model->libraryName();

}

///DefaultConstructor////////////////
osgParticle::QReflect_CenteredPlacer::QReflect_CenteredPlacer(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::CenteredPlacer*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_CenteredPlacer::~QReflect_CenteredPlacer( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_CenteredPlacer::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_CenteredPlacer::createInstance( ){
std::cerr<<"osgParticle::CenteredPlacer is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_CenteredPlacer::MetaQReflect_CenteredPlacer():MetaQQuickClass( "osgParticle::CenteredPlacer"){
_typeid=&typeid(osgParticle::CenteredPlacer );
           qRegisterMetaType<osgParticle::QMLCenteredPlacer>();
           qRegisterMetaType<osgParticle::QMLCenteredPlacer*>("pmoc.osgParticle.QMLCenteredPlacer");
qmlRegisterType<osgParticle::QReflect_CenteredPlacer>("pmoc.osgParticle",1,0,"QReflect_CenteredPlacer");
           qmlRegisterType<osgParticle::QMLCenteredPlacer>("pmoc.osgParticle",1,0,"QMLCenteredPlacer");
};
const std::string osgParticle::MetaQReflect_CenteredPlacer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_CenteredPlacer::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_CenteredPlacer::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_CenteredPlacer::createQQModel(const Instance*i){ //return new MetaQReflect_CenteredPlacer_QModel(i);}
QMLCenteredPlacer *ret =new QMLCenteredPlacer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Placer *mother =dynamic_cast<osgParticle::Placer*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Placer");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Placer model for osgParticle::CenteredPlaceris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Placer");
if(!cl){std::cerr<<"osgParticle::Placer QQModel for osgParticle::CenteredPlaceris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CenteredPlacer_pmoc.cpp"
#endif




