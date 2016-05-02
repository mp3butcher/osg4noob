#include <osgParticle/ParticleProcessor>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/ParticleProcessor_pmoc.hpp>
#include <customCode/osgParticle/ParticleProcessor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osgParticle/ParticleSystem_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_ParticleProcessor:: getEnabled()const{
//params checking
return _model->getEnabled();

}
 bool  osgParticle::QReflect_ParticleProcessor:: getEndless()const{
//params checking
return _model->getEndless();

}
 bool  osgParticle::QReflect_ParticleProcessor:: isAlive()const{
//params checking
return _model->isAlive();

}
 bool  osgParticle::QReflect_ParticleProcessor:: isEnabled()const{
//params checking
return _model->isEnabled();

}
 bool  osgParticle::QReflect_ParticleProcessor:: isEndless()const{
//params checking
return _model->isEndless();

}
 bool  osgParticle::QReflect_ParticleProcessor:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleProcessor::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 double  osgParticle::QReflect_ParticleProcessor:: getCurrentTime()const{
//params checking
return _model->getCurrentTime();

}
 double  osgParticle::QReflect_ParticleProcessor:: getLifeTime()const{
//params checking
return _model->getLifeTime();

}
 double  osgParticle::QReflect_ParticleProcessor:: getResetTime()const{
//params checking
return _model->getResetTime();

}
 double  osgParticle::QReflect_ParticleProcessor:: getStartTime()const{
//params checking
return _model->getStartTime();

}
 void osgParticle::QReflect_ParticleProcessor::accept(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleProcessor::accept : parameter n.0 is NULL\n"<<endl;return;}
 _model->accept(*p0->_model);

}
 void osgParticle::QReflect_ParticleProcessor::setCurrentTime( double  p0){
//params checking
 _model->setCurrentTime(p0);
emit CurrentTimeChanged();

}
 void osgParticle::QReflect_ParticleProcessor::setEnabled( bool  p0){
//params checking
 _model->setEnabled(p0);
emit EnabledChanged();

}
 void osgParticle::QReflect_ParticleProcessor::setEndless( bool  p0){
//params checking
 _model->setEndless(p0);
emit EndlessChanged();

}
 void osgParticle::QReflect_ParticleProcessor::setLifeTime( double  p0){
//params checking
 _model->setLifeTime(p0);
emit LifeTimeChanged();

}
 void osgParticle::QReflect_ParticleProcessor::setParticleSystem(osgParticle::QReflect_ParticleSystem  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleProcessor::setParticleSystem : parameter n.0 is NULL\n"<<endl;return;}
 _model->setParticleSystem(p0->_model);
emit ParticleSystemChanged();

}
 void osgParticle::QReflect_ParticleProcessor::setReferenceFrame(osgParticle::QReflect_ParticleProcessor::ReferenceFrame  p0){
//params checking
 _model->setReferenceFrame(static_cast<osgParticle::ParticleProcessor::ReferenceFrame>(p0));
emit ReferenceFrameChanged();

}
 void osgParticle::QReflect_ParticleProcessor::setResetTime( double  p0){
//params checking
 _model->setResetTime(p0);
emit ResetTimeChanged();

}
 void osgParticle::QReflect_ParticleProcessor::setStartTime( double  p0){
//params checking
 _model->setStartTime(p0);
emit StartTimeChanged();

}
 void osgParticle::QReflect_ParticleProcessor::traverse(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleProcessor::traverse : parameter n.0 is NULL\n"<<endl;return;}
 _model->traverse(*p0->_model);

}
const  char*  osgParticle::QReflect_ParticleProcessor:: className()const{
//params checking
return _model->className();

}
const  char*  osgParticle::QReflect_ParticleProcessor:: libraryName()const{
//params checking
return _model->libraryName();

}
osgParticle::QReflect_ParticleProcessor::ReferenceFrame  osgParticle::QReflect_ParticleProcessor::getReferenceFrame()const{
//params checking
osgParticle::QReflect_ParticleProcessor::ReferenceFrame ret=static_cast<osgParticle::QReflect_ParticleProcessor::ReferenceFrame>( _model->getReferenceFrame());return  ret;

}
osgParticle::QReflect_ParticleSystem*osgParticle::QReflect_ParticleProcessor::getParticleSystem()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getParticleSystem(),inst);
return inst.isValid()?((osgParticle::QReflect_ParticleSystem * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_ParticleSystem*osgParticle::QReflect_ParticleProcessor::getParticleSystem(){
//params checking
PMOCSAFEADDOBJECT(*_model->getParticleSystem(),inst);
return inst.isValid()?((osgParticle::QReflect_ParticleSystem * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osgParticle::QReflect_ParticleProcessor::QReflect_ParticleProcessor(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::ParticleProcessor*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_ParticleProcessor::~QReflect_ParticleProcessor( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_ParticleProcessor::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_ParticleProcessor::createInstance( ){
std::cerr<<"osgParticle::ParticleProcessor is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_ParticleProcessor::MetaQReflect_ParticleProcessor():MetaQQuickClass( "osgParticle::ParticleProcessor"){
_typeid=&typeid(osgParticle::ParticleProcessor );
           qRegisterMetaType<osgParticle::QMLParticleProcessor>();
           qRegisterMetaType<osgParticle::QMLParticleProcessor*>("pmoc.osgParticle.QMLParticleProcessor");
qmlRegisterType<osgParticle::QReflect_ParticleProcessor>("pmoc.osgParticle",1,0,"QReflect_ParticleProcessor");
           qmlRegisterType<osgParticle::QMLParticleProcessor>("pmoc.osgParticle",1,0,"QMLParticleProcessor");
};
const std::string osgParticle::MetaQReflect_ParticleProcessor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ParticleProcessor::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ParticleProcessor::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ParticleProcessor::createQQModel(const Instance*i){ //return new MetaQReflect_ParticleProcessor_QModel(i);}
QMLParticleProcessor *ret =new QMLParticleProcessor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Node *mother =dynamic_cast<osg::Node*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Node");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Node model for osgParticle::ParticleProcessoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Node");
if(!cl){std::cerr<<"osg::Node QQModel for osgParticle::ParticleProcessoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ParticleProcessor_pmoc.cpp"
#endif




