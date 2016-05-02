#include <osg/Matrixf>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Matrixf_pmoc.hpp>
#include <customCode/osg/Matrixf_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixf_pmoc.hpp>
#include <customCode/osg/Quat_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Matrixf:: getFrustum( double  &p0 , double  &p1 , double  &p2 , double  &p3 , double  &p4 , double  &p5)const{
//params checking
return _model->getFrustum(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 bool  osg::QReflect_Matrixf:: getFrustum( float  &p0 , float  &p1 , float  &p2 , float  &p3 , float  &p4 , float  &p5)const{
//params checking
return _model->getFrustum(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 bool  osg::QReflect_Matrixf:: getOrtho( double  &p0 , double  &p1 , double  &p2 , double  &p3 , double  &p4 , double  &p5)const{
//params checking
return _model->getOrtho(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 bool  osg::QReflect_Matrixf:: getOrtho( float  &p0 , float  &p1 , float  &p2 , float  &p3 , float  &p4 , float  &p5)const{
//params checking
return _model->getOrtho(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 bool  osg::QReflect_Matrixf:: getPerspective( double  &p0 , double  &p1 , double  &p2 , double  &p3)const{
//params checking
return _model->getPerspective(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Matrixf:: getPerspective( float  &p0 , float  &p1 , float  &p2 , float  &p3)const{
//params checking
return _model->getPerspective(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Matrixf:: invert(osg::QReflect_Matrixf  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::invert : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->invert(*p0->_model);

}
 bool  osg::QReflect_Matrixf:: invert_4x3(osg::QReflect_Matrixf  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::invert_4x3 : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->invert_4x3(*p0->_model);

}
 bool  osg::QReflect_Matrixf:: invert_4x4(osg::QReflect_Matrixf  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::invert_4x4 : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->invert_4x4(*p0->_model);

}
 bool  osg::QReflect_Matrixf:: isIdentity()const{
//params checking
return _model->isIdentity();

}
 bool  osg::QReflect_Matrixf:: isNaN()const{
//params checking
return _model->isNaN();

}
 bool  osg::QReflect_Matrixf:: operator!=(osg::QReflect_Matrixf  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Matrixf:: operator<(osg::QReflect_Matrixf  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Matrixf:: operator==(osg::QReflect_Matrixf  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 bool  osg::QReflect_Matrixf:: valid()const{
//params checking
return _model->valid();

}
 float  osg::QReflect_Matrixf:: operator()( int  p0 , int  p1)const{
//params checking
return _model->operator()(p0 ,p1);

}
 float&  osg::QReflect_Matrixf:: operator()( int  p0 , int  p1){
//params checking
return _model->operator()(p0 ,p1);

}
 float*  osg::QReflect_Matrixf:: ptr(){
//params checking
return _model->ptr();

}
 int  osg::QReflect_Matrixf:: compare(osg::QReflect_Matrixf  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_Matrixf::decompose(osg::QReflect_Vec3d  *p0 ,osg::QReflect_Quat  *p1 ,osg::QReflect_Vec3d  *p2 ,osg::QReflect_Quat  *p3)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::decompose : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixf::decompose : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Matrixf::decompose : parameter n.2 is NULL\n"<<endl;return;}
if(! p3) {std::cerr<<"PMOC: osg::QReflect_Matrixf::decompose : parameter n.3 is NULL\n"<<endl;return;}
 _model->decompose(*p0->_model ,*p1->_model ,*p2->_model ,*p3->_model);

}
 void osg::QReflect_Matrixf::decompose(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Quat  *p1 ,osg::QReflect_Vec3f  *p2 ,osg::QReflect_Quat  *p3)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::decompose : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixf::decompose : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Matrixf::decompose : parameter n.2 is NULL\n"<<endl;return;}
if(! p3) {std::cerr<<"PMOC: osg::QReflect_Matrixf::decompose : parameter n.3 is NULL\n"<<endl;return;}
 _model->decompose(*p0->_model ,*p1->_model ,*p2->_model ,*p3->_model);

}
 void osg::QReflect_Matrixf::get(osg::QReflect_Quat  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::get : parameter n.0 is NULL\n"<<endl;return;}
 _model->get(*p0->_model);

}
 void osg::QReflect_Matrixf::getLookAt(osg::QReflect_Vec3d  *p0 ,osg::QReflect_Vec3d  *p1 ,osg::QReflect_Vec3d  *p2 , float  p3)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::getLookAt : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixf::getLookAt : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Matrixf::getLookAt : parameter n.2 is NULL\n"<<endl;return;}
 _model->getLookAt(*p0->_model ,*p1->_model ,*p2->_model ,p3);

}
 void osg::QReflect_Matrixf::getLookAt(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1 ,osg::QReflect_Vec3f  *p2 , float  p3)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::getLookAt : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixf::getLookAt : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Matrixf::getLookAt : parameter n.2 is NULL\n"<<endl;return;}
 _model->getLookAt(*p0->_model ,*p1->_model ,*p2->_model ,p3);

}
 void osg::QReflect_Matrixf::makeFrustum( double  p0 , double  p1 , double  p2 , double  p3 , double  p4 , double  p5){
//params checking
 _model->makeFrustum(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_Matrixf::makeIdentity(){
//params checking
 _model->makeIdentity();

}
 void osg::QReflect_Matrixf::makeLookAt(osg::QReflect_Vec3d  *p0 ,osg::QReflect_Vec3d  *p1 ,osg::QReflect_Vec3d  *p2){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeLookAt : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeLookAt : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeLookAt : parameter n.2 is NULL\n"<<endl;return;}
 _model->makeLookAt(*p0->_model ,*p1->_model ,*p2->_model);

}
 void osg::QReflect_Matrixf::makeOrtho( double  p0 , double  p1 , double  p2 , double  p3 , double  p4 , double  p5){
//params checking
 _model->makeOrtho(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_Matrixf::makeOrtho2D( double  p0 , double  p1 , double  p2 , double  p3){
//params checking
 _model->makeOrtho2D(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Matrixf::makePerspective( double  p0 , double  p1 , double  p2 , double  p3){
//params checking
 _model->makePerspective(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Matrixf::makeRotate( float  p0 , float  p1 , float  p2 , float  p3){
//params checking
 _model->makeRotate(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Matrixf::makeRotate( float  p0 ,osg::QReflect_Vec3d  *p1 , float  p2 ,osg::QReflect_Vec3d  *p3 , float  p4 ,osg::QReflect_Vec3d  *p5){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
if(! p3) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeRotate : parameter n.3 is NULL\n"<<endl;return;}
if(! p5) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeRotate : parameter n.5 is NULL\n"<<endl;return;}
 _model->makeRotate(p0 ,*p1->_model ,p2 ,*p3->_model ,p4 ,*p5->_model);

}
 void osg::QReflect_Matrixf::makeRotate( float  p0 ,osg::QReflect_Vec3d  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->makeRotate(p0 ,*p1->_model);

}
 void osg::QReflect_Matrixf::makeRotate( float  p0 ,osg::QReflect_Vec3f  *p1 , float  p2 ,osg::QReflect_Vec3f  *p3 , float  p4 ,osg::QReflect_Vec3f  *p5){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
if(! p3) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeRotate : parameter n.3 is NULL\n"<<endl;return;}
if(! p5) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeRotate : parameter n.5 is NULL\n"<<endl;return;}
 _model->makeRotate(p0 ,*p1->_model ,p2 ,*p3->_model ,p4 ,*p5->_model);

}
 void osg::QReflect_Matrixf::makeRotate( float  p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->makeRotate(p0 ,*p1->_model);

}
 void osg::QReflect_Matrixf::makeRotate(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeRotate : parameter n.0 is NULL\n"<<endl;return;}
 _model->makeRotate(*p0->_model);

}
 void osg::QReflect_Matrixf::makeRotate(osg::QReflect_Vec3d  *p0 ,osg::QReflect_Vec3d  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeRotate : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->makeRotate(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Matrixf::makeRotate(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeRotate : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->makeRotate(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Matrixf::makeScale( float  p0 , float  p1 , float  p2){
//params checking
 _model->makeScale(p0 ,p1 ,p2);

}
 void osg::QReflect_Matrixf::makeScale(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeScale : parameter n.0 is NULL\n"<<endl;return;}
 _model->makeScale(*p0->_model);

}
 void osg::QReflect_Matrixf::makeScale(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeScale : parameter n.0 is NULL\n"<<endl;return;}
 _model->makeScale(*p0->_model);

}
 void osg::QReflect_Matrixf::makeTranslate( float  p0 , float  p1 , float  p2){
//params checking
 _model->makeTranslate(p0 ,p1 ,p2);

}
 void osg::QReflect_Matrixf::makeTranslate(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeTranslate : parameter n.0 is NULL\n"<<endl;return;}
 _model->makeTranslate(*p0->_model);

}
 void osg::QReflect_Matrixf::makeTranslate(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::makeTranslate : parameter n.0 is NULL\n"<<endl;return;}
 _model->makeTranslate(*p0->_model);

}
 void osg::QReflect_Matrixf::mult(osg::QReflect_Matrixf  *p0 ,osg::QReflect_Matrixf  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::mult : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixf::mult : parameter n.1 is NULL\n"<<endl;return;}
 _model->mult(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Matrixf::operator*=(osg::QReflect_Matrixf  &p0){
//params checking
 _model->operator*=(*p0._model);

}
 void osg::QReflect_Matrixf::orthoNormalize(osg::QReflect_Matrixf  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::orthoNormalize : parameter n.0 is NULL\n"<<endl;return;}
 _model->orthoNormalize(*p0->_model);

}
 void osg::QReflect_Matrixf::postMult(osg::QReflect_Matrixf  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::postMult : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMult(*p0->_model);

}
 void osg::QReflect_Matrixf::postMultRotate(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::postMultRotate : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMultRotate(*p0->_model);

}
 void osg::QReflect_Matrixf::postMultScale(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::postMultScale : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMultScale(*p0->_model);

}
 void osg::QReflect_Matrixf::postMultScale(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::postMultScale : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMultScale(*p0->_model);

}
 void osg::QReflect_Matrixf::postMultTranslate(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::postMultTranslate : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMultTranslate(*p0->_model);

}
 void osg::QReflect_Matrixf::postMultTranslate(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::postMultTranslate : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMultTranslate(*p0->_model);

}
 void osg::QReflect_Matrixf::preMult(osg::QReflect_Matrixf  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::preMult : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMult(*p0->_model);

}
 void osg::QReflect_Matrixf::preMultRotate(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::preMultRotate : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMultRotate(*p0->_model);

}
 void osg::QReflect_Matrixf::preMultScale(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::preMultScale : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMultScale(*p0->_model);

}
 void osg::QReflect_Matrixf::preMultScale(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::preMultScale : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMultScale(*p0->_model);

}
 void osg::QReflect_Matrixf::preMultTranslate(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::preMultTranslate : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMultTranslate(*p0->_model);

}
 void osg::QReflect_Matrixf::preMultTranslate(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::preMultTranslate : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMultTranslate(*p0->_model);

}
 void osg::QReflect_Matrixf::set( double  *p0){
//params checking
 _model->set(p0);

}
 void osg::QReflect_Matrixf::set( float  *p0){
//params checking
 _model->set(p0);

}
 void osg::QReflect_Matrixf::set( float  p0 , float  p1 , float  p2 , float  p3 , float  p4 , float  p5 , float  p6 , float  p7 , float  p8 , float  p9 , float  p10 , float  p11 , float  p12 , float  p13 , float  p14 , float  p15){
//params checking
 _model->set(p0 ,p1 ,p2 ,p3 ,p4 ,p5 ,p6 ,p7 ,p8 ,p9 ,p10 ,p11 ,p12 ,p13 ,p14 ,p15);

}
 void osg::QReflect_Matrixf::set(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
 void osg::QReflect_Matrixf::set(osg::QReflect_Matrixf  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
 void osg::QReflect_Matrixf::set(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
 void osg::QReflect_Matrixf::setRotate(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::setRotate : parameter n.0 is NULL\n"<<endl;return;}
 _model->setRotate(*p0->_model);

}
 void osg::QReflect_Matrixf::setTrans( float  p0 , float  p1 , float  p2){
//params checking
 _model->setTrans(p0 ,p1 ,p2);

}
 void osg::QReflect_Matrixf::setTrans(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::setTrans : parameter n.0 is NULL\n"<<endl;return;}
 _model->setTrans(*p0->_model);

}
 void osg::QReflect_Matrixf::setTrans(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixf::setTrans : parameter n.0 is NULL\n"<<endl;return;}
 _model->setTrans(*p0->_model);

}
const  float*  osg::QReflect_Matrixf:: ptr()const{
//params checking
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Matrixf::QReflect_Matrixf(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Matrixf*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Matrixf::~QReflect_Matrixf( ){
 }
///update this according _model new state
void osg::QReflect_Matrixf::updateModel(){
}
Instance osg::MetaQReflect_Matrixf::createInstance( ){
osg::Matrixf* osg_Matrixf_ptr	;
osg_Matrixf_ptr= new osg::Matrixf()	;
Instance o(PMOCGETMETACLASS("osg::Matrixf"),(void*)osg_Matrixf_ptr	,true);
_managedinstances.insert(osg_Matrixf_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Matrixf::MetaQReflect_Matrixf():MetaQQuickClass( "osg::Matrixf"){
_typeid=&typeid(osg::Matrixf );
           qRegisterMetaType<osg::QMLMatrixf>();
           qRegisterMetaType<osg::QMLMatrixf*>("pmoc.osg.QMLMatrixf");
qmlRegisterType<osg::QReflect_Matrixf>("pmoc.osg",1,0,"QReflect_Matrixf");
           qmlRegisterType<osg::QMLMatrixf>("pmoc.osg",1,0,"QMLMatrixf");
};
const std::string osg::MetaQReflect_Matrixf::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Matrixf::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Matrixf::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Matrixf::createQQModel(const Instance*i){ //return new MetaQReflect_Matrixf_QModel(i);}
QMLMatrixf *ret =new QMLMatrixf(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Matrixf_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Matrixf_pmoc.hpp>
#include <customCode/osg/Matrixf_pmoc.hpp>
#include <customCode/osg/Matrixf_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_RefMatrixf:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_RefMatrixf::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
const  char*  osg::QReflect_RefMatrixf:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_RefMatrixf:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_RefMatrixf::clone(osg::QReflect_CopyOp  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_RefMatrixf::clone : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_RefMatrixf::cloneType()const{
//params checking
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_RefMatrixf::QReflect_RefMatrixf(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::RefMatrixf*>(i->ptr);
    _parentboxes[0]=0;
    _parentboxes[1]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_RefMatrixf::~QReflect_RefMatrixf( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
	if(_parentboxes[1])
delete _parentboxes[1];
}
///update this according _model new state
void osg::QReflect_RefMatrixf::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
	if(_parentboxes[1])
_parentboxes[1]->updateModel();
}
Instance osg::MetaQReflect_RefMatrixf::createInstance( ){
osg::ref_ptr<osg::RefMatrixf> osg_RefMatrixf_ptr	;
osg_RefMatrixf_ptr = new osg::RefMatrixf ()	;
Instance o(PMOCGETMETACLASS("osg::RefMatrixf"),(void*)osg_RefMatrixf_ptr.get()		,true);
_managedinstances.insert(osg_RefMatrixf_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_RefMatrixf::MetaQReflect_RefMatrixf():MetaQQuickClass( "osg::RefMatrixf"){
_typeid=&typeid(osg::RefMatrixf );
           qRegisterMetaType<osg::QMLRefMatrixf>();
           qRegisterMetaType<osg::QMLRefMatrixf*>("pmoc.osg.QMLRefMatrixf");
qmlRegisterType<osg::QReflect_RefMatrixf>("pmoc.osg",1,0,"QReflect_RefMatrixf");
           qmlRegisterType<osg::QMLRefMatrixf>("pmoc.osg",1,0,"QMLRefMatrixf");
};
const std::string osg::MetaQReflect_RefMatrixf::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_RefMatrixf::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_RefMatrixf::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_RefMatrixf::createQQModel(const Instance*i){ //return new MetaQReflect_RefMatrixf_QModel(i);}
QMLRefMatrixf *ret =new QMLRefMatrixf(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Matrixf *mother =dynamic_cast<osg::Matrixf*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Matrixf");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Matrixf model for osg::RefMatrixfis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Matrixf");
if(!cl){std::cerr<<"osg::Matrixf QQModel for osg::RefMatrixfis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::RefMatrixfis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::RefMatrixfis not found"<<std::endl;return ret;}
ret->_parentboxes[1]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Matrixf_pmoc.cpp"
#endif




