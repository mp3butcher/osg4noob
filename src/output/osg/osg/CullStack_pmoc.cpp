#include <osg/CullStack>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/CullStack_pmoc.hpp>
#include <customCode/osg/CullStack_pmoc.hpp>
#include <customCode/osg/CullSettings_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Viewport_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_CullStack:: isCulled(osg::QReflect_Node  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullStack::isCulled : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isCulled(*p0->_model);

}
 float  osg::QReflect_CullStack:: clampedPixelSize(osg::QReflect_Vec3f  *p0 , float  p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullStack::clampedPixelSize : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->clampedPixelSize(*p0->_model ,p1);

}
 float  osg::QReflect_CullStack:: getFrustumVolume(){
//params checking
return _model->getFrustumVolume();

}
 float  osg::QReflect_CullStack:: pixelSize(osg::QReflect_Vec3f  *p0 , float  p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullStack::pixelSize : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->pixelSize(*p0->_model ,p1);

}
 void osg::QReflect_CullStack::popCullingSet(){
//params checking
 _model->popCullingSet();

}
 void osg::QReflect_CullStack::popCurrentMask(){
//params checking
 _model->popCurrentMask();

}
 void osg::QReflect_CullStack::popModelViewMatrix(){
//params checking
 _model->popModelViewMatrix();

}
 void osg::QReflect_CullStack::popProjectionMatrix(){
//params checking
 _model->popProjectionMatrix();

}
 void osg::QReflect_CullStack::popReferenceViewPoint(){
//params checking
 _model->popReferenceViewPoint();

}
 void osg::QReflect_CullStack::popViewport(){
//params checking
 _model->popViewport();

}
 void osg::QReflect_CullStack::pushCullingSet(){
//params checking
 _model->pushCullingSet();

}
 void osg::QReflect_CullStack::pushCurrentMask(){
//params checking
 _model->pushCurrentMask();

}
 void osg::QReflect_CullStack::pushModelViewMatrix(osg::QReflect_RefMatrixd  *p0 ,osg::QReflect_Transform::ReferenceFrame  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullStack::pushModelViewMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->pushModelViewMatrix(p0->_model ,static_cast<osg::Transform::ReferenceFrame>(p1));

}
 void osg::QReflect_CullStack::pushProjectionMatrix(osg::QReflect_RefMatrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullStack::pushProjectionMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->pushProjectionMatrix(p0->_model);

}
 void osg::QReflect_CullStack::pushReferenceViewPoint(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullStack::pushReferenceViewPoint : parameter n.0 is NULL\n"<<endl;return;}
 _model->pushReferenceViewPoint(*p0->_model);

}
 void osg::QReflect_CullStack::pushViewport(osg::QReflect_Viewport  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullStack::pushViewport : parameter n.0 is NULL\n"<<endl;return;}
 _model->pushViewport(p0->_model);

}
 void osg::QReflect_CullStack::reset(){
//params checking
 _model->reset();

}
osg::QReflect_RefMatrixd*osg::QReflect_CullStack::getMVPW(){
//params checking
PMOCSAFEADDOBJECT(*_model->getMVPW(),inst);
return inst.isValid()?((osg::QReflect_RefMatrixd * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_RefMatrixd*osg::QReflect_CullStack::getModelViewMatrix(){
//params checking
PMOCSAFEADDOBJECT(*_model->getModelViewMatrix(),inst);
return inst.isValid()?((osg::QReflect_RefMatrixd * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_RefMatrixd*osg::QReflect_CullStack::getProjectionMatrix(){
//params checking
PMOCSAFEADDOBJECT(*_model->getProjectionMatrix(),inst);
return inst.isValid()?((osg::QReflect_RefMatrixd * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Viewport*osg::QReflect_CullStack::getViewport(){
//params checking
PMOCSAFEADDOBJECT(*_model->getViewport(),inst);
return inst.isValid()?((osg::QReflect_Viewport * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_CullStack::QReflect_CullStack(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::CullStack*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_CullStack::~QReflect_CullStack( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_CullStack::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_CullStack::createInstance( ){
osg::CullStack* osg_CullStack_ptr	;
osg_CullStack_ptr= new osg::CullStack()	;
Instance o(PMOCGETMETACLASS("osg::CullStack"),(void*)osg_CullStack_ptr	,true);
_managedinstances.insert(osg_CullStack_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_CullStack::MetaQReflect_CullStack():MetaQQuickClass( "osg::CullStack"){
_typeid=&typeid(osg::CullStack );
           qRegisterMetaType<osg::QMLCullStack>();
           qRegisterMetaType<osg::QMLCullStack*>("pmoc.osg.QMLCullStack");
qmlRegisterType<osg::QReflect_CullStack>("pmoc.osg",1,0,"QReflect_CullStack");
           qmlRegisterType<osg::QMLCullStack>("pmoc.osg",1,0,"QMLCullStack");
};
const std::string osg::MetaQReflect_CullStack::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CullStack::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CullStack::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CullStack::createQQModel(const Instance*i){ //return new MetaQReflect_CullStack_QModel(i);}
QMLCullStack *ret =new QMLCullStack(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::CullSettings *mother =dynamic_cast<osg::CullSettings*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::CullSettings");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::CullSettings model for osg::CullStackis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::CullSettings");
if(!cl){std::cerr<<"osg::CullSettings QQModel for osg::CullStackis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CullStack_pmoc.cpp"
#endif




