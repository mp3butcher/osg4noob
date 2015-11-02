#include <osg/Material>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Material_pmoc.hpp>
#include <customCode/osg/Material_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Material::getAmbientFrontAndBack()const{
return _model->getAmbientFrontAndBack();

}
 bool  osg::QReflect_Material::getDiffuseFrontAndBack()const{
return _model->getDiffuseFrontAndBack();

}
 bool  osg::QReflect_Material::getEmissionFrontAndBack()const{
return _model->getEmissionFrontAndBack();

}
 bool  osg::QReflect_Material::getShininessFrontAndBack()const{
return _model->getShininessFrontAndBack();

}
 bool  osg::QReflect_Material::getSpecularFrontAndBack()const{
return _model->getSpecularFrontAndBack();

}
 float  osg::QReflect_Material::getShininess(osg::QReflect_Material::Face p0)const{
return _model->getShininess(static_cast<osg::Material::Face>(p0));

}
 int  osg::QReflect_Material::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_Material::setAlpha(osg::QReflect_Material::Face p0 , float p1){
 _model->setAlpha(static_cast<osg::Material::Face>(p0) ,p1);

}
 void osg::QReflect_Material::setAmbient(osg::QReflect_Material::Face p0 ,osg::QReflect_Vec4f *p1){
 _model->setAmbient(static_cast<osg::Material::Face>(p0) ,*p1->_model);

}
 void osg::QReflect_Material::setColorMode(osg::QReflect_Material::ColorMode p0){
 _model->setColorMode(static_cast<osg::Material::ColorMode>(p0));

}
 void osg::QReflect_Material::setDiffuse(osg::QReflect_Material::Face p0 ,osg::QReflect_Vec4f *p1){
 _model->setDiffuse(static_cast<osg::Material::Face>(p0) ,*p1->_model);

}
 void osg::QReflect_Material::setEmission(osg::QReflect_Material::Face p0 ,osg::QReflect_Vec4f *p1){
 _model->setEmission(static_cast<osg::Material::Face>(p0) ,*p1->_model);

}
 void osg::QReflect_Material::setShininess(osg::QReflect_Material::Face p0 , float p1){
 _model->setShininess(static_cast<osg::Material::Face>(p0) ,p1);

}
 void osg::QReflect_Material::setSpecular(osg::QReflect_Material::Face p0 ,osg::QReflect_Vec4f *p1){
 _model->setSpecular(static_cast<osg::Material::Face>(p0) ,*p1->_model);

}
 void osg::QReflect_Material::setTransparency(osg::QReflect_Material::Face p0 , float p1){
 _model->setTransparency(static_cast<osg::Material::Face>(p0) ,p1);

}
osg::QReflect_Material::ColorMode  osg::QReflect_Material::getColorMode()const{
osg::QReflect_Material::ColorMode ret=static_cast<osg::QReflect_Material::ColorMode>( _model->getColorMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_Material::QReflect_Material(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Material*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Material::~QReflect_Material( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Material::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Material::createInstance( ){
osg::ref_ptr<osg::Material> osg_Material_ptr	;
osg_Material_ptr = new osg::Material ()	;
Instance o(PMOCGETMETACLASS("osg::Material"),(void*)osg_Material_ptr.get()		,true);
_managedinstances.insert(osg_Material_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Material::MetaQReflect_Material():MetaQQuickClass( "osg::Material"){
_typeid=&typeid(osg::Material );           qRegisterMetaType<QMLMaterial>();
qmlRegisterType<QReflect_Material>("pmoc.osg",1,0,"QReflect_Material");
           qmlRegisterType<QMLMaterial>("pmoc.osg",1,0,"QMLMaterial");
};
const std::string osg::MetaQReflect_Material::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Material::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Material::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Material::createQQModel(Instance*i){ //return new MetaQReflect_Material_QModel(i);}
QMLMaterial *ret =new QMLMaterial(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::Materialis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::Materialis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Material_pmoc.cpp"
#endif


