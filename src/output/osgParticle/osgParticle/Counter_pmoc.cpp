#include <osgParticle/Counter>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/Counter_pmoc.hpp>
#include <customCode/osgParticle/Counter_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_Counter:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Counter::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
const  char*  osgParticle::QReflect_Counter:: className()const{
//params checking
return _model->className();

}
const  char*  osgParticle::QReflect_Counter:: libraryName()const{
//params checking
return _model->libraryName();

}

///DefaultConstructor////////////////
osgParticle::QReflect_Counter::QReflect_Counter(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::Counter*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_Counter::~QReflect_Counter( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_Counter::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_Counter::createInstance( ){
std::cerr<<"osgParticle::Counter is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_Counter::MetaQReflect_Counter():MetaQQuickClass( "osgParticle::Counter"){
_typeid=&typeid(osgParticle::Counter );
           qRegisterMetaType<osgParticle::QMLCounter>();
           qRegisterMetaType<osgParticle::QMLCounter*>("pmoc.osgParticle.QMLCounter");
qmlRegisterType<osgParticle::QReflect_Counter>("pmoc.osgParticle",1,0,"QReflect_Counter");
           qmlRegisterType<osgParticle::QMLCounter>("pmoc.osgParticle",1,0,"QMLCounter");
};
const std::string osgParticle::MetaQReflect_Counter::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_Counter::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_Counter::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_Counter::createQQModel(const Instance*i){ //return new MetaQReflect_Counter_QModel(i);}
QMLCounter *ret =new QMLCounter(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osgParticle::Counteris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osgParticle::Counteris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Counter_pmoc.cpp"
#endif




