#include <osg/TexEnvCombine>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/TexEnvCombine_pmoc.hpp>
#include <customCode/osg/TexEnvCombine_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 GLint  osg::QReflect_TexEnvCombine::getCombine_Alpha()const{
return _model->getCombine_Alpha();

}
 GLint  osg::QReflect_TexEnvCombine::getCombine_RGB()const{
return _model->getCombine_RGB();

}
 GLint  osg::QReflect_TexEnvCombine::getOperand0_Alpha()const{
return _model->getOperand0_Alpha();

}
 GLint  osg::QReflect_TexEnvCombine::getOperand0_RGB()const{
return _model->getOperand0_RGB();

}
 GLint  osg::QReflect_TexEnvCombine::getOperand1_Alpha()const{
return _model->getOperand1_Alpha();

}
 GLint  osg::QReflect_TexEnvCombine::getOperand1_RGB()const{
return _model->getOperand1_RGB();

}
 GLint  osg::QReflect_TexEnvCombine::getOperand2_Alpha()const{
return _model->getOperand2_Alpha();

}
 GLint  osg::QReflect_TexEnvCombine::getOperand2_RGB()const{
return _model->getOperand2_RGB();

}
 GLint  osg::QReflect_TexEnvCombine::getSource0_Alpha()const{
return _model->getSource0_Alpha();

}
 GLint  osg::QReflect_TexEnvCombine::getSource0_RGB()const{
return _model->getSource0_RGB();

}
 GLint  osg::QReflect_TexEnvCombine::getSource1_Alpha()const{
return _model->getSource1_Alpha();

}
 GLint  osg::QReflect_TexEnvCombine::getSource1_RGB()const{
return _model->getSource1_RGB();

}
 GLint  osg::QReflect_TexEnvCombine::getSource2_Alpha()const{
return _model->getSource2_Alpha();

}
 GLint  osg::QReflect_TexEnvCombine::getSource2_RGB()const{
return _model->getSource2_RGB();

}
 bool  osg::QReflect_TexEnvCombine::isTextureAttribute()const{
return _model->isTextureAttribute();

}
 int  osg::QReflect_TexEnvCombine::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_TexEnvCombine::setCombine_Alpha( GLint p0){
 _model->setCombine_Alpha(p0);

}
 void osg::QReflect_TexEnvCombine::setCombine_RGB( GLint p0){
 _model->setCombine_RGB(p0);

}
 void osg::QReflect_TexEnvCombine::setConstantColor(osg::QReflect_Vec4f *p0){
 _model->setConstantColor(*p0->_model);

}
 void osg::QReflect_TexEnvCombine::setConstantColorAsLightDirection(osg::QReflect_Vec3f *p0){
 _model->setConstantColorAsLightDirection(*p0->_model);

}
 void osg::QReflect_TexEnvCombine::setOperand0_Alpha( GLint p0){
 _model->setOperand0_Alpha(p0);

}
 void osg::QReflect_TexEnvCombine::setOperand0_RGB( GLint p0){
 _model->setOperand0_RGB(p0);

}
 void osg::QReflect_TexEnvCombine::setOperand1_Alpha( GLint p0){
 _model->setOperand1_Alpha(p0);

}
 void osg::QReflect_TexEnvCombine::setOperand1_RGB( GLint p0){
 _model->setOperand1_RGB(p0);

}
 void osg::QReflect_TexEnvCombine::setOperand2_Alpha( GLint p0){
 _model->setOperand2_Alpha(p0);

}
 void osg::QReflect_TexEnvCombine::setOperand2_RGB( GLint p0){
 _model->setOperand2_RGB(p0);

}
 void osg::QReflect_TexEnvCombine::setSource0_Alpha( GLint p0){
 _model->setSource0_Alpha(p0);

}
 void osg::QReflect_TexEnvCombine::setSource0_RGB( GLint p0){
 _model->setSource0_RGB(p0);

}
 void osg::QReflect_TexEnvCombine::setSource1_Alpha( GLint p0){
 _model->setSource1_Alpha(p0);

}
 void osg::QReflect_TexEnvCombine::setSource1_RGB( GLint p0){
 _model->setSource1_RGB(p0);

}
 void osg::QReflect_TexEnvCombine::setSource2_Alpha( GLint p0){
 _model->setSource2_Alpha(p0);

}
 void osg::QReflect_TexEnvCombine::setSource2_RGB( GLint p0){
 _model->setSource2_RGB(p0);

}
const float osg::QReflect_TexEnvCombine::getScale_Alpha()const{return _model->getScale_Alpha();}
const float osg::QReflect_TexEnvCombine::getScale_RGB()const{return _model->getScale_RGB();}
void  osg::QReflect_TexEnvCombine::setScale_Alpha(const float &par){_model->setScale_Alpha(par);emit Scale_AlphaChanged(par);}
void  osg::QReflect_TexEnvCombine::setScale_RGB(const float &par){_model->setScale_RGB(par);emit Scale_RGBChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_TexEnvCombine::QReflect_TexEnvCombine(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TexEnvCombine*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TexEnvCombine::~QReflect_TexEnvCombine( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TexEnvCombine::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TexEnvCombine::createInstance( ){
osg::ref_ptr<osg::TexEnvCombine> osg_TexEnvCombine_ptr	;
osg_TexEnvCombine_ptr = new osg::TexEnvCombine ()	;
Instance o(PMOCGETMETACLASS("osg::TexEnvCombine"),(void*)osg_TexEnvCombine_ptr.get()		,true);
_managedinstances.insert(osg_TexEnvCombine_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TexEnvCombine::MetaQReflect_TexEnvCombine():MetaQQuickClass( "osg::TexEnvCombine"){
_typeid=&typeid(osg::TexEnvCombine );           qRegisterMetaType<QMLTexEnvCombine>();
qmlRegisterType<QReflect_TexEnvCombine>("pmoc.osg",1,0,"QReflect_TexEnvCombine");
           qmlRegisterType<QMLTexEnvCombine>("pmoc.osg",1,0,"QMLTexEnvCombine");
};
const std::string osg::MetaQReflect_TexEnvCombine::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TexEnvCombine::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TexEnvCombine::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TexEnvCombine::createQQModel(Instance*i){ //return new MetaQReflect_TexEnvCombine_QModel(i);}
QMLTexEnvCombine *ret =new QMLTexEnvCombine(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::TexEnvCombineis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::TexEnvCombineis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TexEnvCombine_pmoc.cpp"
#endif


