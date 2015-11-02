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
osg::QReflect_DummyObject::QReflect_DummyObject(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::DummyObject );           qRegisterMetaType<QMLDummyObject>();
qmlRegisterType<QReflect_DummyObject>("pmoc.osg",1,0,"QReflect_DummyObject");
           qmlRegisterType<QMLDummyObject>("pmoc.osg",1,0,"QMLDummyObject");
};
const std::string osg::MetaQReflect_DummyObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_DummyObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_DummyObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_DummyObject::createQQModel(Instance*i){ //return new MetaQReflect_DummyObject_QModel(i);}
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
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <osg/Referenced>
#include <osg/Referenced_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Object::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 void osg::QReflect_Object::computeDataVariance(){
 _model->computeDataVariance();

}
 void osg::QReflect_Object::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Object::setDataVariance(osg::QReflect_Object::DataVariance p0){
 _model->setDataVariance(static_cast<osg::Object::DataVariance>(p0));

}
 void osg::QReflect_Object::setName(const  char *p0){
 _model->setName(p0);

}
 void osg::QReflect_Object::setThreadSafeRefUnref( bool p0){
 _model->setThreadSafeRefUnref(p0);

}
QString  osg::QReflect_Object::getCompoundClassName()const{
QString ret(_model->getCompoundClassName().c_str());return ret;

}
const QString osg::QReflect_Object::getName()const{return QString(_model->getName().c_str());}
osg::QReflect_Object::DataVariance  osg::QReflect_Object::getDataVariance()const{
osg::QReflect_Object::DataVariance ret=static_cast<osg::QReflect_Object::DataVariance>( _model->getDataVariance());return  ret;

}
osg::QReflect_Referenced * osg::QReflect_Object::getUserData()const{
PMOCSAFEADDOBJECT(*_model->getUserData(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_Object::pmoc_reverse_setUserData( osg::QReflect_Referenced *par){_model->setUserData(NULL);
emit UserDataChanged(NULL);
}
void osg::QReflect_Object::setName(const QString &par){_model->setName(par.toStdString());emit NameChanged(par);}
void osg::QReflect_Object::setUserData( osg::QReflect_Referenced *par){_model->setUserData(par->_model);
emit UserDataChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_Object::QReflect_Object(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Object );           qRegisterMetaType<QMLObject>();
qmlRegisterType<QReflect_Object>("pmoc.osg",1,0,"QReflect_Object");
           qmlRegisterType<QMLObject>("pmoc.osg",1,0,"QMLObject");
       PMOCACTION("getUserData","setUserData","unsetUserData");
};
const std::string osg::MetaQReflect_Object::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Object::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Object::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Object::createQQModel(Instance*i){ //return new MetaQReflect_Object_QModel(i);}
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


