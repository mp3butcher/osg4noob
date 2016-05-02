#include <osg/Texture1D>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Texture1D_pmoc.hpp>
#include <customCode/osg/Texture1D_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Texture1D:: getTextureTarget()const{
//params checking
return _model->getTextureTarget();

}
 int  osg::QReflect_Texture1D:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture1D::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 int  osg::QReflect_Texture1D:: getTextureDepth()const{
//params checking
return _model->getTextureDepth();

}
 int  osg::QReflect_Texture1D:: getTextureHeight()const{
//params checking
return _model->getTextureHeight();

}
 int  osg::QReflect_Texture1D:: getTextureWidth()const{
//params checking
return _model->getTextureWidth();

}
 unsigned int  osg::QReflect_Texture1D:: getNumImages()const{
//params checking
return _model->getNumImages();

}
 unsigned int  osg::QReflect_Texture1D:: getNumMipmapLevels()const{
//params checking
return _model->getNumMipmapLevels();

}
 unsigned int&  osg::QReflect_Texture1D:: getModifiedCount( unsigned int  p0)const{
//params checking
return _model->getModifiedCount(p0);

}
 void osg::QReflect_Texture1D::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture1D::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_Texture1D::copyTexImage1D(osg::QReflect_State  *p0 , int  p1 , int  p2 , int  p3){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture1D::copyTexImage1D : parameter n.0 is NULL\n"<<endl;return;}
 _model->copyTexImage1D(*p0->_model ,p1 ,p2 ,p3);

}
 void osg::QReflect_Texture1D::copyTexSubImage1D(osg::QReflect_State  *p0 , int  p1 , int  p2 , int  p3 , int  p4){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture1D::copyTexSubImage1D : parameter n.0 is NULL\n"<<endl;return;}
 _model->copyTexSubImage1D(*p0->_model ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_Texture1D::setImage( unsigned int  p0 ,osg::QReflect_Image  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Texture1D::setImage : parameter n.1 is NULL\n"<<endl;return;}
 _model->setImage(p0 ,p1->_model);

}
 void osg::QReflect_Texture1D::setImage(osg::QReflect_Image  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture1D::setImage : parameter n.0 is NULL\n"<<endl;return;}
 _model->setImage(p0->_model);
emit ImageChanged();

}
 void osg::QReflect_Texture1D::setNumMipmapLevels( unsigned int  p0)const{
//params checking
 _model->setNumMipmapLevels(p0);
///This Property seams binded with a mutable attribute in a const method! in this case i can't emit signal !!!

}
 void osg::QReflect_Texture1D::setTextureWidth( int  p0){
//params checking
 _model->setTextureWidth(p0);
emit TextureWidthChanged();

}
osg::QReflect_Image*osg::QReflect_Texture1D::getImage( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture1D::getImage( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture1D::getImage()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture1D::getImage(){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Texture1D::QReflect_Texture1D(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Texture1D*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Texture1D::~QReflect_Texture1D( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Texture1D::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Texture1D::createInstance( ){
osg::ref_ptr<osg::Texture1D> osg_Texture1D_ptr	;
osg_Texture1D_ptr = new osg::Texture1D ()	;
Instance o(PMOCGETMETACLASS("osg::Texture1D"),(void*)osg_Texture1D_ptr.get()		,true);
_managedinstances.insert(osg_Texture1D_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Texture1D::MetaQReflect_Texture1D():MetaQQuickClass( "osg::Texture1D"){
_typeid=&typeid(osg::Texture1D );
           qRegisterMetaType<osg::QMLTexture1D>();
           qRegisterMetaType<osg::QMLTexture1D*>("pmoc.osg.QMLTexture1D");
qmlRegisterType<osg::QReflect_Texture1D>("pmoc.osg",1,0,"QReflect_Texture1D");
           qmlRegisterType<osg::QMLTexture1D>("pmoc.osg",1,0,"QMLTexture1D");
};
const std::string osg::MetaQReflect_Texture1D::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Texture1D::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Texture1D::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Texture1D::createQQModel(const Instance*i){ //return new MetaQReflect_Texture1D_QModel(i);}
QMLTexture1D *ret =new QMLTexture1D(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Texture *mother =dynamic_cast<osg::Texture*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Texture");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Texture model for osg::Texture1Dis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Texture");
if(!cl){std::cerr<<"osg::Texture QQModel for osg::Texture1Dis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture1D_pmoc.cpp"
#endif




