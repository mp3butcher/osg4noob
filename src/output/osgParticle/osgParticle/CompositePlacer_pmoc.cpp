#include <osgParticle/CompositePlacer>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/CompositePlacer_pmoc.hpp>
#include <customCode/osgParticle/CompositePlacer_pmoc.hpp>
#include <customCode/osgParticle/Placer_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
#include <customCode/osgParticle/Placer_pmoc.hpp>
using namespace pmoc;
 float  osgParticle::QReflect_CompositePlacer:: volume()const{
//params checking
return _model->volume();

}
 unsigned int  osgParticle::QReflect_CompositePlacer:: getNumPlacers()const{
//params checking
return _model->getNumPlacers();

}
 void osgParticle::QReflect_CompositePlacer::addPlacer(osgParticle::QReflect_Placer  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_CompositePlacer::addPlacer : parameter n.0 is NULL\n"<<endl;return;}
 _model->addPlacer(p0->_model);

}
 void osgParticle::QReflect_CompositePlacer::place(osgParticle::QReflect_Particle  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_CompositePlacer::place : parameter n.0 is NULL\n"<<endl;return;}
 _model->place(p0->_model);

}
 void osgParticle::QReflect_CompositePlacer::removePlacer( unsigned int  p0){
//params checking
 _model->removePlacer(p0);

}
 void osgParticle::QReflect_CompositePlacer::setPlacer( unsigned int  p0 ,osgParticle::QReflect_Placer  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osgParticle::QReflect_CompositePlacer::setPlacer : parameter n.1 is NULL\n"<<endl;return;}
 _model->setPlacer(p0 ,p1->_model);

}
osgParticle::QReflect_Placer*osgParticle::QReflect_CompositePlacer::getPlacer( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getPlacer(p0),inst);
return inst.isValid()?((osgParticle::QReflect_Placer * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Placer*osgParticle::QReflect_CompositePlacer::getPlacer( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getPlacer(p0),inst);
return inst.isValid()?((osgParticle::QReflect_Placer * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osgParticle::QReflect_CompositePlacer::QReflect_CompositePlacer(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::CompositePlacer*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_CompositePlacer::~QReflect_CompositePlacer( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_CompositePlacer::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_CompositePlacer::createInstance( ){
osg::ref_ptr<osgParticle::CompositePlacer> osgParticle_CompositePlacer_ptr	;
osgParticle_CompositePlacer_ptr = new osgParticle::CompositePlacer ()	;
Instance o(PMOCGETMETACLASS("osgParticle::CompositePlacer"),(void*)osgParticle_CompositePlacer_ptr.get()		,true);
_managedinstances.insert(osgParticle_CompositePlacer_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_CompositePlacer::MetaQReflect_CompositePlacer():MetaQQuickClass( "osgParticle::CompositePlacer"){
_typeid=&typeid(osgParticle::CompositePlacer );
           qRegisterMetaType<osgParticle::QMLCompositePlacer>();
           qRegisterMetaType<osgParticle::QMLCompositePlacer*>("pmoc.osgParticle.QMLCompositePlacer");
qmlRegisterType<osgParticle::QReflect_CompositePlacer>("pmoc.osgParticle",1,0,"QReflect_CompositePlacer");
           qmlRegisterType<osgParticle::QMLCompositePlacer>("pmoc.osgParticle",1,0,"QMLCompositePlacer");
};
const std::string osgParticle::MetaQReflect_CompositePlacer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_CompositePlacer::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_CompositePlacer::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_CompositePlacer::createQQModel(const Instance*i){ //return new MetaQReflect_CompositePlacer_QModel(i);}
QMLCompositePlacer *ret =new QMLCompositePlacer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Placer *mother =dynamic_cast<osgParticle::Placer*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Placer");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Placer model for osgParticle::CompositePlaceris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Placer");
if(!cl){std::cerr<<"osgParticle::Placer QQModel for osgParticle::CompositePlaceris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CompositePlacer_pmoc.cpp"
#endif




