#include <osg/Matrixd>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixf_pmoc.hpp>
#include <customCode/osg/Quat_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Matrixd:: getFrustum( double  &p0 , double  &p1 , double  &p2 , double  &p3 , double  &p4 , double  &p5)const{
//params checking
return _model->getFrustum(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 bool  osg::QReflect_Matrixd:: getFrustum( float  &p0 , float  &p1 , float  &p2 , float  &p3 , float  &p4 , float  &p5)const{
//params checking
return _model->getFrustum(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 bool  osg::QReflect_Matrixd:: getOrtho( double  &p0 , double  &p1 , double  &p2 , double  &p3 , double  &p4 , double  &p5)const{
//params checking
return _model->getOrtho(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 bool  osg::QReflect_Matrixd:: getOrtho( float  &p0 , float  &p1 , float  &p2 , float  &p3 , float  &p4 , float  &p5)const{
//params checking
return _model->getOrtho(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 bool  osg::QReflect_Matrixd:: getPerspective( double  &p0 , double  &p1 , double  &p2 , double  &p3)const{
//params checking
return _model->getPerspective(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Matrixd:: getPerspective( float  &p0 , float  &p1 , float  &p2 , float  &p3)const{
//params checking
return _model->getPerspective(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Matrixd:: invert(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::invert : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->invert(*p0->_model);

}
 bool  osg::QReflect_Matrixd:: invert_4x3(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::invert_4x3 : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->invert_4x3(*p0->_model);

}
 bool  osg::QReflect_Matrixd:: invert_4x4(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::invert_4x4 : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->invert_4x4(*p0->_model);

}
 bool  osg::QReflect_Matrixd:: isIdentity()const{
//params checking
return _model->isIdentity();

}
 bool  osg::QReflect_Matrixd:: isNaN()const{
//params checking
return _model->isNaN();

}
 bool  osg::QReflect_Matrixd:: operator!=(osg::QReflect_Matrixd  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Matrixd:: operator<(osg::QReflect_Matrixd  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Matrixd:: operator==(osg::QReflect_Matrixd  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 bool  osg::QReflect_Matrixd:: valid()const{
//params checking
return _model->valid();

}
 double  osg::QReflect_Matrixd:: operator()( int  p0 , int  p1)const{
//params checking
return _model->operator()(p0 ,p1);

}
 double&  osg::QReflect_Matrixd:: operator()( int  p0 , int  p1){
//params checking
return _model->operator()(p0 ,p1);

}
 double*  osg::QReflect_Matrixd:: ptr(){
//params checking
return _model->ptr();

}
 int  osg::QReflect_Matrixd:: compare(osg::QReflect_Matrixd  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_Matrixd::decompose(osg::QReflect_Vec3d  *p0 ,osg::QReflect_Quat  *p1 ,osg::QReflect_Vec3d  *p2 ,osg::QReflect_Quat  *p3)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::decompose : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixd::decompose : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Matrixd::decompose : parameter n.2 is NULL\n"<<endl;return;}
if(! p3) {std::cerr<<"PMOC: osg::QReflect_Matrixd::decompose : parameter n.3 is NULL\n"<<endl;return;}
 _model->decompose(*p0->_model ,*p1->_model ,*p2->_model ,*p3->_model);

}
 void osg::QReflect_Matrixd::decompose(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Quat  *p1 ,osg::QReflect_Vec3f  *p2 ,osg::QReflect_Quat  *p3)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::decompose : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixd::decompose : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Matrixd::decompose : parameter n.2 is NULL\n"<<endl;return;}
if(! p3) {std::cerr<<"PMOC: osg::QReflect_Matrixd::decompose : parameter n.3 is NULL\n"<<endl;return;}
 _model->decompose(*p0->_model ,*p1->_model ,*p2->_model ,*p3->_model);

}
 void osg::QReflect_Matrixd::get(osg::QReflect_Quat  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::get : parameter n.0 is NULL\n"<<endl;return;}
 _model->get(*p0->_model);

}
 void osg::QReflect_Matrixd::getLookAt(osg::QReflect_Vec3d  *p0 ,osg::QReflect_Vec3d  *p1 ,osg::QReflect_Vec3d  *p2 , double  p3)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::getLookAt : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixd::getLookAt : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Matrixd::getLookAt : parameter n.2 is NULL\n"<<endl;return;}
 _model->getLookAt(*p0->_model ,*p1->_model ,*p2->_model ,p3);

}
 void osg::QReflect_Matrixd::getLookAt(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1 ,osg::QReflect_Vec3f  *p2 , double  p3)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::getLookAt : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixd::getLookAt : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Matrixd::getLookAt : parameter n.2 is NULL\n"<<endl;return;}
 _model->getLookAt(*p0->_model ,*p1->_model ,*p2->_model ,p3);

}
 void osg::QReflect_Matrixd::makeFrustum( double  p0 , double  p1 , double  p2 , double  p3 , double  p4 , double  p5){
//params checking
 _model->makeFrustum(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_Matrixd::makeIdentity(){
//params checking
 _model->makeIdentity();

}
 void osg::QReflect_Matrixd::makeLookAt(osg::QReflect_Vec3d  *p0 ,osg::QReflect_Vec3d  *p1 ,osg::QReflect_Vec3d  *p2){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeLookAt : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeLookAt : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeLookAt : parameter n.2 is NULL\n"<<endl;return;}
 _model->makeLookAt(*p0->_model ,*p1->_model ,*p2->_model);

}
 void osg::QReflect_Matrixd::makeOrtho( double  p0 , double  p1 , double  p2 , double  p3 , double  p4 , double  p5){
//params checking
 _model->makeOrtho(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_Matrixd::makeOrtho2D( double  p0 , double  p1 , double  p2 , double  p3){
//params checking
 _model->makeOrtho2D(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Matrixd::makePerspective( double  p0 , double  p1 , double  p2 , double  p3){
//params checking
 _model->makePerspective(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Matrixd::makeRotate( double  p0 , double  p1 , double  p2 , double  p3){
//params checking
 _model->makeRotate(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Matrixd::makeRotate( double  p0 ,osg::QReflect_Vec3d  *p1 , double  p2 ,osg::QReflect_Vec3d  *p3 , double  p4 ,osg::QReflect_Vec3d  *p5){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
if(! p3) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeRotate : parameter n.3 is NULL\n"<<endl;return;}
if(! p5) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeRotate : parameter n.5 is NULL\n"<<endl;return;}
 _model->makeRotate(p0 ,*p1->_model ,p2 ,*p3->_model ,p4 ,*p5->_model);

}
 void osg::QReflect_Matrixd::makeRotate( double  p0 ,osg::QReflect_Vec3d  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->makeRotate(p0 ,*p1->_model);

}
 void osg::QReflect_Matrixd::makeRotate( double  p0 ,osg::QReflect_Vec3f  *p1 , double  p2 ,osg::QReflect_Vec3f  *p3 , double  p4 ,osg::QReflect_Vec3f  *p5){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
if(! p3) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeRotate : parameter n.3 is NULL\n"<<endl;return;}
if(! p5) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeRotate : parameter n.5 is NULL\n"<<endl;return;}
 _model->makeRotate(p0 ,*p1->_model ,p2 ,*p3->_model ,p4 ,*p5->_model);

}
 void osg::QReflect_Matrixd::makeRotate( double  p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->makeRotate(p0 ,*p1->_model);

}
 void osg::QReflect_Matrixd::makeRotate(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeRotate : parameter n.0 is NULL\n"<<endl;return;}
 _model->makeRotate(*p0->_model);

}
 void osg::QReflect_Matrixd::makeRotate(osg::QReflect_Vec3d  *p0 ,osg::QReflect_Vec3d  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeRotate : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->makeRotate(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Matrixd::makeRotate(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeRotate : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeRotate : parameter n.1 is NULL\n"<<endl;return;}
 _model->makeRotate(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Matrixd::makeScale( double  p0 , double  p1 , double  p2){
//params checking
 _model->makeScale(p0 ,p1 ,p2);

}
 void osg::QReflect_Matrixd::makeScale(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeScale : parameter n.0 is NULL\n"<<endl;return;}
 _model->makeScale(*p0->_model);

}
 void osg::QReflect_Matrixd::makeScale(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeScale : parameter n.0 is NULL\n"<<endl;return;}
 _model->makeScale(*p0->_model);

}
 void osg::QReflect_Matrixd::makeTranslate( double  p0 , double  p1 , double  p2){
//params checking
 _model->makeTranslate(p0 ,p1 ,p2);

}
 void osg::QReflect_Matrixd::makeTranslate(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeTranslate : parameter n.0 is NULL\n"<<endl;return;}
 _model->makeTranslate(*p0->_model);

}
 void osg::QReflect_Matrixd::makeTranslate(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::makeTranslate : parameter n.0 is NULL\n"<<endl;return;}
 _model->makeTranslate(*p0->_model);

}
 void osg::QReflect_Matrixd::mult(osg::QReflect_Matrixd  *p0 ,osg::QReflect_Matrixd  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::mult : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Matrixd::mult : parameter n.1 is NULL\n"<<endl;return;}
 _model->mult(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Matrixd::operator*=(osg::QReflect_Matrixd  &p0){
//params checking
 _model->operator*=(*p0._model);

}
 void osg::QReflect_Matrixd::orthoNormalize(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::orthoNormalize : parameter n.0 is NULL\n"<<endl;return;}
 _model->orthoNormalize(*p0->_model);

}
 void osg::QReflect_Matrixd::postMult(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::postMult : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMult(*p0->_model);

}
 void osg::QReflect_Matrixd::postMultRotate(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::postMultRotate : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMultRotate(*p0->_model);

}
 void osg::QReflect_Matrixd::postMultScale(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::postMultScale : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMultScale(*p0->_model);

}
 void osg::QReflect_Matrixd::postMultScale(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::postMultScale : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMultScale(*p0->_model);

}
 void osg::QReflect_Matrixd::postMultTranslate(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::postMultTranslate : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMultTranslate(*p0->_model);

}
 void osg::QReflect_Matrixd::postMultTranslate(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::postMultTranslate : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMultTranslate(*p0->_model);

}
 void osg::QReflect_Matrixd::preMult(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::preMult : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMult(*p0->_model);

}
 void osg::QReflect_Matrixd::preMultRotate(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::preMultRotate : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMultRotate(*p0->_model);

}
 void osg::QReflect_Matrixd::preMultScale(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::preMultScale : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMultScale(*p0->_model);

}
 void osg::QReflect_Matrixd::preMultScale(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::preMultScale : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMultScale(*p0->_model);

}
 void osg::QReflect_Matrixd::preMultTranslate(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::preMultTranslate : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMultTranslate(*p0->_model);

}
 void osg::QReflect_Matrixd::preMultTranslate(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::preMultTranslate : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMultTranslate(*p0->_model);

}
 void osg::QReflect_Matrixd::set( double  *p0){
//params checking
 _model->set(p0);

}
 void osg::QReflect_Matrixd::set( double  p0 , double  p1 , double  p2 , double  p3 , double  p4 , double  p5 , double  p6 , double  p7 , double  p8 , double  p9 , double  p10 , double  p11 , double  p12 , double  p13 , double  p14 , double  p15){
//params checking
 _model->set(p0 ,p1 ,p2 ,p3 ,p4 ,p5 ,p6 ,p7 ,p8 ,p9 ,p10 ,p11 ,p12 ,p13 ,p14 ,p15);

}
 void osg::QReflect_Matrixd::set( float  *p0){
//params checking
 _model->set(p0);

}
 void osg::QReflect_Matrixd::set(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
 void osg::QReflect_Matrixd::set(osg::QReflect_Matrixf  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
 void osg::QReflect_Matrixd::set(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
 void osg::QReflect_Matrixd::setRotate(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::setRotate : parameter n.0 is NULL\n"<<endl;return;}
 _model->setRotate(*p0->_model);

}
 void osg::QReflect_Matrixd::setTrans( double  p0 , double  p1 , double  p2){
//params checking
 _model->setTrans(p0 ,p1 ,p2);

}
 void osg::QReflect_Matrixd::setTrans(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::setTrans : parameter n.0 is NULL\n"<<endl;return;}
 _model->setTrans(*p0->_model);

}
 void osg::QReflect_Matrixd::setTrans(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Matrixd::setTrans : parameter n.0 is NULL\n"<<endl;return;}
 _model->setTrans(*p0->_model);

}
const  double*  osg::QReflect_Matrixd:: ptr()const{
//params checking
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Matrixd::QReflect_Matrixd(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Matrixd*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Matrixd::~QReflect_Matrixd( ){
 }
///update this according _model new state
void osg::QReflect_Matrixd::updateModel(){
}
Instance osg::MetaQReflect_Matrixd::createInstance( ){
osg::Matrixd* osg_Matrixd_ptr	;
osg_Matrixd_ptr= new osg::Matrixd()	;
Instance o(PMOCGETMETACLASS("osg::Matrixd"),(void*)osg_Matrixd_ptr	,true);
_managedinstances.insert(osg_Matrixd_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Matrixd::MetaQReflect_Matrixd():MetaQQuickClass( "osg::Matrixd"){
_typeid=&typeid(osg::Matrixd );
           qRegisterMetaType<osg::QMLMatrixd>();
           qRegisterMetaType<osg::QMLMatrixd*>("pmoc.osg.QMLMatrixd");
qmlRegisterType<osg::QReflect_Matrixd>("pmoc.osg",1,0,"QReflect_Matrixd");
           qmlRegisterType<osg::QMLMatrixd>("pmoc.osg",1,0,"QMLMatrixd");
};
const std::string osg::MetaQReflect_Matrixd::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Matrixd::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Matrixd::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Matrixd::createQQModel(const Instance*i){ //return new MetaQReflect_Matrixd_QModel(i);}
QMLMatrixd *ret =new QMLMatrixd(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Matrixd_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_RefMatrixd:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_RefMatrixd::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
const  char*  osg::QReflect_RefMatrixd:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_RefMatrixd:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_RefMatrixd::clone(osg::QReflect_CopyOp  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_RefMatrixd::clone : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_RefMatrixd::cloneType()const{
//params checking
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_RefMatrixd::QReflect_RefMatrixd(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::RefMatrixd*>(i->ptr);
    _parentboxes[0]=0;
    _parentboxes[1]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_RefMatrixd::~QReflect_RefMatrixd( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
	if(_parentboxes[1])
delete _parentboxes[1];
}
///update this according _model new state
void osg::QReflect_RefMatrixd::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
	if(_parentboxes[1])
_parentboxes[1]->updateModel();
}
Instance osg::MetaQReflect_RefMatrixd::createInstance( ){
osg::ref_ptr<osg::RefMatrixd> osg_RefMatrixd_ptr	;
osg_RefMatrixd_ptr = new osg::RefMatrixd ()	;
Instance o(PMOCGETMETACLASS("osg::RefMatrixd"),(void*)osg_RefMatrixd_ptr.get()		,true);
_managedinstances.insert(osg_RefMatrixd_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_RefMatrixd::MetaQReflect_RefMatrixd():MetaQQuickClass( "osg::RefMatrixd"){
_typeid=&typeid(osg::RefMatrixd );
           qRegisterMetaType<osg::QMLRefMatrixd>();
           qRegisterMetaType<osg::QMLRefMatrixd*>("pmoc.osg.QMLRefMatrixd");
qmlRegisterType<osg::QReflect_RefMatrixd>("pmoc.osg",1,0,"QReflect_RefMatrixd");
           qmlRegisterType<osg::QMLRefMatrixd>("pmoc.osg",1,0,"QMLRefMatrixd");
};
const std::string osg::MetaQReflect_RefMatrixd::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_RefMatrixd::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_RefMatrixd::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_RefMatrixd::createQQModel(const Instance*i){ //return new MetaQReflect_RefMatrixd_QModel(i);}
QMLRefMatrixd *ret =new QMLRefMatrixd(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Matrixd *mother =dynamic_cast<osg::Matrixd*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Matrixd");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Matrixd model for osg::RefMatrixdis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Matrixd");
if(!cl){std::cerr<<"osg::Matrixd QQModel for osg::RefMatrixdis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::RefMatrixdis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::RefMatrixdis not found"<<std::endl;return ret;}
ret->_parentboxes[1]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Matrixd_pmoc.cpp"
#endif




