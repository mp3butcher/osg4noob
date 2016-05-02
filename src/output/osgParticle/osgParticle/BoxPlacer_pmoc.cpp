#include <osgParticle/BoxPlacer>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/BoxPlacer_pmoc.hpp>
#include <customCode/osgParticle/BoxPlacer_pmoc.hpp>
#include <customCode/osgParticle/CenteredPlacer_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
 float  osgParticle::QReflect_BoxPlacer:: volume()const{
//params checking
return _model->volume();

}
 void osgParticle::QReflect_BoxPlacer::place(osgParticle::QReflect_Particle  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_BoxPlacer::place : parameter n.0 is NULL\n"<<endl;return;}
 _model->place(p0->_model);

}
 void osgParticle::QReflect_BoxPlacer::setXRange( float  p0 , float  p1){
//params checking
 _model->setXRange(p0 ,p1);

}
 void osgParticle::QReflect_BoxPlacer::setYRange( float  p0 , float  p1){
//params checking
 _model->setYRange(p0 ,p1);

}
 void osgParticle::QReflect_BoxPlacer::setZRange( float  p0 , float  p1){
//params checking
 _model->setZRange(p0 ,p1);

}

///DefaultConstructor////////////////
osgParticle::QReflect_BoxPlacer::QReflect_BoxPlacer(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::BoxPlacer*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_BoxPlacer::~QReflect_BoxPlacer( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_BoxPlacer::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_BoxPlacer::createInstance( ){
osg::ref_ptr<osgParticle::BoxPlacer> osgParticle_BoxPlacer_ptr	;
osgParticle_BoxPlacer_ptr = new osgParticle::BoxPlacer ()	;
Instance o(PMOCGETMETACLASS("osgParticle::BoxPlacer"),(void*)osgParticle_BoxPlacer_ptr.get()		,true);
_managedinstances.insert(osgParticle_BoxPlacer_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_BoxPlacer::MetaQReflect_BoxPlacer():MetaQQuickClass( "osgParticle::BoxPlacer"){
_typeid=&typeid(osgParticle::BoxPlacer );
           qRegisterMetaType<osgParticle::QMLBoxPlacer>();
           qRegisterMetaType<osgParticle::QMLBoxPlacer*>("pmoc.osgParticle.QMLBoxPlacer");
qmlRegisterType<osgParticle::QReflect_BoxPlacer>("pmoc.osgParticle",1,0,"QReflect_BoxPlacer");
           qmlRegisterType<osgParticle::QMLBoxPlacer>("pmoc.osgParticle",1,0,"QMLBoxPlacer");
};
const std::string osgParticle::MetaQReflect_BoxPlacer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_BoxPlacer::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_BoxPlacer::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_BoxPlacer::createQQModel(const Instance*i){ //return new MetaQReflect_BoxPlacer_QModel(i);}
QMLBoxPlacer *ret =new QMLBoxPlacer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::CenteredPlacer *mother =dynamic_cast<osgParticle::CenteredPlacer*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::CenteredPlacer");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::CenteredPlacer model for osgParticle::BoxPlaceris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::CenteredPlacer");
if(!cl){std::cerr<<"osgParticle::CenteredPlacer QQModel for osgParticle::BoxPlaceris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BoxPlacer_pmoc.cpp"
#endif




