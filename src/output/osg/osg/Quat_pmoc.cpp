#include <osg/Quat>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Quat_pmoc.hpp>
#include <customCode/osg/Quat_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixf_pmoc.hpp>
#include <customCode/osg/Quat_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec4d_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Quat:: operator!=(osg::QReflect_Quat  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Quat:: operator<(osg::QReflect_Quat  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Quat:: operator==(osg::QReflect_Quat  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 bool  osg::QReflect_Quat:: zeroRotation()const{
//params checking
return _model->zeroRotation();

}
 double  osg::QReflect_Quat:: length()const{
//params checking
return _model->length();

}
 double  osg::QReflect_Quat:: length2()const{
//params checking
return _model->length2();

}
 double  osg::QReflect_Quat:: operator[]( int  p0)const{
//params checking
return _model->operator[](p0);

}
 double  osg::QReflect_Quat:: w()const{
//params checking
return _model->w();

}
 double  osg::QReflect_Quat:: x()const{
//params checking
return _model->x();

}
 double  osg::QReflect_Quat:: y()const{
//params checking
return _model->y();

}
 double  osg::QReflect_Quat:: z()const{
//params checking
return _model->z();

}
 double&  osg::QReflect_Quat:: operator[]( int  p0){
//params checking
return _model->operator[](p0);

}
 double&  osg::QReflect_Quat:: w(){
//params checking
return _model->w();

}
 double&  osg::QReflect_Quat:: x(){
//params checking
return _model->x();

}
 double&  osg::QReflect_Quat:: y(){
//params checking
return _model->y();

}
 double&  osg::QReflect_Quat:: z(){
//params checking
return _model->z();

}
 void osg::QReflect_Quat::get(osg::QReflect_Matrixd  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Quat::get : parameter n.0 is NULL\n"<<endl;return;}
 _model->get(*p0->_model);

}
 void osg::QReflect_Quat::get(osg::QReflect_Matrixf  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Quat::get : parameter n.0 is NULL\n"<<endl;return;}
 _model->get(*p0->_model);

}
 void osg::QReflect_Quat::getRotate( double  &p0 , double  &p1 , double  &p2 , double  &p3)const{
//params checking
 _model->getRotate(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Quat::getRotate( double  &p0 ,osg::QReflect_Vec3d  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Quat::getRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->getRotate(p0 ,*p1->_model);

}
 void osg::QReflect_Quat::getRotate( double  &p0 ,osg::QReflect_Vec3f  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Quat::getRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->getRotate(p0 ,*p1->_model);

}
 void osg::QReflect_Quat::makeRotate( double  p0 , double  p1 , double  p2 , double  p3){
//params checking
 _model->makeRotate(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Quat::makeRotate( double  p0 ,osg::QReflect_Vec3d  *p1 , double  p2 ,osg::QReflect_Vec3d  *p3 , double  p4 ,osg::QReflect_Vec3d  *p5){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
if(! p3) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate : parameter n.3 is NULL\n"<<endl;return;}
if(! p5) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate : parameter n.5 is NULL\n"<<endl;return;}
 _model->makeRotate(p0 ,*p1->_model ,p2 ,*p3->_model ,p4 ,*p5->_model);

}
 void osg::QReflect_Quat::makeRotate( double  p0 ,osg::QReflect_Vec3d  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->makeRotate(p0 ,*p1->_model);

}
 void osg::QReflect_Quat::makeRotate( double  p0 ,osg::QReflect_Vec3f  *p1 , double  p2 ,osg::QReflect_Vec3f  *p3 , double  p4 ,osg::QReflect_Vec3f  *p5){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
if(! p3) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate : parameter n.3 is NULL\n"<<endl;return;}
if(! p5) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate : parameter n.5 is NULL\n"<<endl;return;}
 _model->makeRotate(p0 ,*p1->_model ,p2 ,*p3->_model ,p4 ,*p5->_model);

}
 void osg::QReflect_Quat::makeRotate( double  p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->makeRotate(p0 ,*p1->_model);

}
 void osg::QReflect_Quat::makeRotate(osg::QReflect_Vec3d  *p0 ,osg::QReflect_Vec3d  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->makeRotate(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Quat::makeRotate(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->makeRotate(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Quat::makeRotate_original(osg::QReflect_Vec3d  *p0 ,osg::QReflect_Vec3d  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate_original : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Quat::makeRotate_original : parameter n.1 is NULL\n"<<endl;return;}
 _model->makeRotate_original(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Quat::set( double  p0 , double  p1 , double  p2 , double  p3){
//params checking
 _model->set(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Quat::set(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Quat::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
 void osg::QReflect_Quat::set(osg::QReflect_Matrixf  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Quat::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
 void osg::QReflect_Quat::set(osg::QReflect_Vec4d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Quat::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
 void osg::QReflect_Quat::set(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Quat::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
 void osg::QReflect_Quat::slerp( double  p0 ,osg::QReflect_Quat  *p1 ,osg::QReflect_Quat  *p2){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Quat::slerp : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Quat::slerp : parameter n.2 is NULL\n"<<endl;return;}
 _model->slerp(p0 ,*p1->_model ,*p2->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Quat::QReflect_Quat(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Quat*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Quat::~QReflect_Quat( ){
 }
///update this according _model new state
void osg::QReflect_Quat::updateModel(){
}
Instance osg::MetaQReflect_Quat::createInstance( ){
osg::Quat* osg_Quat_ptr	;
osg_Quat_ptr= new osg::Quat()	;
Instance o(PMOCGETMETACLASS("osg::Quat"),(void*)osg_Quat_ptr	,true);
_managedinstances.insert(osg_Quat_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Quat::MetaQReflect_Quat():MetaQQuickClass( "osg::Quat"){
_typeid=&typeid(osg::Quat );
           qRegisterMetaType<osg::QMLQuat>();
           qRegisterMetaType<osg::QMLQuat*>("pmoc.osg.QMLQuat");
qmlRegisterType<osg::QReflect_Quat>("pmoc.osg",1,0,"QReflect_Quat");
           qmlRegisterType<osg::QMLQuat>("pmoc.osg",1,0,"QMLQuat");
};
const std::string osg::MetaQReflect_Quat::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Quat::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Quat::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Quat::createQQModel(const Instance*i){ //return new MetaQReflect_Quat_QModel(i);}
QMLQuat *ret =new QMLQuat(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Quat_pmoc.cpp"
#endif




