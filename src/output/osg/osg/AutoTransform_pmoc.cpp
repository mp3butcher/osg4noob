#include <osg/AutoTransform>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/AutoTransform_pmoc.hpp>
#include <customCode/osg/AutoTransform_pmoc.hpp>
#include <customCode/osg/Transform_pmoc.hpp>
#include <customCode/osg/AutoTransform_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Quat_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_AutoTransform:: computeLocalToWorldMatrix(osg::QReflect_Matrixd  *p0 ,osg::QReflect_NodeVisitor  *p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AutoTransform::computeLocalToWorldMatrix : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_AutoTransform::computeLocalToWorldMatrix : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->computeLocalToWorldMatrix(*p0->_model ,p1->_model);

}
 bool  osg::QReflect_AutoTransform:: computeWorldToLocalMatrix(osg::QReflect_Matrixd  *p0 ,osg::QReflect_NodeVisitor  *p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AutoTransform::computeWorldToLocalMatrix : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_AutoTransform::computeWorldToLocalMatrix : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->computeWorldToLocalMatrix(*p0->_model ,p1->_model);

}
 bool  osg::QReflect_AutoTransform:: getAutoScaleToScreen()const{
//params checking
return _model->getAutoScaleToScreen();

}
 bool  osg::QReflect_AutoTransform:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AutoTransform::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 double  osg::QReflect_AutoTransform:: getMaximumScale()const{
//params checking
return _model->getMaximumScale();

}
 double  osg::QReflect_AutoTransform:: getMinimumScale()const{
//params checking
return _model->getMinimumScale();

}
 float  osg::QReflect_AutoTransform:: getAutoScaleTransitionWidthRatio()const{
//params checking
return _model->getAutoScaleTransitionWidthRatio();

}
 float  osg::QReflect_AutoTransform:: getAutoUpdateEyeMovementTolerance()const{
//params checking
return _model->getAutoUpdateEyeMovementTolerance();

}
 void osg::QReflect_AutoTransform::accept(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AutoTransform::accept : parameter n.0 is NULL\n"<<endl;return;}
 _model->accept(*p0->_model);

}
 void osg::QReflect_AutoTransform::setAutoRotateMode(osg::QReflect_AutoTransform::AutoRotateMode  p0){
//params checking
 _model->setAutoRotateMode(static_cast<osg::AutoTransform::AutoRotateMode>(p0));
emit AutoRotateModeChanged();

}
 void osg::QReflect_AutoTransform::setAutoScaleToScreen( bool  p0){
//params checking
 _model->setAutoScaleToScreen(p0);
emit AutoScaleToScreenChanged();

}
 void osg::QReflect_AutoTransform::setAutoScaleTransitionWidthRatio( float  p0){
//params checking
 _model->setAutoScaleTransitionWidthRatio(p0);
emit AutoScaleTransitionWidthRatioChanged();

}
 void osg::QReflect_AutoTransform::setAutoUpdateEyeMovementTolerance( float  p0){
//params checking
 _model->setAutoUpdateEyeMovementTolerance(p0);
emit AutoUpdateEyeMovementToleranceChanged();

}
 void osg::QReflect_AutoTransform::setAxis(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AutoTransform::setAxis : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAxis(*p0->_model);

}
 void osg::QReflect_AutoTransform::setMaximumScale( double  p0){
//params checking
 _model->setMaximumScale(p0);
emit MaximumScaleChanged();

}
 void osg::QReflect_AutoTransform::setMinimumScale( double  p0){
//params checking
 _model->setMinimumScale(p0);
emit MinimumScaleChanged();

}
 void osg::QReflect_AutoTransform::setNormal(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AutoTransform::setNormal : parameter n.0 is NULL\n"<<endl;return;}
 _model->setNormal(*p0->_model);

}
 void osg::QReflect_AutoTransform::setPivotPoint(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AutoTransform::setPivotPoint : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPivotPoint(*p0->_model);

}
 void osg::QReflect_AutoTransform::setPosition(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AutoTransform::setPosition : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPosition(*p0->_model);

}
 void osg::QReflect_AutoTransform::setRotation(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AutoTransform::setRotation : parameter n.0 is NULL\n"<<endl;return;}
 _model->setRotation(*p0->_model);

}
 void osg::QReflect_AutoTransform::setScale( double  p0){
//params checking
 _model->setScale(p0);

}
 void osg::QReflect_AutoTransform::setScale(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AutoTransform::setScale : parameter n.0 is NULL\n"<<endl;return;}
 _model->setScale(*p0->_model);

}
const  char*  osg::QReflect_AutoTransform:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_AutoTransform:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_AutoTransform*osg::QReflect_AutoTransform::asAutoTransform()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asAutoTransform(),inst);
return inst.isValid()?((osg::QReflect_AutoTransform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AutoTransform*osg::QReflect_AutoTransform::asAutoTransform(){
//params checking
PMOCSAFEADDOBJECT(*_model->asAutoTransform(),inst);
return inst.isValid()?((osg::QReflect_AutoTransform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AutoTransform::AutoRotateMode  osg::QReflect_AutoTransform::getAutoRotateMode()const{
//params checking
osg::QReflect_AutoTransform::AutoRotateMode ret=static_cast<osg::QReflect_AutoTransform::AutoRotateMode>( _model->getAutoRotateMode());return  ret;

}
osg::QReflect_Object*osg::QReflect_AutoTransform::clone(osg::QReflect_CopyOp  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AutoTransform::clone : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_AutoTransform::cloneType()const{
//params checking
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_AutoTransform::QReflect_AutoTransform(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::AutoTransform*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_AutoTransform::~QReflect_AutoTransform( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_AutoTransform::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_AutoTransform::createInstance( ){
osg::ref_ptr<osg::AutoTransform> osg_AutoTransform_ptr	;
osg_AutoTransform_ptr = new osg::AutoTransform ()	;
Instance o(PMOCGETMETACLASS("osg::AutoTransform"),(void*)osg_AutoTransform_ptr.get()		,true);
_managedinstances.insert(osg_AutoTransform_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_AutoTransform::MetaQReflect_AutoTransform():MetaQQuickClass( "osg::AutoTransform"){
_typeid=&typeid(osg::AutoTransform );
           qRegisterMetaType<osg::QMLAutoTransform>();
           qRegisterMetaType<osg::QMLAutoTransform*>("pmoc.osg.QMLAutoTransform");
qmlRegisterType<osg::QReflect_AutoTransform>("pmoc.osg",1,0,"QReflect_AutoTransform");
           qmlRegisterType<osg::QMLAutoTransform>("pmoc.osg",1,0,"QMLAutoTransform");
};
const std::string osg::MetaQReflect_AutoTransform::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AutoTransform::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AutoTransform::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AutoTransform::createQQModel(const Instance*i){ //return new MetaQReflect_AutoTransform_QModel(i);}
QMLAutoTransform *ret =new QMLAutoTransform(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Transform *mother =dynamic_cast<osg::Transform*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Transform");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Transform model for osg::AutoTransformis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Transform");
if(!cl){std::cerr<<"osg::Transform QQModel for osg::AutoTransformis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AutoTransform_pmoc.cpp"
#endif




