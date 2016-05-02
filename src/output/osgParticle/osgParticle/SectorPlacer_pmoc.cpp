#include <osgParticle/SectorPlacer>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/SectorPlacer_pmoc.hpp>
#include <customCode/osgParticle/SectorPlacer_pmoc.hpp>
#include <customCode/osgParticle/CenteredPlacer_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
 float  osgParticle::QReflect_SectorPlacer:: volume()const{
//params checking
return _model->volume();

}
 void osgParticle::QReflect_SectorPlacer::place(osgParticle::QReflect_Particle  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_SectorPlacer::place : parameter n.0 is NULL\n"<<endl;return;}
 _model->place(p0->_model);

}
 void osgParticle::QReflect_SectorPlacer::setPhiRange( float  p0 , float  p1){
//params checking
 _model->setPhiRange(p0 ,p1);

}
 void osgParticle::QReflect_SectorPlacer::setRadiusRange( float  p0 , float  p1){
//params checking
 _model->setRadiusRange(p0 ,p1);

}

///DefaultConstructor////////////////
osgParticle::QReflect_SectorPlacer::QReflect_SectorPlacer(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::SectorPlacer*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_SectorPlacer::~QReflect_SectorPlacer( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_SectorPlacer::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_SectorPlacer::createInstance( ){
osg::ref_ptr<osgParticle::SectorPlacer> osgParticle_SectorPlacer_ptr	;
osgParticle_SectorPlacer_ptr = new osgParticle::SectorPlacer ()	;
Instance o(PMOCGETMETACLASS("osgParticle::SectorPlacer"),(void*)osgParticle_SectorPlacer_ptr.get()		,true);
_managedinstances.insert(osgParticle_SectorPlacer_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_SectorPlacer::MetaQReflect_SectorPlacer():MetaQQuickClass( "osgParticle::SectorPlacer"){
_typeid=&typeid(osgParticle::SectorPlacer );
           qRegisterMetaType<osgParticle::QMLSectorPlacer>();
           qRegisterMetaType<osgParticle::QMLSectorPlacer*>("pmoc.osgParticle.QMLSectorPlacer");
qmlRegisterType<osgParticle::QReflect_SectorPlacer>("pmoc.osgParticle",1,0,"QReflect_SectorPlacer");
           qmlRegisterType<osgParticle::QMLSectorPlacer>("pmoc.osgParticle",1,0,"QMLSectorPlacer");
};
const std::string osgParticle::MetaQReflect_SectorPlacer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_SectorPlacer::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_SectorPlacer::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_SectorPlacer::createQQModel(const Instance*i){ //return new MetaQReflect_SectorPlacer_QModel(i);}
QMLSectorPlacer *ret =new QMLSectorPlacer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::CenteredPlacer *mother =dynamic_cast<osgParticle::CenteredPlacer*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::CenteredPlacer");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::CenteredPlacer model for osgParticle::SectorPlaceris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::CenteredPlacer");
if(!cl){std::cerr<<"osgParticle::CenteredPlacer QQModel for osgParticle::SectorPlaceris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_SectorPlacer_pmoc.cpp"
#endif




