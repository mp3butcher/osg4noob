#include <osg/Object>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Object_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_DummyObject::QReflect_DummyObject(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::DummyObject*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_DummyObject::~QReflect_DummyObject( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_DummyObject::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_DummyObject::createInstance( ){
osg::ref_ptr<osg::DummyObject> osg_DummyObject_ptr	;
osg_DummyObject_ptr = new osg::DummyObject ()	;
Instance o(PMOCGETMETACLASS("osg::DummyObject"),(void*)osg_DummyObject_ptr.get()		,true);
_managedinstances.insert(osg_DummyObject_ptr);
return(o);

}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_DummyObject::MetaQReflect_DummyObject():MetaQQuickClass( "osg::DummyObject"){
_typeid=&typeid(osg::DummyObject );
           qRegisterMetaType<osg::QMLDummyObject>();
           qRegisterMetaType<osg::QMLDummyObject*>("pmoc.osg.QMLDummyObject");
qmlRegisterType<osg::QReflect_DummyObject>("pmoc.osg",1,0,"QReflect_DummyObject");
           qmlRegisterType<osg::QMLDummyObject>("pmoc.osg",1,0,"QMLDummyObject");
};
const std::string osg::MetaQReflect_DummyObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_DummyObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_DummyObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_DummyObject::createQQModel(const Instance*i){ //return new MetaQReflect_DummyObject_QModel(i);}
QMLDummyObject *ret =new QMLDummyObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::DummyObjectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::DummyObjectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Object_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Object_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Uniform_pmoc.hpp>
#include <customCode/osg/UserDataContainer_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Object:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Object::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 void osg::QReflect_Object::computeDataVariance(){
//params checking
 _model->computeDataVariance();

}
 void osg::QReflect_Object::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Object::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_Object::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Object::setDataVariance(osg::QReflect_Object::DataVariance  p0){
//params checking
 _model->setDataVariance(static_cast<osg::Object::DataVariance>(p0));
emit DataVarianceChanged(p0);

}
 void osg::QReflect_Object::setName(const  QString  &p0){
//params checking
 _model->setName(std::string(p0.toStdString()));
emit NameChanged();

}
 void osg::QReflect_Object::setName(const  char  *p0){
//params checking
 _model->setName(p0);

}
 void osg::QReflect_Object::setThreadSafeRefUnref( bool  p0){
//params checking
 _model->setThreadSafeRefUnref(p0);

}
 void osg::QReflect_Object::setUserData(osg::QReflect_Referenced  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Object::setUserData : parameter n.0 is NULL\n"<<endl;return;}
 _model->setUserData(p0->_model);
emit UserDataChanged();

}
 void osg::QReflect_Object::setUserDataContainer(osg::QReflect_UserDataContainer  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Object::setUserDataContainer : parameter n.0 is NULL\n"<<endl;return;}
 _model->setUserDataContainer(p0->_model);
emit UserDataContainerChanged();

}
QString  osg::QReflect_Object::getCompoundClassName()const{
//params checking
QString ret(_model->getCompoundClassName().c_str());return ret;

}
QString  osg::QReflect_Object::getName()const{
//params checking
QString ret(_model->getName().c_str());return ret;

}
osg::QReflect_Node*osg::QReflect_Object::asNode()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asNode(),inst);
return inst.isValid()?((osg::QReflect_Node * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Node*osg::QReflect_Object::asNode(){
//params checking
PMOCSAFEADDOBJECT(*_model->asNode(),inst);
return inst.isValid()?((osg::QReflect_Node * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_NodeVisitor*osg::QReflect_Object::asNodeVisitor()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asNodeVisitor(),inst);
return inst.isValid()?((osg::QReflect_NodeVisitor * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_NodeVisitor*osg::QReflect_Object::asNodeVisitor(){
//params checking
PMOCSAFEADDOBJECT(*_model->asNodeVisitor(),inst);
return inst.isValid()?((osg::QReflect_NodeVisitor * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object::DataVariance  osg::QReflect_Object::getDataVariance()const{
//params checking
osg::QReflect_Object::DataVariance ret=static_cast<osg::QReflect_Object::DataVariance>( _model->getDataVariance());return  ret;

}
osg::QReflect_Referenced*osg::QReflect_Object::getUserData()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getUserData(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Referenced*osg::QReflect_Object::getUserData(){
//params checking
PMOCSAFEADDOBJECT(*_model->getUserData(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_Object::asStateAttribute()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asStateAttribute(),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_Object::asStateAttribute(){
//params checking
PMOCSAFEADDOBJECT(*_model->asStateAttribute(),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_Object::asUniform()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asUniform(),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_Object::asUniform(){
//params checking
PMOCSAFEADDOBJECT(*_model->asUniform(),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_UserDataContainer*osg::QReflect_Object::getOrCreateUserDataContainer(){
//params checking
PMOCSAFEADDOBJECT(*_model->getOrCreateUserDataContainer(),inst);
return inst.isValid()?((osg::QReflect_UserDataContainer * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_UserDataContainer*osg::QReflect_Object::getUserDataContainer()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getUserDataContainer(),inst);
return inst.isValid()?((osg::QReflect_UserDataContainer * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_UserDataContainer*osg::QReflect_Object::getUserDataContainer(){
//params checking
PMOCSAFEADDOBJECT(*_model->getUserDataContainer(),inst);
return inst.isValid()?((osg::QReflect_UserDataContainer * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Object::QReflect_Object(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Object*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Object::~QReflect_Object( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Object::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Object::createInstance( ){
std::cerr<<"osg::Object is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Object::MetaQReflect_Object():MetaQQuickClass( "osg::Object"){
_typeid=&typeid(osg::Object );
           qRegisterMetaType<osg::QMLObject>();
           qRegisterMetaType<osg::QMLObject*>("pmoc.osg.QMLObject");
qmlRegisterType<osg::QReflect_Object>("pmoc.osg",1,0,"QReflect_Object");
           qmlRegisterType<osg::QMLObject>("pmoc.osg",1,0,"QMLObject");
};
const std::string osg::MetaQReflect_Object::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Object::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Object::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Object::createQQModel(const Instance*i){ //return new MetaQReflect_Object_QModel(i);}
QMLObject *ret =new QMLObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::Objectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::Objectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Object_pmoc.cpp"
#endif




