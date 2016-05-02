#include <osgParticle/SinkOperator>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/SinkOperator_pmoc.hpp>
#include <customCode/osgParticle/SinkOperator_pmoc.hpp>
#include <customCode/osgParticle/DomainOperator_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_SinkOperator::beginOperate(osgParticle::QReflect_Program  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_SinkOperator::beginOperate : parameter n.0 is NULL\n"<<endl;return;}
 _model->beginOperate(p0->_model);

}
 void osgParticle::QReflect_SinkOperator::setSinkStrategy(osgParticle::QReflect_SinkOperator::SinkStrategy  p0){
//params checking
 _model->setSinkStrategy(static_cast<osgParticle::SinkOperator::SinkStrategy>(p0));
emit SinkStrategyChanged();

}
 void osgParticle::QReflect_SinkOperator::setSinkTarget(osgParticle::QReflect_SinkOperator::SinkTarget  p0){
//params checking
 _model->setSinkTarget(static_cast<osgParticle::SinkOperator::SinkTarget>(p0));
emit SinkTargetChanged();

}
osgParticle::QReflect_SinkOperator::SinkStrategy  osgParticle::QReflect_SinkOperator::getSinkStrategy()const{
//params checking
osgParticle::QReflect_SinkOperator::SinkStrategy ret=static_cast<osgParticle::QReflect_SinkOperator::SinkStrategy>( _model->getSinkStrategy());return  ret;

}
osgParticle::QReflect_SinkOperator::SinkTarget  osgParticle::QReflect_SinkOperator::getSinkTarget()const{
//params checking
osgParticle::QReflect_SinkOperator::SinkTarget ret=static_cast<osgParticle::QReflect_SinkOperator::SinkTarget>( _model->getSinkTarget());return  ret;

}

///DefaultConstructor////////////////
osgParticle::QReflect_SinkOperator::QReflect_SinkOperator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::SinkOperator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_SinkOperator::~QReflect_SinkOperator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_SinkOperator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_SinkOperator::createInstance( ){
osg::ref_ptr<osgParticle::SinkOperator> osgParticle_SinkOperator_ptr	;
osgParticle_SinkOperator_ptr = new osgParticle::SinkOperator ()	;
Instance o(PMOCGETMETACLASS("osgParticle::SinkOperator"),(void*)osgParticle_SinkOperator_ptr.get()		,true);
_managedinstances.insert(osgParticle_SinkOperator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_SinkOperator::MetaQReflect_SinkOperator():MetaQQuickClass( "osgParticle::SinkOperator"){
_typeid=&typeid(osgParticle::SinkOperator );
           qRegisterMetaType<osgParticle::QMLSinkOperator>();
           qRegisterMetaType<osgParticle::QMLSinkOperator*>("pmoc.osgParticle.QMLSinkOperator");
qmlRegisterType<osgParticle::QReflect_SinkOperator>("pmoc.osgParticle",1,0,"QReflect_SinkOperator");
           qmlRegisterType<osgParticle::QMLSinkOperator>("pmoc.osgParticle",1,0,"QMLSinkOperator");
};
const std::string osgParticle::MetaQReflect_SinkOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_SinkOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_SinkOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_SinkOperator::createQQModel(const Instance*i){ //return new MetaQReflect_SinkOperator_QModel(i);}
QMLSinkOperator *ret =new QMLSinkOperator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::DomainOperator *mother =dynamic_cast<osgParticle::DomainOperator*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::DomainOperator");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::DomainOperator model for osgParticle::SinkOperatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::DomainOperator");
if(!cl){std::cerr<<"osgParticle::DomainOperator QQModel for osgParticle::SinkOperatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_SinkOperator_pmoc.cpp"
#endif




