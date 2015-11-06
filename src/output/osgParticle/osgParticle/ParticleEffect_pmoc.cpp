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
#include <osgParticle/ParticleSystem>
#include <osgParticle/ParticleSystem_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_ParticleEffect::areAllParticlesDead()const{
return _model->areAllParticlesDead();

}
 bool  osgParticle::QReflect_ParticleEffect::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 void osgParticle::QReflect_ParticleEffect::accept(osg::QReflect_NodeVisitor *p0){
 _model->accept(*p0->_model);

}
 void osgParticle::QReflect_ParticleEffect::buildEffect(){
 _model->buildEffect();

}
 void osgParticle::QReflect_ParticleEffect::setDefaultParticleTemplate(osgParticle::QReflect_Particle *p0){
 _model->setDefaultParticleTemplate(*p0->_model);

}
 void osgParticle::QReflect_ParticleEffect::setDefaults(){
 _model->setDefaults();

}
 void osgParticle::QReflect_ParticleEffect::setPosition(osg::QReflect_Vec3f *p0){
 _model->setPosition(*p0->_model);

}
 void osgParticle::QReflect_ParticleEffect::setWind(osg::QReflect_Vec3f *p0){
 _model->setWind(*p0->_model);

}
const  char*  osgParticle::QReflect_ParticleEffect::className()const{
return _model->className();

}
const  char*  osgParticle::QReflect_ParticleEffect::libraryName()const{
return _model->libraryName();

}
const QString osgParticle::QReflect_ParticleEffect::getTextureFileName()const{return QString(_model->getTextureFileName().c_str());}
const bool osgParticle::QReflect_ParticleEffect::getAutomaticSetup()const{return _model->getAutomaticSetup();}
const bool osgParticle::QReflect_ParticleEffect::getUseLocalParticleSystem()const{return _model->getUseLocalParticleSystem();}
const double osgParticle::QReflect_ParticleEffect::getEmitterDuration()const{return _model->getEmitterDuration();}
const double osgParticle::QReflect_ParticleEffect::getParticleDuration()const{return _model->getParticleDuration();}
const double osgParticle::QReflect_ParticleEffect::getStartTime()const{return _model->getStartTime();}
const float osgParticle::QReflect_ParticleEffect::getIntensity()const{return _model->getIntensity();}
const float osgParticle::QReflect_ParticleEffect::getScale()const{return _model->getScale();}
osgParticle::QReflect_ParticleSystem * osgParticle::QReflect_ParticleEffect::getParticleSystem()const{
PMOCSAFEADDOBJECT(*_model->getParticleSystem(),inst);
return inst.isValid()?((osgParticle::QReflect_ParticleSystem * )inst.model->createQQModel(&inst)):NULL;
}
void  osgParticle::QReflect_ParticleEffect::setAutomaticSetup(const bool &par){_model->setAutomaticSetup(par);emit AutomaticSetupChanged(par);}
void  osgParticle::QReflect_ParticleEffect::setEmitterDuration(const double &par){_model->setEmitterDuration(par);emit EmitterDurationChanged(par);}
void  osgParticle::QReflect_ParticleEffect::setIntensity(const float &par){_model->setIntensity(par);emit IntensityChanged(par);}
void  osgParticle::QReflect_ParticleEffect::setParticleDuration(const double &par){_model->setParticleDuration(par);emit ParticleDurationChanged(par);}
void  osgParticle::QReflect_ParticleEffect::setScale(const float &par){_model->setScale(par);emit ScaleChanged(par);}
void  osgParticle::QReflect_ParticleEffect::setStartTime(const double &par){_model->setStartTime(par);emit StartTimeChanged(par);}
void  osgParticle::QReflect_ParticleEffect::setUseLocalParticleSystem(const bool &par){_model->setUseLocalParticleSystem(par);emit UseLocalParticleSystemChanged(par);}
void osgParticle::QReflect_ParticleEffect::pmoc_reverse_setParticleSystem( osgParticle::QReflect_ParticleSystem *par){_model->setParticleSystem(NULL);
emit ParticleSystemChanged(NULL);
}
void osgParticle::QReflect_ParticleEffect::setParticleSystem( osgParticle::QReflect_ParticleSystem *par){_model->setParticleSystem(par->_model);
emit ParticleSystemChanged(par);
}
void osgParticle::QReflect_ParticleEffect::setTextureFileName(const QString &par){_model->setTextureFileName(par.toStdString());emit TextureFileNameChanged(par);}

///DefaultConstructor////////////////
osgParticle::QReflect_ParticleEffect::QReflect_ParticleEffect(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osgParticle::ParticleEffect );           qRegisterMetaType<QMLParticleEffect>();
qmlRegisterType<QReflect_ParticleEffect>("pmoc.osgParticle",1,0,"QReflect_ParticleEffect");
           qmlRegisterType<QMLParticleEffect>("pmoc.osgParticle",1,0,"QMLParticleEffect");
       PMOCACTION("getParticleSystem","setParticleSystem","unsetParticleSystem");
};
const std::string osgParticle::MetaQReflect_ParticleEffect::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ParticleEffect::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ParticleEffect::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ParticleEffect::createQQModel(Instance*i){ //return new MetaQReflect_ParticleEffect_QModel(i);}
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




