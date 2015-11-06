#include <osg/PositionAttitudeTransform>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PositionAttitudeTransform_pmoc.hpp>
#include <customCode/osg/PositionAttitudeTransform_pmoc.hpp>
#include <customCode/osg/Transform_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Quat_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_PositionAttitudeTransform::computeLocalToWorldMatrix(osg::QReflect_Matrixd *p0 ,osg::QReflect_NodeVisitor *p1)const{
return _model->computeLocalToWorldMatrix(*p0->_model ,p1->_model);

}
 bool  osg::QReflect_PositionAttitudeTransform::computeWorldToLocalMatrix(osg::QReflect_Matrixd *p0 ,osg::QReflect_NodeVisitor *p1)const{
return _model->computeWorldToLocalMatrix(*p0->_model ,p1->_model);

}
 void osg::QReflect_PositionAttitudeTransform::setAttitude(osg::QReflect_Quat *p0){
 _model->setAttitude(*p0->_model);

}
 void osg::QReflect_PositionAttitudeTransform::setPivotPoint(osg::QReflect_Vec3d *p0){
 _model->setPivotPoint(*p0->_model);

}
 void osg::QReflect_PositionAttitudeTransform::setPosition(osg::QReflect_Vec3d *p0){
 _model->setPosition(*p0->_model);

}
 void osg::QReflect_PositionAttitudeTransform::setScale(osg::QReflect_Vec3d *p0){
 _model->setScale(*p0->_model);

}
osg::QReflect_PositionAttitudeTransform*osg::QReflect_PositionAttitudeTransform::asPositionAttitudeTransform()const{
PMOCSAFEADDOBJECT(*_model->asPositionAttitudeTransform(),inst);
return inst.isValid()?((osg::QReflect_PositionAttitudeTransform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_PositionAttitudeTransform*osg::QReflect_PositionAttitudeTransform::asPositionAttitudeTransform(){
PMOCSAFEADDOBJECT(*_model->asPositionAttitudeTransform(),inst);
return inst.isValid()?((osg::QReflect_PositionAttitudeTransform * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_PositionAttitudeTransform::QReflect_PositionAttitudeTransform(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PositionAttitudeTransform*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PositionAttitudeTransform::~QReflect_PositionAttitudeTransform( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_PositionAttitudeTransform::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_PositionAttitudeTransform::createInstance( ){
osg::ref_ptr<osg::PositionAttitudeTransform> osg_PositionAttitudeTransform_ptr	;
osg_PositionAttitudeTransform_ptr = new osg::PositionAttitudeTransform ()	;
Instance o(PMOCGETMETACLASS("osg::PositionAttitudeTransform"),(void*)osg_PositionAttitudeTransform_ptr.get()		,true);
_managedinstances.insert(osg_PositionAttitudeTransform_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PositionAttitudeTransform::MetaQReflect_PositionAttitudeTransform():MetaQQuickClass( "osg::PositionAttitudeTransform"){
_typeid=&typeid(osg::PositionAttitudeTransform );           qRegisterMetaType<QMLPositionAttitudeTransform>();
qmlRegisterType<QReflect_PositionAttitudeTransform>("pmoc.osg",1,0,"QReflect_PositionAttitudeTransform");
           qmlRegisterType<QMLPositionAttitudeTransform>("pmoc.osg",1,0,"QMLPositionAttitudeTransform");
};
const std::string osg::MetaQReflect_PositionAttitudeTransform::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PositionAttitudeTransform::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PositionAttitudeTransform::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PositionAttitudeTransform::createQQModel(Instance*i){ //return new MetaQReflect_PositionAttitudeTransform_QModel(i);}
QMLPositionAttitudeTransform *ret =new QMLPositionAttitudeTransform(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Transform *mother =dynamic_cast<osg::Transform*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Transform");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Transform model for osg::PositionAttitudeTransformis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Transform");
if(!cl){std::cerr<<"osg::Transform QQModel for osg::PositionAttitudeTransformis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PositionAttitudeTransform_pmoc.cpp"
#endif



