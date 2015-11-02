#include <osgParticle/Shooter>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/Shooter_pmoc.hpp>
#include <customCode/osgParticle/Shooter_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_Shooter::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
const  char*  osgParticle::QReflect_Shooter::className()const{
return _model->className();

}
const  char*  osgParticle::QReflect_Shooter::libraryName()const{
return _model->libraryName();

}

///DefaultConstructor////////////////
osgParticle::QReflect_Shooter::QReflect_Shooter(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::Shooter*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_Shooter::~QReflect_Shooter( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_Shooter::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_Shooter::createInstance( ){
std::cerr<<"osgParticle::Shooter is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_Shooter::MetaQReflect_Shooter():MetaQQuickClass( "osgParticle::Shooter"){
_typeid=&typeid(osgParticle::Shooter );           qRegisterMetaType<QMLShooter>();
qmlRegisterType<QReflect_Shooter>("pmoc.osgParticle",1,0,"QReflect_Shooter");
           qmlRegisterType<QMLShooter>("pmoc.osgParticle",1,0,"QMLShooter");
};
const std::string osgParticle::MetaQReflect_Shooter::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_Shooter::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_Shooter::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_Shooter::createQQModel(Instance*i){ //return new MetaQReflect_Shooter_QModel(i);}
QMLShooter *ret =new QMLShooter(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osgParticle::Shooteris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osgParticle::Shooteris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shooter_pmoc.cpp"
#endif


