#include <osgParticle/ParticleSystemUpdater>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/ParticleSystemUpdater_pmoc.hpp>
#include <customCode/osgParticle/ParticleSystemUpdater_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osgParticle/ParticleSystem_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_ParticleSystemUpdater:: addParticleSystem(osgParticle::QReflect_ParticleSystem  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystemUpdater::addParticleSystem : parameter n.0 is NULL\n"<<endl;return -1;}
emit ParticleSystemCollectionChanged();
return _model->addParticleSystem(p0->_model);

}
 bool  osgParticle::QReflect_ParticleSystemUpdater:: containsParticleSystem(osgParticle::QReflect_ParticleSystem  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystemUpdater::containsParticleSystem : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->containsParticleSystem(p0->_model);

}
 bool  osgParticle::QReflect_ParticleSystemUpdater:: removeParticleSystem( unsigned int  p0 , unsigned int  p1){
//params checking
return _model->removeParticleSystem(p0 ,p1);

}
 bool  osgParticle::QReflect_ParticleSystemUpdater:: removeParticleSystem(osgParticle::QReflect_ParticleSystem  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystemUpdater::removeParticleSystem : parameter n.0 is NULL\n"<<endl;return -1;}
emit ParticleSystemCollectionChanged();
return _model->removeParticleSystem(p0->_model);

}
 bool  osgParticle::QReflect_ParticleSystemUpdater:: replaceParticleSystem(osgParticle::QReflect_ParticleSystem  *p0 ,osgParticle::QReflect_ParticleSystem  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystemUpdater::replaceParticleSystem : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystemUpdater::replaceParticleSystem : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->replaceParticleSystem(p0->_model ,p1->_model);

}
 bool  osgParticle::QReflect_ParticleSystemUpdater:: setParticleSystem( unsigned int  p0 ,osgParticle::QReflect_ParticleSystem  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystemUpdater::setParticleSystem : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->setParticleSystem(p0 ,p1->_model);

}
 unsigned int  osgParticle::QReflect_ParticleSystemUpdater:: getNumParticleSystems()const{
//params checking
return _model->getNumParticleSystems();

}
 unsigned int  osgParticle::QReflect_ParticleSystemUpdater:: getParticleSystemIndex(osgParticle::QReflect_ParticleSystem  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystemUpdater::getParticleSystemIndex : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->getParticleSystemIndex(p0->_model);

}
 void osgParticle::QReflect_ParticleSystemUpdater::traverse(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystemUpdater::traverse : parameter n.0 is NULL\n"<<endl;return;}
 _model->traverse(*p0->_model);

}
osgParticle::QReflect_ParticleSystem*osgParticle::QReflect_ParticleSystemUpdater::getParticleSystem( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getParticleSystem(p0),inst);
return inst.isValid()?((osgParticle::QReflect_ParticleSystem * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_ParticleSystem*osgParticle::QReflect_ParticleSystemUpdater::getParticleSystem( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getParticleSystem(p0),inst);
return inst.isValid()?((osgParticle::QReflect_ParticleSystem * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osgParticle::QReflect_ParticleSystemUpdater::QReflect_ParticleSystemUpdater(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::ParticleSystemUpdater*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_ParticleSystemUpdater::~QReflect_ParticleSystemUpdater( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_ParticleSystemUpdater::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_ParticleSystemUpdater::createInstance( ){
osg::ref_ptr<osgParticle::ParticleSystemUpdater> osgParticle_ParticleSystemUpdater_ptr	;
osgParticle_ParticleSystemUpdater_ptr = new osgParticle::ParticleSystemUpdater ()	;
Instance o(PMOCGETMETACLASS("osgParticle::ParticleSystemUpdater"),(void*)osgParticle_ParticleSystemUpdater_ptr.get()		,true);
_managedinstances.insert(osgParticle_ParticleSystemUpdater_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_ParticleSystemUpdater::MetaQReflect_ParticleSystemUpdater():MetaQQuickClass( "osgParticle::ParticleSystemUpdater"){
_typeid=&typeid(osgParticle::ParticleSystemUpdater );
           qRegisterMetaType<osgParticle::QMLParticleSystemUpdater>();
           qRegisterMetaType<osgParticle::QMLParticleSystemUpdater*>("pmoc.osgParticle.QMLParticleSystemUpdater");
qmlRegisterType<osgParticle::QReflect_ParticleSystemUpdater>("pmoc.osgParticle",1,0,"QReflect_ParticleSystemUpdater");
           qmlRegisterType<osgParticle::QMLParticleSystemUpdater>("pmoc.osgParticle",1,0,"QMLParticleSystemUpdater");
};
const std::string osgParticle::MetaQReflect_ParticleSystemUpdater::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ParticleSystemUpdater::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ParticleSystemUpdater::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ParticleSystemUpdater::createQQModel(const Instance*i){ //return new MetaQReflect_ParticleSystemUpdater_QModel(i);}
QMLParticleSystemUpdater *ret =new QMLParticleSystemUpdater(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Node *mother =dynamic_cast<osg::Node*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Node");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Node model for osgParticle::ParticleSystemUpdateris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Node");
if(!cl){std::cerr<<"osg::Node QQModel for osgParticle::ParticleSystemUpdateris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ParticleSystemUpdater_pmoc.cpp"
#endif




