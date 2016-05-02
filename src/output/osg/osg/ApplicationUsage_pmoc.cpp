#include <osg/ApplicationUsage>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ApplicationUsage_pmoc.hpp>
#include <customCode/osg/ApplicationUsage_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/ApplicationUsage_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ApplicationUsage::addCommandLineOption(const  QString  &p0 ,const  QString  &p1 ,const  QString  &p2){
//params checking
 _model->addCommandLineOption(std::string(p0.toStdString()) ,std::string(p1.toStdString()) ,std::string(p2.toStdString()));

}
 void osg::QReflect_ApplicationUsage::addEnvironmentalVariable(const  QString  &p0 ,const  QString  &p1 ,const  QString  &p2){
//params checking
 _model->addEnvironmentalVariable(std::string(p0.toStdString()) ,std::string(p1.toStdString()) ,std::string(p2.toStdString()));

}
 void osg::QReflect_ApplicationUsage::addKeyboardMouseBinding( int  p0 ,const  QString  &p1){
//params checking
 _model->addKeyboardMouseBinding(p0 ,std::string(p1.toStdString()));

}
 void osg::QReflect_ApplicationUsage::addKeyboardMouseBinding(const  QString  &p0 , int  p1 ,const  QString  &p2){
//params checking
 _model->addKeyboardMouseBinding(std::string(p0.toStdString()) ,p1 ,std::string(p2.toStdString()));

}
 void osg::QReflect_ApplicationUsage::addKeyboardMouseBinding(const  QString  &p0 ,const  QString  &p1){
//params checking
 _model->addKeyboardMouseBinding(std::string(p0.toStdString()) ,std::string(p1.toStdString()));

}
 void osg::QReflect_ApplicationUsage::addUsageExplanation(osg::QReflect_ApplicationUsage::Type  p0 ,const  QString  &p1 ,const  QString  &p2){
//params checking
 _model->addUsageExplanation(static_cast<osg::ApplicationUsage::Type>(p0) ,std::string(p1.toStdString()) ,std::string(p2.toStdString()));

}
 void osg::QReflect_ApplicationUsage::setApplicationName(const  QString  &p0){
//params checking
 _model->setApplicationName(std::string(p0.toStdString()));
emit ApplicationNameChanged();

}
 void osg::QReflect_ApplicationUsage::setCommandLineUsage(const  QString  &p0){
//params checking
 _model->setCommandLineUsage(std::string(p0.toStdString()));
emit CommandLineUsageChanged();

}
 void osg::QReflect_ApplicationUsage::setDescription(const  QString  &p0){
//params checking
 _model->setDescription(std::string(p0.toStdString()));
emit DescriptionChanged();

}
QString  osg::QReflect_ApplicationUsage::getApplicationName()const{
//params checking
QString ret(_model->getApplicationName().c_str());return ret;

}
QString  osg::QReflect_ApplicationUsage::getCommandLineUsage()const{
//params checking
QString ret(_model->getCommandLineUsage().c_str());return ret;

}
QString  osg::QReflect_ApplicationUsage::getDescription()const{
//params checking
QString ret(_model->getDescription().c_str());return ret;

}
osg::QReflect_ApplicationUsage*osg::QReflect_ApplicationUsage::instance(){
//params checking
PMOCSAFEADDOBJECT(*_model->instance(),inst);
return inst.isValid()?((osg::QReflect_ApplicationUsage * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_ApplicationUsage::QReflect_ApplicationUsage(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ApplicationUsage*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ApplicationUsage::~QReflect_ApplicationUsage( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ApplicationUsage::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ApplicationUsage::createInstance( ){
osg::ref_ptr<osg::ApplicationUsage> osg_ApplicationUsage_ptr	;
osg_ApplicationUsage_ptr = new osg::ApplicationUsage ()	;
Instance o(PMOCGETMETACLASS("osg::ApplicationUsage"),(void*)osg_ApplicationUsage_ptr.get()		,true);
_managedinstances.insert(osg_ApplicationUsage_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ApplicationUsage::MetaQReflect_ApplicationUsage():MetaQQuickClass( "osg::ApplicationUsage"){
_typeid=&typeid(osg::ApplicationUsage );
           qRegisterMetaType<osg::QMLApplicationUsage>();
           qRegisterMetaType<osg::QMLApplicationUsage*>("pmoc.osg.QMLApplicationUsage");
qmlRegisterType<osg::QReflect_ApplicationUsage>("pmoc.osg",1,0,"QReflect_ApplicationUsage");
           qmlRegisterType<osg::QMLApplicationUsage>("pmoc.osg",1,0,"QMLApplicationUsage");
};
const std::string osg::MetaQReflect_ApplicationUsage::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ApplicationUsage::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ApplicationUsage::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ApplicationUsage::createQQModel(const Instance*i){ //return new MetaQReflect_ApplicationUsage_QModel(i);}
QMLApplicationUsage *ret =new QMLApplicationUsage(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::ApplicationUsageis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::ApplicationUsageis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ApplicationUsage_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ApplicationUsage_pmoc.hpp>
#include <customCode/osg/ApplicationUsage_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_ApplicationUsageProxy::QReflect_ApplicationUsageProxy(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ApplicationUsageProxy*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ApplicationUsageProxy::~QReflect_ApplicationUsageProxy( ){
 }
///update this according _model new state
void osg::QReflect_ApplicationUsageProxy::updateModel(){
}
Instance osg::MetaQReflect_ApplicationUsageProxy::createInstance( ){
std::cerr<<"osg::ApplicationUsageProxy is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ApplicationUsageProxy::MetaQReflect_ApplicationUsageProxy():MetaQQuickClass( "osg::ApplicationUsageProxy"){
_typeid=&typeid(osg::ApplicationUsageProxy );
           qRegisterMetaType<osg::QMLApplicationUsageProxy>();
           qRegisterMetaType<osg::QMLApplicationUsageProxy*>("pmoc.osg.QMLApplicationUsageProxy");
qmlRegisterType<osg::QReflect_ApplicationUsageProxy>("pmoc.osg",1,0,"QReflect_ApplicationUsageProxy");
           qmlRegisterType<osg::QMLApplicationUsageProxy>("pmoc.osg",1,0,"QMLApplicationUsageProxy");
};
const std::string osg::MetaQReflect_ApplicationUsageProxy::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ApplicationUsageProxy::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ApplicationUsageProxy::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ApplicationUsageProxy::createQQModel(const Instance*i){ //return new MetaQReflect_ApplicationUsageProxy_QModel(i);}
QMLApplicationUsageProxy *ret =new QMLApplicationUsageProxy(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ApplicationUsage_pmoc.cpp"
#endif




