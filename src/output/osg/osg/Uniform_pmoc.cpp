#include <osg/Uniform>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Uniform_pmoc.hpp>
#include <customCode/osg/Uniform_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/GLExtensions_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixf_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/Uniform_pmoc.hpp>
#include <customCode/osg/Vec2d_pmoc.hpp>
#include <customCode/osg/Vec2f_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec4d_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Uniform:: getInternalArrayType(osg::QReflect_Uniform::Type  p0){
//params checking
return _model->getInternalArrayType(static_cast<osg::Uniform::Type>(p0));

}
 bool  osg::QReflect_Uniform:: get( bool  &p0 , bool  &p1 , bool  &p2 , bool  &p3)const{
//params checking
return _model->get(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Uniform:: get( bool  &p0 , bool  &p1 , bool  &p2)const{
//params checking
return _model->get(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Uniform:: get( bool  &p0 , bool  &p1)const{
//params checking
return _model->get(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: get( bool  &p0)const{
//params checking
return _model->get(p0);

}
 bool  osg::QReflect_Uniform:: get( double  &p0)const{
//params checking
return _model->get(p0);

}
 bool  osg::QReflect_Uniform:: get( float  &p0)const{
//params checking
return _model->get(p0);

}
 bool  osg::QReflect_Uniform:: get( int  &p0 , int  &p1 , int  &p2 , int  &p3)const{
//params checking
return _model->get(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Uniform:: get( int  &p0 , int  &p1 , int  &p2)const{
//params checking
return _model->get(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Uniform:: get( int  &p0 , int  &p1)const{
//params checking
return _model->get(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: get( int  &p0)const{
//params checking
return _model->get(p0);

}
 bool  osg::QReflect_Uniform:: get( unsigned int  &p0 , unsigned int  &p1 , unsigned int  &p2 , unsigned int  &p3)const{
//params checking
return _model->get(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Uniform:: get( unsigned int  &p0 , unsigned int  &p1 , unsigned int  &p2)const{
//params checking
return _model->get(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Uniform:: get( unsigned int  &p0 , unsigned int  &p1)const{
//params checking
return _model->get(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: get( unsigned int  &p0)const{
//params checking
return _model->get(p0);

}
 bool  osg::QReflect_Uniform:: get(osg::QReflect_Matrixd  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::get : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->get(*p0->_model);

}
 bool  osg::QReflect_Uniform:: get(osg::QReflect_Matrixf  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::get : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->get(*p0->_model);

}
 bool  osg::QReflect_Uniform:: get(osg::QReflect_Vec2d  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::get : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->get(*p0->_model);

}
 bool  osg::QReflect_Uniform:: get(osg::QReflect_Vec2f  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::get : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->get(*p0->_model);

}
 bool  osg::QReflect_Uniform:: get(osg::QReflect_Vec3d  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::get : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->get(*p0->_model);

}
 bool  osg::QReflect_Uniform:: get(osg::QReflect_Vec3f  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::get : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->get(*p0->_model);

}
 bool  osg::QReflect_Uniform:: get(osg::QReflect_Vec4d  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::get : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->get(*p0->_model);

}
 bool  osg::QReflect_Uniform:: get(osg::QReflect_Vec4f  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::get : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->get(*p0->_model);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , bool  &p1 , bool  &p2 , bool  &p3 , bool  &p4)const{
//params checking
return _model->getElement(p0 ,p1 ,p2 ,p3 ,p4);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , bool  &p1 , bool  &p2 , bool  &p3)const{
//params checking
return _model->getElement(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , bool  &p1 , bool  &p2)const{
//params checking
return _model->getElement(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , bool  &p1)const{
//params checking
return _model->getElement(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , double  &p1)const{
//params checking
return _model->getElement(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , float  &p1)const{
//params checking
return _model->getElement(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , int  &p1 , int  &p2 , int  &p3 , int  &p4)const{
//params checking
return _model->getElement(p0 ,p1 ,p2 ,p3 ,p4);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , int  &p1 , int  &p2 , int  &p3)const{
//params checking
return _model->getElement(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , int  &p1 , int  &p2)const{
//params checking
return _model->getElement(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , int  &p1)const{
//params checking
return _model->getElement(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , unsigned int  &p1 , unsigned int  &p2 , unsigned int  &p3 , unsigned int  &p4)const{
//params checking
return _model->getElement(p0 ,p1 ,p2 ,p3 ,p4);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , unsigned int  &p1 , unsigned int  &p2 , unsigned int  &p3)const{
//params checking
return _model->getElement(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , unsigned int  &p1 , unsigned int  &p2)const{
//params checking
return _model->getElement(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 , unsigned int  &p1)const{
//params checking
return _model->getElement(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 ,osg::QReflect_Matrixd  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::getElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 ,osg::QReflect_Matrixf  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::getElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 ,osg::QReflect_Vec2d  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::getElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 ,osg::QReflect_Vec2f  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::getElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 ,osg::QReflect_Vec3d  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::getElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 ,osg::QReflect_Vec3f  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::getElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 ,osg::QReflect_Vec4d  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::getElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: getElement( unsigned int  p0 ,osg::QReflect_Vec4f  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::getElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: operator!=(osg::QReflect_Uniform  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Uniform:: operator<(osg::QReflect_Uniform  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Uniform:: operator==(osg::QReflect_Uniform  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 bool  osg::QReflect_Uniform:: set( bool  p0 , bool  p1 , bool  p2 , bool  p3){
//params checking
return _model->set(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Uniform:: set( bool  p0 , bool  p1 , bool  p2){
//params checking
return _model->set(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Uniform:: set( bool  p0 , bool  p1){
//params checking
return _model->set(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: set( bool  p0){
//params checking
return _model->set(p0);

}
 bool  osg::QReflect_Uniform:: set( double  p0){
//params checking
return _model->set(p0);

}
 bool  osg::QReflect_Uniform:: set( float  p0){
//params checking
return _model->set(p0);

}
 bool  osg::QReflect_Uniform:: set( int  p0 , int  p1 , int  p2 , int  p3){
//params checking
return _model->set(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Uniform:: set( int  p0 , int  p1 , int  p2){
//params checking
return _model->set(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Uniform:: set( int  p0 , int  p1){
//params checking
return _model->set(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: set( int  p0){
//params checking
return _model->set(p0);

}
 bool  osg::QReflect_Uniform:: set( unsigned int  p0 , unsigned int  p1 , unsigned int  p2 , unsigned int  p3){
//params checking
return _model->set(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Uniform:: set( unsigned int  p0 , unsigned int  p1 , unsigned int  p2){
//params checking
return _model->set(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Uniform:: set( unsigned int  p0 , unsigned int  p1){
//params checking
return _model->set(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: set( unsigned int  p0){
//params checking
return _model->set(p0);

}
 bool  osg::QReflect_Uniform:: set(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::set : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->set(*p0->_model);

}
 bool  osg::QReflect_Uniform:: set(osg::QReflect_Matrixf  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::set : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->set(*p0->_model);

}
 bool  osg::QReflect_Uniform:: set(osg::QReflect_Vec2d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::set : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->set(*p0->_model);

}
 bool  osg::QReflect_Uniform:: set(osg::QReflect_Vec2f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::set : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->set(*p0->_model);

}
 bool  osg::QReflect_Uniform:: set(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::set : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->set(*p0->_model);

}
 bool  osg::QReflect_Uniform:: set(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::set : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->set(*p0->_model);

}
 bool  osg::QReflect_Uniform:: set(osg::QReflect_Vec4d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::set : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->set(*p0->_model);

}
 bool  osg::QReflect_Uniform:: set(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::set : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->set(*p0->_model);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , bool  p1 , bool  p2 , bool  p3 , bool  p4){
//params checking
return _model->setElement(p0 ,p1 ,p2 ,p3 ,p4);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , bool  p1 , bool  p2 , bool  p3){
//params checking
return _model->setElement(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , bool  p1 , bool  p2){
//params checking
return _model->setElement(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , bool  p1){
//params checking
return _model->setElement(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , double  p1){
//params checking
return _model->setElement(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , float  p1){
//params checking
return _model->setElement(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , int  p1 , int  p2 , int  p3 , int  p4){
//params checking
return _model->setElement(p0 ,p1 ,p2 ,p3 ,p4);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , int  p1 , int  p2 , int  p3){
//params checking
return _model->setElement(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , int  p1 , int  p2){
//params checking
return _model->setElement(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , int  p1){
//params checking
return _model->setElement(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , unsigned int  p1 , unsigned int  p2 , unsigned int  p3 , unsigned int  p4){
//params checking
return _model->setElement(p0 ,p1 ,p2 ,p3 ,p4);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , unsigned int  p1 , unsigned int  p2 , unsigned int  p3){
//params checking
return _model->setElement(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , unsigned int  p1 , unsigned int  p2){
//params checking
return _model->setElement(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 , unsigned int  p1){
//params checking
return _model->setElement(p0 ,p1);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 ,osg::QReflect_Matrixd  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::setElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->setElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 ,osg::QReflect_Matrixf  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::setElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->setElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 ,osg::QReflect_Vec2d  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::setElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->setElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 ,osg::QReflect_Vec2f  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::setElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->setElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 ,osg::QReflect_Vec3d  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::setElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->setElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::setElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->setElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 ,osg::QReflect_Vec4d  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::setElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->setElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: setElement( unsigned int  p0 ,osg::QReflect_Vec4f  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Uniform::setElement : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->setElement(p0 ,*p1->_model);

}
 bool  osg::QReflect_Uniform:: setType(osg::QReflect_Uniform::Type  p0){
//params checking
emit TypeChanged();
return _model->setType(static_cast<osg::Uniform::Type>(p0));

}
 int  osg::QReflect_Uniform:: compare(osg::QReflect_Uniform  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 int  osg::QReflect_Uniform:: compareData(osg::QReflect_Uniform  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::compareData : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compareData(*p0->_model);

}
 int  osg::QReflect_Uniform:: getTypeNumComponents(osg::QReflect_Uniform::Type  p0){
//params checking
return _model->getTypeNumComponents(static_cast<osg::Uniform::Type>(p0));

}
 unsigned int  osg::QReflect_Uniform:: getInternalArrayNumElements()const{
//params checking
return _model->getInternalArrayNumElements();

}
 unsigned int  osg::QReflect_Uniform:: getModifiedCount()const{
//params checking
return _model->getModifiedCount();

}
 unsigned int  osg::QReflect_Uniform:: getNameID()const{
//params checking
return _model->getNameID();

}
 unsigned int  osg::QReflect_Uniform:: getNameID(const  QString  &p0){
//params checking
return _model->getNameID(std::string(p0.toStdString()));

}
 unsigned int  osg::QReflect_Uniform:: getNumElements()const{
//params checking
return _model->getNumElements();

}
 unsigned int  osg::QReflect_Uniform:: getNumParents()const{
//params checking
return _model->getNumParents();

}
 void osg::QReflect_Uniform::apply(osg::QReflect_GLExtensions  *p0 , GLint  p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(p0->_model ,p1);

}
 void osg::QReflect_Uniform::copyData(osg::QReflect_Uniform  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::copyData : parameter n.0 is NULL\n"<<endl;return;}
 _model->copyData(*p0->_model);

}
 void osg::QReflect_Uniform::dirty(){
//params checking
 _model->dirty();

}
 void osg::QReflect_Uniform::setEventCallback(osg::QReflect_UniformCallback  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::setEventCallback : parameter n.0 is NULL\n"<<endl;return;}
 _model->setEventCallback(p0->_model);
emit EventCallbackChanged();

}
 void osg::QReflect_Uniform::setModifiedCount( unsigned int  p0){
//params checking
 _model->setModifiedCount(p0);
emit ModifiedCountChanged();

}
 void osg::QReflect_Uniform::setName(const  QString  &p0){
//params checking
 _model->setName(std::string(p0.toStdString()));

}
 void osg::QReflect_Uniform::setNumElements( unsigned int  p0){
//params checking
 _model->setNumElements(p0);
emit NumElementsChanged();

}
 void osg::QReflect_Uniform::setUpdateCallback(osg::QReflect_UniformCallback  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Uniform::setUpdateCallback : parameter n.0 is NULL\n"<<endl;return;}
 _model->setUpdateCallback(p0->_model);
emit UpdateCallbackChanged();

}
const  char*  osg::QReflect_Uniform:: getTypename(osg::QReflect_Uniform::Type  p0){
//params checking
return _model->getTypename(static_cast<osg::Uniform::Type>(p0));

}
osg::QReflect_StateSet*osg::QReflect_Uniform::getParent( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getParent(p0),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osg::QReflect_Uniform::getParent( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getParent(p0),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_Uniform::asUniform()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asUniform(),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_Uniform::asUniform(){
//params checking
PMOCSAFEADDOBJECT(*_model->asUniform(),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform::Type  osg::QReflect_Uniform::getGlApiType(osg::QReflect_Uniform::Type  p0){
//params checking
osg::QReflect_Uniform::Type ret=static_cast<osg::QReflect_Uniform::Type>( _model->getGlApiType(static_cast<osg::Uniform::Type>(p0)));return  ret;

}
osg::QReflect_Uniform::Type  osg::QReflect_Uniform::getType()const{
//params checking
osg::QReflect_Uniform::Type ret=static_cast<osg::QReflect_Uniform::Type>( _model->getType());return  ret;

}
osg::QReflect_Uniform::Type  osg::QReflect_Uniform::getTypeId(const  QString  &p0){
//params checking
osg::QReflect_Uniform::Type ret=static_cast<osg::QReflect_Uniform::Type>( _model->getTypeId(std::string(p0.toStdString())));return  ret;

}
osg::QReflect_UniformCallback*osg::QReflect_Uniform::getEventCallback()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getEventCallback(),inst);
return inst.isValid()?((osg::QReflect_UniformCallback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_UniformCallback*osg::QReflect_Uniform::getEventCallback(){
//params checking
PMOCSAFEADDOBJECT(*_model->getEventCallback(),inst);
return inst.isValid()?((osg::QReflect_UniformCallback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_UniformCallback*osg::QReflect_Uniform::getUpdateCallback()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getUpdateCallback(),inst);
return inst.isValid()?((osg::QReflect_UniformCallback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_UniformCallback*osg::QReflect_Uniform::getUpdateCallback(){
//params checking
PMOCSAFEADDOBJECT(*_model->getUpdateCallback(),inst);
return inst.isValid()?((osg::QReflect_UniformCallback * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Uniform::QReflect_Uniform(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Uniform*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Uniform::~QReflect_Uniform( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Uniform::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Uniform::createInstance( ){
osg::ref_ptr<osg::Uniform> osg_Uniform_ptr	;
osg_Uniform_ptr = new osg::Uniform ()	;
Instance o(PMOCGETMETACLASS("osg::Uniform"),(void*)osg_Uniform_ptr.get()		,true);
_managedinstances.insert(osg_Uniform_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Uniform::MetaQReflect_Uniform():MetaQQuickClass( "osg::Uniform"){
_typeid=&typeid(osg::Uniform );
           qRegisterMetaType<osg::QMLUniform>();
           qRegisterMetaType<osg::QMLUniform*>("pmoc.osg.QMLUniform");
qmlRegisterType<osg::QReflect_Uniform>("pmoc.osg",1,0,"QReflect_Uniform");
           qmlRegisterType<osg::QMLUniform>("pmoc.osg",1,0,"QMLUniform");
};
const std::string osg::MetaQReflect_Uniform::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Uniform::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Uniform::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Uniform::createQQModel(const Instance*i){ //return new MetaQReflect_Uniform_QModel(i);}
QMLUniform *ret =new QMLUniform(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::Uniformis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::Uniformis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Uniform_pmoc.cpp"
#endif




