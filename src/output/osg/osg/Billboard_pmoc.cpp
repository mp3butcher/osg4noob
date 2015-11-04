#include <osg/Billboard>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Billboard_pmoc.hpp>
#include <customCode/osg/Billboard_pmoc.hpp>
#include <customCode/osg/Geode_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <osg/Drawable>
using namespace pmoc;
 bool  osg::QReflect_Billboard::addDrawable(osg::QReflect_Drawable *p0 ,osg::QReflect_Vec3f *p1){
return _model->addDrawable(p0->_model ,*p1->_model);

}
 void osg::QReflect_Billboard::setAxis(osg::QReflect_Vec3f *p0){
 _model->setAxis(*p0->_model);

}
 void osg::QReflect_Billboard::setMode(osg::QReflect_Billboard::Mode p0){
 _model->setMode(static_cast<osg::Billboard::Mode>(p0));

}
 void osg::QReflect_Billboard::setNormal(osg::QReflect_Vec3f *p0){
 _model->setNormal(*p0->_model);

}
 void osg::QReflect_Billboard::setPosition( unsigned int p0 ,osg::QReflect_Vec3f *p1){
 _model->setPosition(p0 ,*p1->_model);

}
osg::QReflect_Billboard::Mode  osg::QReflect_Billboard::getMode()const{
osg::QReflect_Billboard::Mode ret=static_cast<osg::QReflect_Billboard::Mode>( _model->getMode());return  ret;

}
void   osg::QReflect_Billboard::addDrawable( osg::QReflect_Drawable *par){
_model->addDrawable(par->_model);
}
void   osg::QReflect_Billboard::pmoc_reverse_addDrawable( osg::QReflect_Drawable *par){
_model->removeDrawable(par->_model);
emit DrawableCollectionChanged();
}

///DefaultConstructor////////////////
osg::QReflect_Billboard::QReflect_Billboard(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Billboard*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Billboard::~QReflect_Billboard( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Billboard::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Billboard::createInstance( ){
osg::ref_ptr<osg::Billboard> osg_Billboard_ptr	;
osg_Billboard_ptr = new osg::Billboard ()	;
Instance o(PMOCGETMETACLASS("osg::Billboard"),(void*)osg_Billboard_ptr.get()		,true);
_managedinstances.insert(osg_Billboard_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Billboard::MetaQReflect_Billboard():MetaQQuickClass( "osg::Billboard"){
_typeid=&typeid(osg::Billboard );           qRegisterMetaType<QMLBillboard>();
qmlRegisterType<QReflect_Billboard>("pmoc.osg",1,0,"QReflect_Billboard");
           qmlRegisterType<QMLBillboard>("pmoc.osg",1,0,"QMLBillboard");
       PMOCACTION("getDrawable","addDrawable","removeDrawable");
};
const std::string osg::MetaQReflect_Billboard::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Billboard::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Billboard::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Billboard::createQQModel(Instance*i){ //return new MetaQReflect_Billboard_QModel(i);}
QMLBillboard *ret =new QMLBillboard(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Geode *mother =dynamic_cast<osg::Geode*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Geode");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Geode model for osg::Billboardis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Geode");
if(!cl){std::cerr<<"osg::Geode QQModel for osg::Billboardis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Billboard_pmoc.cpp"
#endif




