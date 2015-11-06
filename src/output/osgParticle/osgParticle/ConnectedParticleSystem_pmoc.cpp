#include <osgParticle/ConnectedParticleSystem>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/ConnectedParticleSystem_pmoc.hpp>
#include <customCode/osgParticle/ConnectedParticleSystem_pmoc.hpp>
#include <customCode/osgParticle/ParticleSystem_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_ConnectedParticleSystem::drawImplementation(osg::QReflect_RenderInfo *p0)const{
 _model->drawImplementation(*p0->_model);

}
 void osgParticle::QReflect_ConnectedParticleSystem::reuseParticle( int p0){
 _model->reuseParticle(p0);

}
const unsigned int osgParticle::QReflect_ConnectedParticleSystem::getMaxNumberOfParticlesToSkip()const{return _model->getMaxNumberOfParticlesToSkip();}
osgParticle::QReflect_Particle*osgParticle::QReflect_ConnectedParticleSystem::createParticle(osgParticle::QReflect_Particle *p0){
PMOCSAFEADDOBJECT(*_model->createParticle(p0->_model),inst);
return inst.isValid()?((osgParticle::QReflect_Particle * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Particle*osgParticle::QReflect_ConnectedParticleSystem::getStartParticle()const{
PMOCSAFEADDOBJECT(*_model->getStartParticle(),inst);
return inst.isValid()?((osgParticle::QReflect_Particle * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Particle*osgParticle::QReflect_ConnectedParticleSystem::getStartParticle(){
PMOCSAFEADDOBJECT(*_model->getStartParticle(),inst);
return inst.isValid()?((osgParticle::QReflect_Particle * )inst.model->createQQModel(&inst)):NULL;
}
void  osgParticle::QReflect_ConnectedParticleSystem::setMaxNumberOfParticlesToSkip(const unsigned int &par){_model->setMaxNumberOfParticlesToSkip(par);emit MaxNumberOfParticlesToSkipChanged(par);}

///DefaultConstructor////////////////
osgParticle::QReflect_ConnectedParticleSystem::QReflect_ConnectedParticleSystem(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::ConnectedParticleSystem*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_ConnectedParticleSystem::~QReflect_ConnectedParticleSystem( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_ConnectedParticleSystem::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_ConnectedParticleSystem::createInstance( ){
osg::ref_ptr<osgParticle::ConnectedParticleSystem> osgParticle_ConnectedParticleSystem_ptr	;
osgParticle_ConnectedParticleSystem_ptr = new osgParticle::ConnectedParticleSystem ()	;
Instance o(PMOCGETMETACLASS("osgParticle::ConnectedParticleSystem"),(void*)osgParticle_ConnectedParticleSystem_ptr.get()		,true);
_managedinstances.insert(osgParticle_ConnectedParticleSystem_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_ConnectedParticleSystem::MetaQReflect_ConnectedParticleSystem():MetaQQuickClass( "osgParticle::ConnectedParticleSystem"){
_typeid=&typeid(osgParticle::ConnectedParticleSystem );           qRegisterMetaType<QMLConnectedParticleSystem>();
qmlRegisterType<QReflect_ConnectedParticleSystem>("pmoc.osgParticle",1,0,"QReflect_ConnectedParticleSystem");
           qmlRegisterType<QMLConnectedParticleSystem>("pmoc.osgParticle",1,0,"QMLConnectedParticleSystem");
};
const std::string osgParticle::MetaQReflect_ConnectedParticleSystem::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ConnectedParticleSystem::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ConnectedParticleSystem::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ConnectedParticleSystem::createQQModel(Instance*i){ //return new MetaQReflect_ConnectedParticleSystem_QModel(i);}
QMLConnectedParticleSystem *ret =new QMLConnectedParticleSystem(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::ParticleSystem *mother =dynamic_cast<osgParticle::ParticleSystem*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::ParticleSystem");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::ParticleSystem model for osgParticle::ConnectedParticleSystemis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::ParticleSystem");
if(!cl){std::cerr<<"osgParticle::ParticleSystem QQModel for osgParticle::ConnectedParticleSystemis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ConnectedParticleSystem_pmoc.cpp"
#endif




