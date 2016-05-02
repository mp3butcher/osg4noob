#include <osgParticle/VariableRateCounter>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/VariableRateCounter_pmoc.hpp>
#include <customCode/osgParticle/VariableRateCounter_pmoc.hpp>
#include <customCode/osgParticle/Counter_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_VariableRateCounter:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_VariableRateCounter::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 void osgParticle::QReflect_VariableRateCounter::setRateRange( float  p0 , float  p1){
//params checking
 _model->setRateRange(p0 ,p1);

}
const  char*  osgParticle::QReflect_VariableRateCounter:: className()const{
//params checking
return _model->className();

}
const  char*  osgParticle::QReflect_VariableRateCounter:: libraryName()const{
//params checking
return _model->libraryName();

}

///DefaultConstructor////////////////
osgParticle::QReflect_VariableRateCounter::QReflect_VariableRateCounter(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::VariableRateCounter*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_VariableRateCounter::~QReflect_VariableRateCounter( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_VariableRateCounter::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_VariableRateCounter::createInstance( ){
std::cerr<<"osgParticle::VariableRateCounter is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_VariableRateCounter::MetaQReflect_VariableRateCounter():MetaQQuickClass( "osgParticle::VariableRateCounter"){
_typeid=&typeid(osgParticle::VariableRateCounter );
           qRegisterMetaType<osgParticle::QMLVariableRateCounter>();
           qRegisterMetaType<osgParticle::QMLVariableRateCounter*>("pmoc.osgParticle.QMLVariableRateCounter");
qmlRegisterType<osgParticle::QReflect_VariableRateCounter>("pmoc.osgParticle",1,0,"QReflect_VariableRateCounter");
           qmlRegisterType<osgParticle::QMLVariableRateCounter>("pmoc.osgParticle",1,0,"QMLVariableRateCounter");
};
const std::string osgParticle::MetaQReflect_VariableRateCounter::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_VariableRateCounter::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_VariableRateCounter::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_VariableRateCounter::createQQModel(const Instance*i){ //return new MetaQReflect_VariableRateCounter_QModel(i);}
QMLVariableRateCounter *ret =new QMLVariableRateCounter(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Counter *mother =dynamic_cast<osgParticle::Counter*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Counter");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Counter model for osgParticle::VariableRateCounteris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Counter");
if(!cl){std::cerr<<"osgParticle::Counter QQModel for osgParticle::VariableRateCounteris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_VariableRateCounter_pmoc.cpp"
#endif




