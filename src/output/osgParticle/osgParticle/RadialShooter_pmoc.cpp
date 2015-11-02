#include <osgParticle/RadialShooter>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/RadialShooter_pmoc.hpp>
#include <customCode/osgParticle/RadialShooter_pmoc.hpp>
#include <customCode/osgParticle/Shooter_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_RadialShooter::setInitialRotationalSpeedRange(osg::QReflect_Vec3f *p0 ,osg::QReflect_Vec3f *p1){
 _model->setInitialRotationalSpeedRange(*p0->_model ,*p1->_model);

}
 void osgParticle::QReflect_RadialShooter::setInitialSpeedRange( float p0 , float p1){
 _model->setInitialSpeedRange(p0 ,p1);

}
 void osgParticle::QReflect_RadialShooter::setPhiRange( float p0 , float p1){
 _model->setPhiRange(p0 ,p1);

}
 void osgParticle::QReflect_RadialShooter::setThetaRange( float p0 , float p1){
 _model->setThetaRange(p0 ,p1);

}
 void osgParticle::QReflect_RadialShooter::shoot(osgParticle::QReflect_Particle *p0)const{
 _model->shoot(p0->_model);

}

///DefaultConstructor////////////////
osgParticle::QReflect_RadialShooter::QReflect_RadialShooter(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::RadialShooter*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_RadialShooter::~QReflect_RadialShooter( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_RadialShooter::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_RadialShooter::createInstance( ){
osg::ref_ptr<osgParticle::RadialShooter> osgParticle_RadialShooter_ptr	;
osgParticle_RadialShooter_ptr = new osgParticle::RadialShooter ()	;
Instance o(PMOCGETMETACLASS("osgParticle::RadialShooter"),(void*)osgParticle_RadialShooter_ptr.get()		,true);
_managedinstances.insert(osgParticle_RadialShooter_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_RadialShooter::MetaQReflect_RadialShooter():MetaQQuickClass( "osgParticle::RadialShooter"){
_typeid=&typeid(osgParticle::RadialShooter );           qRegisterMetaType<QMLRadialShooter>();
qmlRegisterType<QReflect_RadialShooter>("pmoc.osgParticle",1,0,"QReflect_RadialShooter");
           qmlRegisterType<QMLRadialShooter>("pmoc.osgParticle",1,0,"QMLRadialShooter");
};
const std::string osgParticle::MetaQReflect_RadialShooter::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_RadialShooter::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_RadialShooter::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_RadialShooter::createQQModel(Instance*i){ //return new MetaQReflect_RadialShooter_QModel(i);}
QMLRadialShooter *ret =new QMLRadialShooter(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Shooter *mother =dynamic_cast<osgParticle::Shooter*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Shooter");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Shooter model for osgParticle::RadialShooteris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Shooter");
if(!cl){std::cerr<<"osgParticle::Shooter QQModel for osgParticle::RadialShooteris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_RadialShooter_pmoc.cpp"
#endif




