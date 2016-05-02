#include <osgParticle/Program>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/Program_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
#include <customCode/osgParticle/ParticleProcessor_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_Program:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Program::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 void osgParticle::QReflect_Program::accept(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Program::accept : parameter n.0 is NULL\n"<<endl;return;}
 _model->accept(*p0->_model);

}
const  char*  osgParticle::QReflect_Program:: className()const{
//params checking
return _model->className();

}
const  char*  osgParticle::QReflect_Program:: libraryName()const{
//params checking
return _model->libraryName();

}

///DefaultConstructor////////////////
osgParticle::QReflect_Program::QReflect_Program(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::Program*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_Program::~QReflect_Program( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_Program::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_Program::createInstance( ){
std::cerr<<"osgParticle::Program is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_Program::MetaQReflect_Program():MetaQQuickClass( "osgParticle::Program"){
_typeid=&typeid(osgParticle::Program );
           qRegisterMetaType<osgParticle::QMLProgram>();
           qRegisterMetaType<osgParticle::QMLProgram*>("pmoc.osgParticle.QMLProgram");
qmlRegisterType<osgParticle::QReflect_Program>("pmoc.osgParticle",1,0,"QReflect_Program");
           qmlRegisterType<osgParticle::QMLProgram>("pmoc.osgParticle",1,0,"QMLProgram");
};
const std::string osgParticle::MetaQReflect_Program::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_Program::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_Program::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_Program::createQQModel(const Instance*i){ //return new MetaQReflect_Program_QModel(i);}
QMLProgram *ret =new QMLProgram(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::ParticleProcessor *mother =dynamic_cast<osgParticle::ParticleProcessor*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::ParticleProcessor");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::ParticleProcessor model for osgParticle::Programis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::ParticleProcessor");
if(!cl){std::cerr<<"osgParticle::ParticleProcessor QQModel for osgParticle::Programis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Program_pmoc.cpp"
#endif




