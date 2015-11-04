#include <osgParticle/ParticleProcessor>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/ParticleProcessor_pmoc.hpp>
#include <customCode/osgParticle/ParticleProcessor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osgParticle/ParticleSystem_pmoc.hpp>
#include <osgParticle/ParticleSystem>
#include <osgParticle/ParticleSystem_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_ParticleProcessor::isAlive()const{
return _model->isAlive();

}
 bool  osgParticle::QReflect_ParticleProcessor::isEnabled()const{
return _model->isEnabled();

}
 bool  osgParticle::QReflect_ParticleProcessor::isEndless()const{
return _model->isEndless();

}
 bool  osgParticle::QReflect_ParticleProcessor::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 void osgParticle::QReflect_ParticleProcessor::setReferenceFrame(osgParticle::QReflect_ParticleProcessor::ReferenceFrame p0){
 _model->setReferenceFrame(static_cast<osgParticle::ParticleProcessor::ReferenceFrame>(p0));

}
const  char*  osgParticle::QReflect_ParticleProcessor::className()const{
return _model->className();

}
const  char*  osgParticle::QReflect_ParticleProcessor::libraryName()const{
return _model->libraryName();

}
const bool osgParticle::QReflect_ParticleProcessor::getEnabled()const{return _model->getEnabled();}
const bool osgParticle::QReflect_ParticleProcessor::getEndless()const{return _model->getEndless();}
const double osgParticle::QReflect_ParticleProcessor::getCurrentTime()const{return _model->getCurrentTime();}
const double osgParticle::QReflect_ParticleProcessor::getLifeTime()const{return _model->getLifeTime();}
const double osgParticle::QReflect_ParticleProcessor::getResetTime()const{return _model->getResetTime();}
const double osgParticle::QReflect_ParticleProcessor::getStartTime()const{return _model->getStartTime();}
osgParticle::QReflect_ParticleProcessor::ReferenceFrame  osgParticle::QReflect_ParticleProcessor::getReferenceFrame()const{
osgParticle::QReflect_ParticleProcessor::ReferenceFrame ret=static_cast<osgParticle::QReflect_ParticleProcessor::ReferenceFrame>( _model->getReferenceFrame());return  ret;

}
osgParticle::QReflect_ParticleSystem * osgParticle::QReflect_ParticleProcessor::getParticleSystem()const{
PMOCSAFEADDOBJECT(*_model->getParticleSystem(),inst);
return inst.isValid()?((osgParticle::QReflect_ParticleSystem * )inst.model->createQQModel(&inst)):NULL;
}
void  osgParticle::QReflect_ParticleProcessor::setCurrentTime(const double &par){_model->setCurrentTime(par);emit CurrentTimeChanged(par);}
void  osgParticle::QReflect_ParticleProcessor::setEnabled(const bool &par){_model->setEnabled(par);emit EnabledChanged(par);}
void  osgParticle::QReflect_ParticleProcessor::setEndless(const bool &par){_model->setEndless(par);emit EndlessChanged(par);}
void  osgParticle::QReflect_ParticleProcessor::setLifeTime(const double &par){_model->setLifeTime(par);emit LifeTimeChanged(par);}
void  osgParticle::QReflect_ParticleProcessor::setResetTime(const double &par){_model->setResetTime(par);emit ResetTimeChanged(par);}
void  osgParticle::QReflect_ParticleProcessor::setStartTime(const double &par){_model->setStartTime(par);emit StartTimeChanged(par);}
void osgParticle::QReflect_ParticleProcessor::pmoc_reverse_setParticleSystem( osgParticle::QReflect_ParticleSystem *par){_model->setParticleSystem(NULL);
emit ParticleSystemChanged(NULL);
}
void osgParticle::QReflect_ParticleProcessor::setParticleSystem( osgParticle::QReflect_ParticleSystem *par){_model->setParticleSystem(par->_model);
emit ParticleSystemChanged(par);
}

///DefaultConstructor////////////////
osgParticle::QReflect_ParticleProcessor::QReflect_ParticleProcessor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osgParticle::ParticleProcessor );           qRegisterMetaType<QMLParticleProcessor>();
qmlRegisterType<QReflect_ParticleProcessor>("pmoc.osgParticle",1,0,"QReflect_ParticleProcessor");
           qmlRegisterType<QMLParticleProcessor>("pmoc.osgParticle",1,0,"QMLParticleProcessor");
       PMOCACTION("getParticleSystem","setParticleSystem","unsetParticleSystem");
};
const std::string osgParticle::MetaQReflect_ParticleProcessor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ParticleProcessor::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ParticleProcessor::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ParticleProcessor::createQQModel(Instance*i){ //return new MetaQReflect_ParticleProcessor_QModel(i);}
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




