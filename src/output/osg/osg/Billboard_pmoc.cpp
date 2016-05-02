#include <osg/Billboard>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Billboard_pmoc.hpp>
#include <customCode/osg/Billboard_pmoc.hpp>
#include <customCode/osg/Geode_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Billboard:: addDrawable(osg::QReflect_Drawable  *p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Billboard::addDrawable : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Billboard::addDrawable : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->addDrawable(p0->_model ,*p1->_model);

}
 bool  osg::QReflect_Billboard:: addDrawable(osg::QReflect_Drawable  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Billboard::addDrawable : parameter n.0 is NULL\n"<<endl;return -1;}
emit DrawableCollectionChanged();
return _model->addDrawable(p0->_model);

}
 bool  osg::QReflect_Billboard:: computeMatrix(osg::QReflect_Matrixd  *p0 ,osg::QReflect_Vec3f  *p1 ,osg::QReflect_Vec3f  *p2)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Billboard::computeMatrix : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Billboard::computeMatrix : parameter n.1 is NULL\n"<<endl;return -1;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Billboard::computeMatrix : parameter n.2 is NULL\n"<<endl;return -1;}
return _model->computeMatrix(*p0->_model ,*p1->_model ,*p2->_model);

}
 bool  osg::QReflect_Billboard:: removeDrawable(osg::QReflect_Drawable  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Billboard::removeDrawable : parameter n.0 is NULL\n"<<endl;return -1;}
emit DrawableCollectionChanged();
return _model->removeDrawable(p0->_model);

}
 void osg::QReflect_Billboard::setAxis(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Billboard::setAxis : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAxis(*p0->_model);

}
 void osg::QReflect_Billboard::setMode(osg::QReflect_Billboard::Mode  p0){
//params checking
 _model->setMode(static_cast<osg::Billboard::Mode>(p0));
emit ModeChanged();

}
 void osg::QReflect_Billboard::setNormal(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Billboard::setNormal : parameter n.0 is NULL\n"<<endl;return;}
 _model->setNormal(*p0->_model);

}
 void osg::QReflect_Billboard::setPosition( unsigned int  p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Billboard::setPosition : parameter n.1 is NULL\n"<<endl;return;}
 _model->setPosition(p0 ,*p1->_model);

}
osg::QReflect_Billboard::Mode  osg::QReflect_Billboard::getMode()const{
//params checking
osg::QReflect_Billboard::Mode ret=static_cast<osg::QReflect_Billboard::Mode>( _model->getMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_Billboard::QReflect_Billboard(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Billboard );
           qRegisterMetaType<osg::QMLBillboard>();
           qRegisterMetaType<osg::QMLBillboard*>("pmoc.osg.QMLBillboard");
qmlRegisterType<osg::QReflect_Billboard>("pmoc.osg",1,0,"QReflect_Billboard");
           qmlRegisterType<osg::QMLBillboard>("pmoc.osg",1,0,"QMLBillboard");
};
const std::string osg::MetaQReflect_Billboard::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Billboard::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Billboard::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Billboard::createQQModel(const Instance*i){ //return new MetaQReflect_Billboard_QModel(i);}
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




