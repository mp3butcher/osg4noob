#include <osg/AutoTransform>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/AutoTransform_pmoc.hpp>
#include <customCode/osg/AutoTransform_pmoc.hpp>
#include <customCode/osg/Transform_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Quat_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_AutoTransform::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 void osg::QReflect_AutoTransform::setAutoRotateMode(osg::QReflect_AutoTransform::AutoRotateMode p0){
 _model->setAutoRotateMode(static_cast<osg::AutoTransform::AutoRotateMode>(p0));

}
 void osg::QReflect_AutoTransform::setAxis(osg::QReflect_Vec3f *p0){
 _model->setAxis(*p0->_model);

}
 void osg::QReflect_AutoTransform::setNormal(osg::QReflect_Vec3f *p0){
 _model->setNormal(*p0->_model);

}
 void osg::QReflect_AutoTransform::setPivotPoint(osg::QReflect_Vec3d *p0){
 _model->setPivotPoint(*p0->_model);

}
 void osg::QReflect_AutoTransform::setPosition(osg::QReflect_Vec3d *p0){
 _model->setPosition(*p0->_model);

}
 void osg::QReflect_AutoTransform::setRotation(osg::QReflect_Quat *p0){
 _model->setRotation(*p0->_model);

}
 void osg::QReflect_AutoTransform::setScale( double p0){
 _model->setScale(p0);

}
 void osg::QReflect_AutoTransform::setScale(osg::QReflect_Vec3d *p0){
 _model->setScale(*p0->_model);

}
const  char*  osg::QReflect_AutoTransform::className()const{
return _model->className();

}
const  char*  osg::QReflect_AutoTransform::libraryName()const{
return _model->libraryName();

}
const bool osg::QReflect_AutoTransform::getAutoScaleToScreen()const{return _model->getAutoScaleToScreen();}
const double osg::QReflect_AutoTransform::getMaximumScale()const{return _model->getMaximumScale();}
const double osg::QReflect_AutoTransform::getMinimumScale()const{return _model->getMinimumScale();}
const float osg::QReflect_AutoTransform::getAutoScaleTransitionWidthRatio()const{return _model->getAutoScaleTransitionWidthRatio();}
const float osg::QReflect_AutoTransform::getAutoUpdateEyeMovementTolerance()const{return _model->getAutoUpdateEyeMovementTolerance();}
osg::QReflect_AutoTransform*osg::QReflect_AutoTransform::asAutoTransform()const{
PMOCSAFEADDOBJECT(*_model->asAutoTransform(),inst);
return inst.isValid()?((osg::QReflect_AutoTransform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AutoTransform*osg::QReflect_AutoTransform::asAutoTransform(){
PMOCSAFEADDOBJECT(*_model->asAutoTransform(),inst);
return inst.isValid()?((osg::QReflect_AutoTransform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AutoTransform::AutoRotateMode  osg::QReflect_AutoTransform::getAutoRotateMode()const{
osg::QReflect_AutoTransform::AutoRotateMode ret=static_cast<osg::QReflect_AutoTransform::AutoRotateMode>( _model->getAutoRotateMode());return  ret;

}
osg::QReflect_Object*osg::QReflect_AutoTransform::clone(osg::QReflect_CopyOp *p0)const{
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_AutoTransform::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_AutoTransform::setAutoScaleToScreen(const bool &par){_model->setAutoScaleToScreen(par);emit AutoScaleToScreenChanged(par);}
void  osg::QReflect_AutoTransform::setAutoScaleTransitionWidthRatio(const float &par){_model->setAutoScaleTransitionWidthRatio(par);emit AutoScaleTransitionWidthRatioChanged(par);}
void  osg::QReflect_AutoTransform::setAutoUpdateEyeMovementTolerance(const float &par){_model->setAutoUpdateEyeMovementTolerance(par);emit AutoUpdateEyeMovementToleranceChanged(par);}
void  osg::QReflect_AutoTransform::setMaximumScale(const double &par){_model->setMaximumScale(par);emit MaximumScaleChanged(par);}
void  osg::QReflect_AutoTransform::setMinimumScale(const double &par){_model->setMinimumScale(par);emit MinimumScaleChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_AutoTransform::QReflect_AutoTransform(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::AutoTransform );           qRegisterMetaType<QMLAutoTransform>();
qmlRegisterType<QReflect_AutoTransform>("pmoc.osg",1,0,"QReflect_AutoTransform");
           qmlRegisterType<QMLAutoTransform>("pmoc.osg",1,0,"QMLAutoTransform");
};
const std::string osg::MetaQReflect_AutoTransform::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AutoTransform::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AutoTransform::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AutoTransform::createQQModel(Instance*i){ //return new MetaQReflect_AutoTransform_QModel(i);}
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



