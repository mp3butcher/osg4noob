#include <osgParticle/ParticleEffect>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/ParticleEffect_pmoc.hpp>
#include <customCode/osgParticle/ParticleEffect_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/ParticleSystem_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_ParticleEffect:: areAllParticlesDead()const{
//params checking
return _model->areAllParticlesDead();

}
 bool  osgParticle::QReflect_ParticleEffect:: getAutomaticSetup()const{
//params checking
return _model->getAutomaticSetup();

}
 bool  osgParticle::QReflect_ParticleEffect:: getUseLocalParticleSystem()const{
//params checking
return _model->getUseLocalParticleSystem();

}
 bool  osgParticle::QReflect_ParticleEffect:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleEffect::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 double  osgParticle::QReflect_ParticleEffect:: getEmitterDuration()const{
//params checking
return _model->getEmitterDuration();

}
 double  osgParticle::QReflect_ParticleEffect:: getParticleDuration()const{
//params checking
return _model->getParticleDuration();

}
 double  osgParticle::QReflect_ParticleEffect:: getStartTime()const{
//params checking
return _model->getStartTime();

}
 float  osgParticle::QReflect_ParticleEffect:: getIntensity()const{
//params checking
return _model->getIntensity();

}
 float  osgParticle::QReflect_ParticleEffect:: getScale()const{
//params checking
return _model->getScale();

}
 void osgParticle::QReflect_ParticleEffect::accept(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleEffect::accept : parameter n.0 is NULL\n"<<endl;return;}
 _model->accept(*p0->_model);

}
 void osgParticle::QReflect_ParticleEffect::buildEffect(){
//params checking
 _model->buildEffect();

}
 void osgParticle::QReflect_ParticleEffect::setAutomaticSetup( bool  p0){
//params checking
 _model->setAutomaticSetup(p0);
emit AutomaticSetupChanged();

}
 void osgParticle::QReflect_ParticleEffect::setDefaultParticleTemplate(osgParticle::QReflect_Particle  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleEffect::setDefaultParticleTemplate : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDefaultParticleTemplate(*p0->_model);

}
 void osgParticle::QReflect_ParticleEffect::setDefaults(){
//params checking
 _model->setDefaults();

}
 void osgParticle::QReflect_ParticleEffect::setEmitterDuration( double  p0){
//params checking
 _model->setEmitterDuration(p0);
emit EmitterDurationChanged();

}
 void osgParticle::QReflect_ParticleEffect::setIntensity( float  p0){
//params checking
 _model->setIntensity(p0);
emit IntensityChanged();

}
 void osgParticle::QReflect_ParticleEffect::setParticleDuration( double  p0){
//params checking
 _model->setParticleDuration(p0);
emit ParticleDurationChanged();

}
 void osgParticle::QReflect_ParticleEffect::setParticleSystem(osgParticle::QReflect_ParticleSystem  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleEffect::setParticleSystem : parameter n.0 is NULL\n"<<endl;return;}
 _model->setParticleSystem(p0->_model);
emit ParticleSystemChanged();

}
 void osgParticle::QReflect_ParticleEffect::setPosition(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleEffect::setPosition : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPosition(*p0->_model);

}
 void osgParticle::QReflect_ParticleEffect::setScale( float  p0){
//params checking
 _model->setScale(p0);
emit ScaleChanged();

}
 void osgParticle::QReflect_ParticleEffect::setStartTime( double  p0){
//params checking
 _model->setStartTime(p0);
emit StartTimeChanged();

}
 void osgParticle::QReflect_ParticleEffect::setTextureFileName(const  QString  &p0){
//params checking
 _model->setTextureFileName(std::string(p0.toStdString()));
emit TextureFileNameChanged();

}
 void osgParticle::QReflect_ParticleEffect::setUseLocalParticleSystem( bool  p0){
//params checking
 _model->setUseLocalParticleSystem(p0);
emit UseLocalParticleSystemChanged();

}
 void osgParticle::QReflect_ParticleEffect::setWind(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleEffect::setWind : parameter n.0 is NULL\n"<<endl;return;}
 _model->setWind(*p0->_model);

}
QString  osgParticle::QReflect_ParticleEffect::getTextureFileName()const{
//params checking
QString ret(_model->getTextureFileName().c_str());return ret;

}
const  char*  osgParticle::QReflect_ParticleEffect:: className()const{
//params checking
return _model->className();

}
const  char*  osgParticle::QReflect_ParticleEffect:: libraryName()const{
//params checking
return _model->libraryName();

}
osgParticle::QReflect_ParticleSystem*osgParticle::QReflect_ParticleEffect::getParticleSystem()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getParticleSystem(),inst);
return inst.isValid()?((osgParticle::QReflect_ParticleSystem * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_ParticleSystem*osgParticle::QReflect_ParticleEffect::getParticleSystem(){
//params checking
PMOCSAFEADDOBJECT(*_model->getParticleSystem(),inst);
return inst.isValid()?((osgParticle::QReflect_ParticleSystem * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osgParticle::QReflect_ParticleEffect::QReflect_ParticleEffect(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::ParticleEffect*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_ParticleEffect::~QReflect_ParticleEffect( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_ParticleEffect::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_ParticleEffect::createInstance( ){
std::cerr<<"osgParticle::ParticleEffect is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_ParticleEffect::MetaQReflect_ParticleEffect():MetaQQuickClass( "osgParticle::ParticleEffect"){
_typeid=&typeid(osgParticle::ParticleEffect );
           qRegisterMetaType<osgParticle::QMLParticleEffect>();
           qRegisterMetaType<osgParticle::QMLParticleEffect*>("pmoc.osgParticle.QMLParticleEffect");
qmlRegisterType<osgParticle::QReflect_ParticleEffect>("pmoc.osgParticle",1,0,"QReflect_ParticleEffect");
           qmlRegisterType<osgParticle::QMLParticleEffect>("pmoc.osgParticle",1,0,"QMLParticleEffect");
};
const std::string osgParticle::MetaQReflect_ParticleEffect::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ParticleEffect::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ParticleEffect::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ParticleEffect::createQQModel(const Instance*i){ //return new MetaQReflect_ParticleEffect_QModel(i);}
QMLParticleEffect *ret =new QMLParticleEffect(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osgParticle::ParticleEffectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osgParticle::ParticleEffectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ParticleEffect_pmoc.cpp"
#endif




