#include <osg/Geode>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Geode_pmoc.hpp>
#include <customCode/osg/Geode_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <osg/Drawable>
using namespace pmoc;
 bool  osg::QReflect_Geode::containsDrawable(osg::QReflect_Drawable *p0)const{
return _model->containsDrawable(p0->_model);

}
 bool  osg::QReflect_Geode::removeDrawables( unsigned int p0 , unsigned int p1){
return _model->removeDrawables(p0 ,p1);

}
 bool  osg::QReflect_Geode::replaceDrawable(osg::QReflect_Drawable *p0 ,osg::QReflect_Drawable *p1){
return _model->replaceDrawable(p0->_model ,p1->_model);

}
 bool  osg::QReflect_Geode::setDrawable( unsigned int p0 ,osg::QReflect_Drawable *p1){
return _model->setDrawable(p0 ,p1->_model);

}
 unsigned int  osg::QReflect_Geode::getDrawableIndex(osg::QReflect_Drawable *p0)const{
return _model->getDrawableIndex(p0->_model);

}
 unsigned int  osg::QReflect_Geode::getNumDrawables()const{
return _model->getNumDrawables();

}
osg::QReflect_Drawable*osg::QReflect_Geode::getDrawable( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getDrawable(p0),inst);
return inst.isValid()?((osg::QReflect_Drawable * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Drawable*osg::QReflect_Geode::getDrawable( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getDrawable(p0),inst);
return inst.isValid()?((osg::QReflect_Drawable * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geode*osg::QReflect_Geode::asGeode()const{
PMOCSAFEADDOBJECT(*_model->asGeode(),inst);
return inst.isValid()?((osg::QReflect_Geode * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geode*osg::QReflect_Geode::asGeode(){
PMOCSAFEADDOBJECT(*_model->asGeode(),inst);
return inst.isValid()?((osg::QReflect_Geode * )inst.model->createQQModel(&inst)):NULL;
}
void   osg::QReflect_Geode::addDrawable( osg::QReflect_Drawable *par){
_model->addDrawable(par->_model);
}
void   osg::QReflect_Geode::pmoc_reverse_addDrawable( osg::QReflect_Drawable *par){
_model->removeDrawable(par->_model);
emit DrawableCollectionChanged();
}

///DefaultConstructor////////////////
osg::QReflect_Geode::QReflect_Geode(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Geode*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Geode::~QReflect_Geode( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Geode::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Geode::createInstance( ){
osg::ref_ptr<osg::Geode> osg_Geode_ptr	;
osg_Geode_ptr = new osg::Geode ()	;
Instance o(PMOCGETMETACLASS("osg::Geode"),(void*)osg_Geode_ptr.get()		,true);
_managedinstances.insert(osg_Geode_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Geode::MetaQReflect_Geode():MetaQQuickClass( "osg::Geode"){
_typeid=&typeid(osg::Geode );           qRegisterMetaType<QMLGeode>();
qmlRegisterType<QReflect_Geode>("pmoc.osg",1,0,"QReflect_Geode");
           qmlRegisterType<QMLGeode>("pmoc.osg",1,0,"QMLGeode");
       PMOCACTION("getDrawable","addDrawable","removeDrawable");
};
const std::string osg::MetaQReflect_Geode::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Geode::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Geode::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Geode::createQQModel(Instance*i){ //return new MetaQReflect_Geode_QModel(i);}
QMLGeode *ret =new QMLGeode(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::Geodeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::Geodeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Geode_pmoc.cpp"
#endif




