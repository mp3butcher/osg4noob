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
 unsigned int  osgParticle::QReflect_ConnectedParticleSystem:: getMaxNumberOfParticlesToSkip(){
//params checking
return _model->getMaxNumberOfParticlesToSkip();

}
 void osgParticle::QReflect_ConnectedParticleSystem::drawImplementation(osg::QReflect_RenderInfo  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ConnectedParticleSystem::drawImplementation : parameter n.0 is NULL\n"<<endl;return;}
 _model->drawImplementation(*p0->_model);

}
 void osgParticle::QReflect_ConnectedParticleSystem::reuseParticle( int  p0){
//params checking
 _model->reuseParticle(p0);

}
 void osgParticle::QReflect_ConnectedParticleSystem::setMaxNumberOfParticlesToSkip( unsigned int  p0){
//params checking
 _model->setMaxNumberOfParticlesToSkip(p0);
emit MaxNumberOfParticlesToSkipChanged();

}
osgParticle::QReflect_Particle*osgParticle::QReflect_ConnectedParticleSystem::createParticle(osgParticle::QReflect_Particle  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ConnectedParticleSystem::createParticle : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->createParticle(p0->_model),inst);
return inst.isValid()?((osgParticle::QReflect_Particle * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Particle*osgParticle::QReflect_ConnectedParticleSystem::getStartParticle()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getStartParticle(),inst);
return inst.isValid()?((osgParticle::QReflect_Particle * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Particle*osgParticle::QReflect_ConnectedParticleSystem::getStartParticle(){
//params checking
PMOCSAFEADDOBJECT(*_model->getStartParticle(),inst);
return inst.isValid()?((osgParticle::QReflect_Particle * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osgParticle::QReflect_ConnectedParticleSystem::QReflect_ConnectedParticleSystem(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osgParticle::ConnectedParticleSystem );
           qRegisterMetaType<osgParticle::QMLConnectedParticleSystem>();
           qRegisterMetaType<osgParticle::QMLConnectedParticleSystem*>("pmoc.osgParticle.QMLConnectedParticleSystem");
qmlRegisterType<osgParticle::QReflect_ConnectedParticleSystem>("pmoc.osgParticle",1,0,"QReflect_ConnectedParticleSystem");
           qmlRegisterType<osgParticle::QMLConnectedParticleSystem>("pmoc.osgParticle",1,0,"QMLConnectedParticleSystem");
};
const std::string osgParticle::MetaQReflect_ConnectedParticleSystem::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ConnectedParticleSystem::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ConnectedParticleSystem::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ConnectedParticleSystem::createQQModel(const Instance*i){ //return new MetaQReflect_ConnectedParticleSystem_QModel(i);}
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




