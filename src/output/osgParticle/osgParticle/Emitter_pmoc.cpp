#include <osgParticle/Emitter>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/Emitter_pmoc.hpp>
#include <customCode/osgParticle/Emitter_pmoc.hpp>
#include <customCode/osgParticle/ParticleProcessor_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_Emitter:: getUseDefaultTemplate()const{
//params checking
return _model->getUseDefaultTemplate();

}
 bool  osgParticle::QReflect_Emitter:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Emitter::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 void osgParticle::QReflect_Emitter::accept(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Emitter::accept : parameter n.0 is NULL\n"<<endl;return;}
 _model->accept(*p0->_model);

}
 void osgParticle::QReflect_Emitter::setParticleTemplate(osgParticle::QReflect_Particle  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Emitter::setParticleTemplate : parameter n.0 is NULL\n"<<endl;return;}
 _model->setParticleTemplate(*p0->_model);

}
 void osgParticle::QReflect_Emitter::setUseDefaultTemplate( bool  p0){
//params checking
 _model->setUseDefaultTemplate(p0);
emit UseDefaultTemplateChanged();

}
const  char*  osgParticle::QReflect_Emitter:: className()const{
//params checking
return _model->className();

}
const  char*  osgParticle::QReflect_Emitter:: libraryName()const{
//params checking
return _model->libraryName();

}

///DefaultConstructor////////////////
osgParticle::QReflect_Emitter::QReflect_Emitter(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::Emitter*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_Emitter::~QReflect_Emitter( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_Emitter::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_Emitter::createInstance( ){
std::cerr<<"osgParticle::Emitter is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_Emitter::MetaQReflect_Emitter():MetaQQuickClass( "osgParticle::Emitter"){
_typeid=&typeid(osgParticle::Emitter );
           qRegisterMetaType<osgParticle::QMLEmitter>();
           qRegisterMetaType<osgParticle::QMLEmitter*>("pmoc.osgParticle.QMLEmitter");
qmlRegisterType<osgParticle::QReflect_Emitter>("pmoc.osgParticle",1,0,"QReflect_Emitter");
           qmlRegisterType<osgParticle::QMLEmitter>("pmoc.osgParticle",1,0,"QMLEmitter");
};
const std::string osgParticle::MetaQReflect_Emitter::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_Emitter::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_Emitter::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_Emitter::createQQModel(const Instance*i){ //return new MetaQReflect_Emitter_QModel(i);}
QMLEmitter *ret =new QMLEmitter(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::ParticleProcessor *mother =dynamic_cast<osgParticle::ParticleProcessor*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::ParticleProcessor");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::ParticleProcessor model for osgParticle::Emitteris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::ParticleProcessor");
if(!cl){std::cerr<<"osgParticle::ParticleProcessor QQModel for osgParticle::Emitteris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Emitter_pmoc.cpp"
#endif




