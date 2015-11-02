#include <osgParticle/ModularProgram>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/ModularProgram_pmoc.hpp>
#include <customCode/osgParticle/ModularProgram_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
#include <customCode/osgParticle/Operator_pmoc.hpp>
using namespace pmoc;
 int  osgParticle::QReflect_ModularProgram::numOperators()const{
return _model->numOperators();

}
 void osgParticle::QReflect_ModularProgram::addOperator(osgParticle::QReflect_Operator *p0){
 _model->addOperator(p0->_model);

}
 void osgParticle::QReflect_ModularProgram::removeOperator( int p0){
 _model->removeOperator(p0);

}
osgParticle::QReflect_Operator*osgParticle::QReflect_ModularProgram::getOperator( int p0)const{
PMOCSAFEADDOBJECT(*_model->getOperator(p0),inst);
return inst.isValid()?((osgParticle::QReflect_Operator * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Operator*osgParticle::QReflect_ModularProgram::getOperator( int p0){
PMOCSAFEADDOBJECT(*_model->getOperator(p0),inst);
return inst.isValid()?((osgParticle::QReflect_Operator * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osgParticle::QReflect_ModularProgram::QReflect_ModularProgram(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::ModularProgram*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_ModularProgram::~QReflect_ModularProgram( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_ModularProgram::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_ModularProgram::createInstance( ){
osg::ref_ptr<osgParticle::ModularProgram> osgParticle_ModularProgram_ptr	;
osgParticle_ModularProgram_ptr = new osgParticle::ModularProgram ()	;
Instance o(PMOCGETMETACLASS("osgParticle::ModularProgram"),(void*)osgParticle_ModularProgram_ptr.get()		,true);
_managedinstances.insert(osgParticle_ModularProgram_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_ModularProgram::MetaQReflect_ModularProgram():MetaQQuickClass( "osgParticle::ModularProgram"){
_typeid=&typeid(osgParticle::ModularProgram );           qRegisterMetaType<QMLModularProgram>();
qmlRegisterType<QReflect_ModularProgram>("pmoc.osgParticle",1,0,"QReflect_ModularProgram");
           qmlRegisterType<QMLModularProgram>("pmoc.osgParticle",1,0,"QMLModularProgram");
};
const std::string osgParticle::MetaQReflect_ModularProgram::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ModularProgram::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ModularProgram::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ModularProgram::createQQModel(Instance*i){ //return new MetaQReflect_ModularProgram_QModel(i);}
QMLModularProgram *ret =new QMLModularProgram(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Program *mother =dynamic_cast<osgParticle::Program*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Program");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Program model for osgParticle::ModularProgramis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Program");
if(!cl){std::cerr<<"osgParticle::Program QQModel for osgParticle::ModularProgramis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ModularProgram_pmoc.cpp"
#endif




