#include <osgParticle/PointPlacer>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/PointPlacer_pmoc.hpp>
#include <customCode/osgParticle/PointPlacer_pmoc.hpp>
#include <customCode/osgParticle/CenteredPlacer_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_PointPlacer::place(osgParticle::QReflect_Particle *p0)const{
 _model->place(p0->_model);

}

///DefaultConstructor////////////////
osgParticle::QReflect_PointPlacer::QReflect_PointPlacer(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::PointPlacer*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_PointPlacer::~QReflect_PointPlacer( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_PointPlacer::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_PointPlacer::createInstance( ){
osg::ref_ptr<osgParticle::PointPlacer> osgParticle_PointPlacer_ptr	;
osgParticle_PointPlacer_ptr = new osgParticle::PointPlacer ()	;
Instance o(PMOCGETMETACLASS("osgParticle::PointPlacer"),(void*)osgParticle_PointPlacer_ptr.get()		,true);
_managedinstances.insert(osgParticle_PointPlacer_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_PointPlacer::MetaQReflect_PointPlacer():MetaQQuickClass( "osgParticle::PointPlacer"){
_typeid=&typeid(osgParticle::PointPlacer );           qRegisterMetaType<QMLPointPlacer>();
qmlRegisterType<QReflect_PointPlacer>("pmoc.osgParticle",1,0,"QReflect_PointPlacer");
           qmlRegisterType<QMLPointPlacer>("pmoc.osgParticle",1,0,"QMLPointPlacer");
};
const std::string osgParticle::MetaQReflect_PointPlacer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_PointPlacer::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_PointPlacer::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_PointPlacer::createQQModel(Instance*i){ //return new MetaQReflect_PointPlacer_QModel(i);}
QMLPointPlacer *ret =new QMLPointPlacer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::CenteredPlacer *mother =dynamic_cast<osgParticle::CenteredPlacer*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::CenteredPlacer");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::CenteredPlacer model for osgParticle::PointPlaceris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::CenteredPlacer");
if(!cl){std::cerr<<"osgParticle::CenteredPlacer QQModel for osgParticle::PointPlaceris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PointPlacer_pmoc.cpp"
#endif




