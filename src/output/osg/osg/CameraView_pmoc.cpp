#include <osg/CameraView>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/CameraView_pmoc.hpp>
#include <customCode/osg/CameraView_pmoc.hpp>
#include <customCode/osg/Transform_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Quat_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_CameraView:: computeLocalToWorldMatrix(osg::QReflect_Matrixd  *p0 ,osg::QReflect_NodeVisitor  *p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CameraView::computeLocalToWorldMatrix : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_CameraView::computeLocalToWorldMatrix : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->computeLocalToWorldMatrix(*p0->_model ,p1->_model);

}
 bool  osg::QReflect_CameraView:: computeWorldToLocalMatrix(osg::QReflect_Matrixd  *p0 ,osg::QReflect_NodeVisitor  *p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CameraView::computeWorldToLocalMatrix : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_CameraView::computeWorldToLocalMatrix : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->computeWorldToLocalMatrix(*p0->_model ,p1->_model);

}
 double  osg::QReflect_CameraView:: getFieldOfView()const{
//params checking
return _model->getFieldOfView();

}
 double  osg::QReflect_CameraView:: getFocalLength()const{
//params checking
return _model->getFocalLength();

}
 void osg::QReflect_CameraView::setAttitude(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CameraView::setAttitude : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAttitude(*p0->_model);

}
 void osg::QReflect_CameraView::setFieldOfView( double  p0){
//params checking
 _model->setFieldOfView(p0);
emit FieldOfViewChanged();

}
 void osg::QReflect_CameraView::setFieldOfViewMode(osg::QReflect_CameraView::FieldOfViewMode  p0){
//params checking
 _model->setFieldOfViewMode(static_cast<osg::CameraView::FieldOfViewMode>(p0));
emit FieldOfViewModeChanged();

}
 void osg::QReflect_CameraView::setFocalLength( double  p0){
//params checking
 _model->setFocalLength(p0);
emit FocalLengthChanged();

}
 void osg::QReflect_CameraView::setPosition(osg::QReflect_Vec3d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CameraView::setPosition : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPosition(*p0->_model);

}
osg::QReflect_CameraView::FieldOfViewMode  osg::QReflect_CameraView::getFieldOfViewMode()const{
//params checking
osg::QReflect_CameraView::FieldOfViewMode ret=static_cast<osg::QReflect_CameraView::FieldOfViewMode>( _model->getFieldOfViewMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_CameraView::QReflect_CameraView(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::CameraView*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_CameraView::~QReflect_CameraView( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_CameraView::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_CameraView::createInstance( ){
osg::ref_ptr<osg::CameraView> osg_CameraView_ptr	;
osg_CameraView_ptr = new osg::CameraView ()	;
Instance o(PMOCGETMETACLASS("osg::CameraView"),(void*)osg_CameraView_ptr.get()		,true);
_managedinstances.insert(osg_CameraView_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_CameraView::MetaQReflect_CameraView():MetaQQuickClass( "osg::CameraView"){
_typeid=&typeid(osg::CameraView );
           qRegisterMetaType<osg::QMLCameraView>();
           qRegisterMetaType<osg::QMLCameraView*>("pmoc.osg.QMLCameraView");
qmlRegisterType<osg::QReflect_CameraView>("pmoc.osg",1,0,"QReflect_CameraView");
           qmlRegisterType<osg::QMLCameraView>("pmoc.osg",1,0,"QMLCameraView");
};
const std::string osg::MetaQReflect_CameraView::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CameraView::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CameraView::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CameraView::createQQModel(const Instance*i){ //return new MetaQReflect_CameraView_QModel(i);}
QMLCameraView *ret =new QMLCameraView(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Transform *mother =dynamic_cast<osg::Transform*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Transform");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Transform model for osg::CameraViewis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Transform");
if(!cl){std::cerr<<"osg::Transform QQModel for osg::CameraViewis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CameraView_pmoc.cpp"
#endif




