#include <osg/RenderInfo>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/RenderInfo_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
#include <customCode/osg/Camera_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/View_pmoc.hpp>
#include <osg/Referenced>
#include <osg/Referenced_pmoc.hpp>
#include <osg/State>
#include <osg/State_pmoc.hpp>
#include <osg/View>
#include <osg/View_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_RenderInfo::getContextID()const{
return _model->getContextID();

}
 void osg::QReflect_RenderInfo::popCamera(){
 _model->popCamera();

}
 void osg::QReflect_RenderInfo::popRenderBin(){
 _model->popRenderBin();

}
 void osg::QReflect_RenderInfo::pushCamera(osg::QReflect_Camera *p0){
 _model->pushCamera(p0->_model);

}
osg::QReflect_Camera*osg::QReflect_RenderInfo::getCurrentCamera(){
PMOCSAFEADDOBJECT(*_model->getCurrentCamera(),inst);
return inst.isValid()?((osg::QReflect_Camera * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Referenced * osg::QReflect_RenderInfo::getUserData()const{
PMOCSAFEADDOBJECT(*_model->getUserData(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_State * osg::QReflect_RenderInfo::getState()const{
PMOCSAFEADDOBJECT(*_model->getState(),inst);
return inst.isValid()?((osg::QReflect_State * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_View * osg::QReflect_RenderInfo::getView()const{
PMOCSAFEADDOBJECT(*_model->getView(),inst);
return inst.isValid()?((osg::QReflect_View * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_RenderInfo::pmoc_reverse_setState( osg::QReflect_State *par){_model->setState(NULL);
emit StateChanged(NULL);
}
void osg::QReflect_RenderInfo::pmoc_reverse_setUserData( osg::QReflect_Referenced *par){_model->setUserData(NULL);
emit UserDataChanged(NULL);
}
void osg::QReflect_RenderInfo::pmoc_reverse_setView( osg::QReflect_View *par){_model->setView(NULL);
emit ViewChanged(NULL);
}
void osg::QReflect_RenderInfo::setState( osg::QReflect_State *par){_model->setState(par->_model);
emit StateChanged(par);
}
void osg::QReflect_RenderInfo::setUserData( osg::QReflect_Referenced *par){_model->setUserData(par->_model);
emit UserDataChanged(par);
}
void osg::QReflect_RenderInfo::setView( osg::QReflect_View *par){_model->setView(par->_model);
emit ViewChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_RenderInfo::QReflect_RenderInfo(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::RenderInfo*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_RenderInfo::~QReflect_RenderInfo( ){
 }
///update this according _model new state
void osg::QReflect_RenderInfo::updateModel(){
}
Instance osg::MetaQReflect_RenderInfo::createInstance( ){
osg::RenderInfo* osg_RenderInfo_ptr	;
osg_RenderInfo_ptr= new osg::RenderInfo()	;
Instance o(PMOCGETMETACLASS("osg::RenderInfo"),(void*)osg_RenderInfo_ptr	,true);
_managedinstances.insert(osg_RenderInfo_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_RenderInfo::MetaQReflect_RenderInfo():MetaQQuickClass( "osg::RenderInfo"){
_typeid=&typeid(osg::RenderInfo );           qRegisterMetaType<QMLRenderInfo>();
qmlRegisterType<QReflect_RenderInfo>("pmoc.osg",1,0,"QReflect_RenderInfo");
           qmlRegisterType<QMLRenderInfo>("pmoc.osg",1,0,"QMLRenderInfo");
       PMOCACTION("getState","setState","unsetState");
       PMOCACTION("getUserData","setUserData","unsetUserData");
       PMOCACTION("getView","setView","unsetView");
};
const std::string osg::MetaQReflect_RenderInfo::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_RenderInfo::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_RenderInfo::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_RenderInfo::createQQModel(Instance*i){ //return new MetaQReflect_RenderInfo_QModel(i);}
QMLRenderInfo *ret =new QMLRenderInfo(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_RenderInfo_pmoc.cpp"
#endif




