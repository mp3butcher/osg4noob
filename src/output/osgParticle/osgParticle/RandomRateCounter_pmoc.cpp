#include <osgParticle/RandomRateCounter>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/RandomRateCounter_pmoc.hpp>
#include <customCode/osgParticle/RandomRateCounter_pmoc.hpp>
#include <customCode/osgParticle/VariableRateCounter_pmoc.hpp>
using namespace pmoc;
 int  osgParticle::QReflect_RandomRateCounter:: numParticlesToCreate( double  p0)const{
//params checking
return _model->numParticlesToCreate(p0);

}

///DefaultConstructor////////////////
osgParticle::QReflect_RandomRateCounter::QReflect_RandomRateCounter(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::RandomRateCounter*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_RandomRateCounter::~QReflect_RandomRateCounter( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_RandomRateCounter::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_RandomRateCounter::createInstance( ){
osg::ref_ptr<osgParticle::RandomRateCounter> osgParticle_RandomRateCounter_ptr	;
osgParticle_RandomRateCounter_ptr = new osgParticle::RandomRateCounter ()	;
Instance o(PMOCGETMETACLASS("osgParticle::RandomRateCounter"),(void*)osgParticle_RandomRateCounter_ptr.get()		,true);
_managedinstances.insert(osgParticle_RandomRateCounter_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_RandomRateCounter::MetaQReflect_RandomRateCounter():MetaQQuickClass( "osgParticle::RandomRateCounter"){
_typeid=&typeid(osgParticle::RandomRateCounter );
           qRegisterMetaType<osgParticle::QMLRandomRateCounter>();
           qRegisterMetaType<osgParticle::QMLRandomRateCounter*>("pmoc.osgParticle.QMLRandomRateCounter");
qmlRegisterType<osgParticle::QReflect_RandomRateCounter>("pmoc.osgParticle",1,0,"QReflect_RandomRateCounter");
           qmlRegisterType<osgParticle::QMLRandomRateCounter>("pmoc.osgParticle",1,0,"QMLRandomRateCounter");
};
const std::string osgParticle::MetaQReflect_RandomRateCounter::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_RandomRateCounter::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_RandomRateCounter::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_RandomRateCounter::createQQModel(const Instance*i){ //return new MetaQReflect_RandomRateCounter_QModel(i);}
QMLRandomRateCounter *ret =new QMLRandomRateCounter(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::VariableRateCounter *mother =dynamic_cast<osgParticle::VariableRateCounter*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::VariableRateCounter");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::VariableRateCounter model for osgParticle::RandomRateCounteris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::VariableRateCounter");
if(!cl){std::cerr<<"osgParticle::VariableRateCounter QQModel for osgParticle::RandomRateCounteris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_RandomRateCounter_pmoc.cpp"
#endif




