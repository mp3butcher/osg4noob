#include <osgParticle/Operator>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/Operator_pmoc.hpp>
#include <customCode/osgParticle/Operator_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osgParticle/ParticleSystem_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_Operator:: isEnabled()const{
//params checking
return _model->isEnabled();

}
 bool  osgParticle::QReflect_Operator:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Operator::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 void osgParticle::QReflect_Operator::beginOperate(osgParticle::QReflect_Program  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Operator::beginOperate : parameter n.0 is NULL\n"<<endl;return;}
 _model->beginOperate(p0->_model);

}
 void osgParticle::QReflect_Operator::endOperate(){
//params checking
 _model->endOperate();

}
 void osgParticle::QReflect_Operator::operateParticles(osgParticle::QReflect_ParticleSystem  *p0 , double  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Operator::operateParticles : parameter n.0 is NULL\n"<<endl;return;}
 _model->operateParticles(p0->_model ,p1);

}
 void osgParticle::QReflect_Operator::setEnabled( bool  p0){
//params checking
 _model->setEnabled(p0);

}
const  char*  osgParticle::QReflect_Operator:: className()const{
//params checking
return _model->className();

}
const  char*  osgParticle::QReflect_Operator:: libraryName()const{
//params checking
return _model->libraryName();

}

///DefaultConstructor////////////////
osgParticle::QReflect_Operator::QReflect_Operator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::Operator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_Operator::~QReflect_Operator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_Operator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_Operator::createInstance( ){
std::cerr<<"osgParticle::Operator is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_Operator::MetaQReflect_Operator():MetaQQuickClass( "osgParticle::Operator"){
_typeid=&typeid(osgParticle::Operator );
           qRegisterMetaType<osgParticle::QMLOperator>();
           qRegisterMetaType<osgParticle::QMLOperator*>("pmoc.osgParticle.QMLOperator");
qmlRegisterType<osgParticle::QReflect_Operator>("pmoc.osgParticle",1,0,"QReflect_Operator");
           qmlRegisterType<osgParticle::QMLOperator>("pmoc.osgParticle",1,0,"QMLOperator");
};
const std::string osgParticle::MetaQReflect_Operator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_Operator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_Operator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_Operator::createQQModel(const Instance*i){ //return new MetaQReflect_Operator_QModel(i);}
QMLOperator *ret =new QMLOperator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osgParticle::Operatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osgParticle::Operatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Operator_pmoc.cpp"
#endif




