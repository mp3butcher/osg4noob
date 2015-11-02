#include <osg/UserDataContainer>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/UserDataContainer_pmoc.hpp>
#include <customCode/osg/UserDataContainer_pmoc.hpp>
#include <customCode/osg/UserDataContainer_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <osg/Referenced>
#include <osg/Referenced_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_DefaultUserDataContainer::addUserObject(osg::QReflect_Object *p0){
return _model->addUserObject(p0->_model);

}
 unsigned int  osg::QReflect_DefaultUserDataContainer::getNumDescriptions()const{
return _model->getNumDescriptions();

}
 unsigned int  osg::QReflect_DefaultUserDataContainer::getNumUserObjects()const{
return _model->getNumUserObjects();

}
 unsigned int  osg::QReflect_DefaultUserDataContainer::getUserObjectIndex(const  QString &p0 , unsigned int p1)const{
return _model->getUserObjectIndex(std::string(p0.toStdString()) ,p1);

}
 unsigned int  osg::QReflect_DefaultUserDataContainer::getUserObjectIndex(osg::QReflect_Object *p0 , unsigned int p1)const{
return _model->getUserObjectIndex(p0->_model ,p1);

}
 void osg::QReflect_DefaultUserDataContainer::addDescription(const  QString &p0){
 _model->addDescription(std::string(p0.toStdString()));

}
 void osg::QReflect_DefaultUserDataContainer::removeUserObject( unsigned int p0){
 _model->removeUserObject(p0);

}
 void osg::QReflect_DefaultUserDataContainer::setThreadSafeRefUnref( bool p0){
 _model->setThreadSafeRefUnref(p0);

}
 void osg::QReflect_DefaultUserDataContainer::setUserObject( unsigned int p0 ,osg::QReflect_Object *p1){
 _model->setUserObject(p0 ,p1->_model);

}
osg::QReflect_Object*osg::QReflect_DefaultUserDataContainer::getUserObject( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getUserObject(p0),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_DefaultUserDataContainer::getUserObject( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getUserObject(p0),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Referenced * osg::QReflect_DefaultUserDataContainer::getUserData()const{
PMOCSAFEADDOBJECT(*_model->getUserData(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_DefaultUserDataContainer::pmoc_reverse_setUserData( osg::QReflect_Referenced *par){_model->setUserData(NULL);
emit UserDataChanged(NULL);
}
void osg::QReflect_DefaultUserDataContainer::setUserData( osg::QReflect_Referenced *par){_model->setUserData(par->_model);
emit UserDataChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_DefaultUserDataContainer::QReflect_DefaultUserDataContainer(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::DefaultUserDataContainer*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_DefaultUserDataContainer::~QReflect_DefaultUserDataContainer( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_DefaultUserDataContainer::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_DefaultUserDataContainer::createInstance( ){
osg::ref_ptr<osg::DefaultUserDataContainer> osg_DefaultUserDataContainer_ptr	;
osg_DefaultUserDataContainer_ptr = new osg::DefaultUserDataContainer ()	;
Instance o(PMOCGETMETACLASS("osg::DefaultUserDataContainer"),(void*)osg_DefaultUserDataContainer_ptr.get()		,true);
_managedinstances.insert(osg_DefaultUserDataContainer_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_DefaultUserDataContainer::MetaQReflect_DefaultUserDataContainer():MetaQQuickClass( "osg::DefaultUserDataContainer"){
_typeid=&typeid(osg::DefaultUserDataContainer );           qRegisterMetaType<QMLDefaultUserDataContainer>();
qmlRegisterType<QReflect_DefaultUserDataContainer>("pmoc.osg",1,0,"QReflect_DefaultUserDataContainer");
           qmlRegisterType<QMLDefaultUserDataContainer>("pmoc.osg",1,0,"QMLDefaultUserDataContainer");
       PMOCACTION("getUserData","setUserData","unsetUserData");
};
const std::string osg::MetaQReflect_DefaultUserDataContainer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_DefaultUserDataContainer::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_DefaultUserDataContainer::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_DefaultUserDataContainer::createQQModel(Instance*i){ //return new MetaQReflect_DefaultUserDataContainer_QModel(i);}
QMLDefaultUserDataContainer *ret =new QMLDefaultUserDataContainer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::UserDataContainer *mother =dynamic_cast<osg::UserDataContainer*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::UserDataContainer");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::UserDataContainer model for osg::DefaultUserDataContaineris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::UserDataContainer");
if(!cl){std::cerr<<"osg::UserDataContainer QQModel for osg::DefaultUserDataContaineris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_UserDataContainer_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/UserDataContainer_pmoc.hpp>
#include <customCode/osg/UserDataContainer_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_UserDataContainer::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
const  char*  osg::QReflect_UserDataContainer::className()const{
return _model->className();

}
const  char*  osg::QReflect_UserDataContainer::libraryName()const{
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_UserDataContainer::getUserObject(const  QString &p0 , unsigned int p1)const{
PMOCSAFEADDOBJECT(*_model->getUserObject(std::string(p0.toStdString()) ,p1),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_UserDataContainer::getUserObject(const  QString &p0 , unsigned int p1){
PMOCSAFEADDOBJECT(*_model->getUserObject(std::string(p0.toStdString()) ,p1),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_UserDataContainer::QReflect_UserDataContainer(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::UserDataContainer*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_UserDataContainer::~QReflect_UserDataContainer( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_UserDataContainer::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_UserDataContainer::createInstance( ){
std::cerr<<"osg::UserDataContainer is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_UserDataContainer::MetaQReflect_UserDataContainer():MetaQQuickClass( "osg::UserDataContainer"){
_typeid=&typeid(osg::UserDataContainer );           qRegisterMetaType<QMLUserDataContainer>();
qmlRegisterType<QReflect_UserDataContainer>("pmoc.osg",1,0,"QReflect_UserDataContainer");
           qmlRegisterType<QMLUserDataContainer>("pmoc.osg",1,0,"QMLUserDataContainer");
};
const std::string osg::MetaQReflect_UserDataContainer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_UserDataContainer::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_UserDataContainer::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_UserDataContainer::createQQModel(Instance*i){ //return new MetaQReflect_UserDataContainer_QModel(i);}
QMLUserDataContainer *ret =new QMLUserDataContainer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::UserDataContaineris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::UserDataContaineris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_UserDataContainer_pmoc.cpp"
#endif


