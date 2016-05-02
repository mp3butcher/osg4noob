#include <osg/AnimationPath>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/AnimationPath_pmoc.hpp>
#include <customCode/osg/AnimationPath_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixf_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_AnimationPath:: empty()const{
//params checking
return _model->empty();

}
 bool  osg::QReflect_AnimationPath:: getInverse( double  p0 ,osg::QReflect_Matrixd  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_AnimationPath::getInverse : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getInverse(p0 ,*p1->_model);

}
 bool  osg::QReflect_AnimationPath:: getInverse( double  p0 ,osg::QReflect_Matrixf  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_AnimationPath::getInverse : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getInverse(p0 ,*p1->_model);

}
 bool  osg::QReflect_AnimationPath:: getMatrix( double  p0 ,osg::QReflect_Matrixd  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_AnimationPath::getMatrix : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getMatrix(p0 ,*p1->_model);

}
 bool  osg::QReflect_AnimationPath:: getMatrix( double  p0 ,osg::QReflect_Matrixf  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_AnimationPath::getMatrix : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getMatrix(p0 ,*p1->_model);

}
 double  osg::QReflect_AnimationPath:: getFirstTime()const{
//params checking
return _model->getFirstTime();

}
 double  osg::QReflect_AnimationPath:: getLastTime()const{
//params checking
return _model->getLastTime();

}
 double  osg::QReflect_AnimationPath:: getPeriod()const{
//params checking
return _model->getPeriod();

}
 void osg::QReflect_AnimationPath::clear(){
//params checking
 _model->clear();

}
 void osg::QReflect_AnimationPath::setLoopMode(osg::QReflect_AnimationPath::LoopMode  p0){
//params checking
 _model->setLoopMode(static_cast<osg::AnimationPath::LoopMode>(p0));
emit LoopModeChanged();

}
osg::QReflect_AnimationPath::LoopMode  osg::QReflect_AnimationPath::getLoopMode()const{
//params checking
osg::QReflect_AnimationPath::LoopMode ret=static_cast<osg::QReflect_AnimationPath::LoopMode>( _model->getLoopMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_AnimationPath::QReflect_AnimationPath(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::AnimationPath*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::AnimationPath*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::AnimationPath*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_AnimationPath::~QReflect_AnimationPath( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_AnimationPath::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_AnimationPath::createInstance( ){
osg::ref_ptr<osg::AnimationPath> osg_AnimationPath_ptr	;
osg_AnimationPath_ptr = new osg::AnimationPath ()	;
Instance o(PMOCGETMETACLASS("osg::AnimationPath"),(void*)dynamic_cast<osg::Object*>( osg_AnimationPath_ptr.get()		),true);
_managedinstances.insert(osg_AnimationPath_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_AnimationPath::MetaQReflect_AnimationPath():MetaQQuickClass( "osg::AnimationPath"){
_typeid=&typeid(osg::AnimationPath );
           qRegisterMetaType<osg::QMLAnimationPath>();
           qRegisterMetaType<osg::QMLAnimationPath*>("pmoc.osg.QMLAnimationPath");
qmlRegisterType<osg::QReflect_AnimationPath>("pmoc.osg",1,0,"QReflect_AnimationPath");
           qmlRegisterType<osg::QMLAnimationPath>("pmoc.osg",1,0,"QMLAnimationPath");
};
const std::string osg::MetaQReflect_AnimationPath::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AnimationPath::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AnimationPath::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AnimationPath::createQQModel(const Instance*i){ //return new MetaQReflect_AnimationPath_QModel(i);}
QMLAnimationPath *ret =new QMLAnimationPath(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::AnimationPathis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::AnimationPathis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AnimationPath_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/AnimationPath_pmoc.hpp>
#include <customCode/osg/AnimationPath_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/AnimationPath_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_AnimationPathCallback:: getPause()const{
//params checking
return _model->getPause();

}
 bool  osg::QReflect_AnimationPathCallback:: getUseInverseMatrix()const{
//params checking
return _model->getUseInverseMatrix();

}
 double  osg::QReflect_AnimationPathCallback:: getAnimationTime()const{
//params checking
return _model->getAnimationTime();

}
 double  osg::QReflect_AnimationPathCallback:: getTimeMultiplier()const{
//params checking
return _model->getTimeMultiplier();

}
 double  osg::QReflect_AnimationPathCallback:: getTimeOffset()const{
//params checking
return _model->getTimeOffset();

}
 void osg::QReflect_AnimationPathCallback::operator()(osg::QReflect_Node  *p0 ,osg::QReflect_NodeVisitor  *p1){
//params checking
 _model->operator()(p0->_model ,p1->_model);

}
 void osg::QReflect_AnimationPathCallback::reset(){
//params checking
 _model->reset();

}
 void osg::QReflect_AnimationPathCallback::setAnimationPath(osg::QReflect_AnimationPath  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AnimationPathCallback::setAnimationPath : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAnimationPath(p0->_model);
emit AnimationPathChanged();

}
 void osg::QReflect_AnimationPathCallback::setPause( bool  p0){
//params checking
 _model->setPause(p0);
emit PauseChanged();

}
 void osg::QReflect_AnimationPathCallback::setPivotPoint(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AnimationPathCallback::setPivotPoint : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPivotPoint(*p0->_model);

}
 void osg::QReflect_AnimationPathCallback::setTimeMultiplier( double  p0){
//params checking
 _model->setTimeMultiplier(p0);
emit TimeMultiplierChanged();

}
 void osg::QReflect_AnimationPathCallback::setTimeOffset( double  p0){
//params checking
 _model->setTimeOffset(p0);
emit TimeOffsetChanged();

}
 void osg::QReflect_AnimationPathCallback::setUseInverseMatrix( bool  p0){
//params checking
 _model->setUseInverseMatrix(p0);
emit UseInverseMatrixChanged();

}
 void osg::QReflect_AnimationPathCallback::update(osg::QReflect_Node  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AnimationPathCallback::update : parameter n.0 is NULL\n"<<endl;return;}
 _model->update(*p0->_model);

}
osg::QReflect_AnimationPath*osg::QReflect_AnimationPathCallback::getAnimationPath()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getAnimationPath(),inst);
return inst.isValid()?((osg::QReflect_AnimationPath * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AnimationPath*osg::QReflect_AnimationPathCallback::getAnimationPath(){
//params checking
PMOCSAFEADDOBJECT(*_model->getAnimationPath(),inst);
return inst.isValid()?((osg::QReflect_AnimationPath * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_AnimationPathCallback::QReflect_AnimationPathCallback(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::AnimationPathCallback*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::AnimationPathCallback*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::AnimationPathCallback*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_AnimationPathCallback::~QReflect_AnimationPathCallback( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_AnimationPathCallback::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_AnimationPathCallback::createInstance( ){
osg::ref_ptr<osg::AnimationPathCallback> osg_AnimationPathCallback_ptr	;
osg_AnimationPathCallback_ptr = new osg::AnimationPathCallback ()	;
Instance o(PMOCGETMETACLASS("osg::AnimationPathCallback"),(void*)dynamic_cast<osg::Object*>( osg_AnimationPathCallback_ptr.get()		),true);
_managedinstances.insert(osg_AnimationPathCallback_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_AnimationPathCallback::MetaQReflect_AnimationPathCallback():MetaQQuickClass( "osg::AnimationPathCallback"){
_typeid=&typeid(osg::AnimationPathCallback );
           qRegisterMetaType<osg::QMLAnimationPathCallback>();
           qRegisterMetaType<osg::QMLAnimationPathCallback*>("pmoc.osg.QMLAnimationPathCallback");
qmlRegisterType<osg::QReflect_AnimationPathCallback>("pmoc.osg",1,0,"QReflect_AnimationPathCallback");
           qmlRegisterType<osg::QMLAnimationPathCallback>("pmoc.osg",1,0,"QMLAnimationPathCallback");
};
const std::string osg::MetaQReflect_AnimationPathCallback::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AnimationPathCallback::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AnimationPathCallback::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AnimationPathCallback::createQQModel(const Instance*i){ //return new MetaQReflect_AnimationPathCallback_QModel(i);}
QMLAnimationPathCallback *ret =new QMLAnimationPathCallback(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::NodeCallback *mother =dynamic_cast<osg::NodeCallback*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::NodeCallback");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::NodeCallback model for osg::AnimationPathCallbackis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::NodeCallback");
if(!cl){std::cerr<<"osg::NodeCallback QQModel for osg::AnimationPathCallbackis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AnimationPath_pmoc.cpp"
#endif




