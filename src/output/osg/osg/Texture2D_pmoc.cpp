#include <osg/Texture2D>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Texture2D_pmoc.hpp>
#include <customCode/osg/Texture2D_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Texture2D:: getTextureTarget()const{
//params checking
return _model->getTextureTarget();

}
 int  osg::QReflect_Texture2D:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture2D::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 int  osg::QReflect_Texture2D:: getTextureDepth()const{
//params checking
return _model->getTextureDepth();

}
 int  osg::QReflect_Texture2D:: getTextureHeight()const{
//params checking
return _model->getTextureHeight();

}
 int  osg::QReflect_Texture2D:: getTextureWidth()const{
//params checking
return _model->getTextureWidth();

}
 unsigned int  osg::QReflect_Texture2D:: getNumImages()const{
//params checking
return _model->getNumImages();

}
 unsigned int  osg::QReflect_Texture2D:: getNumMipmapLevels()const{
//params checking
return _model->getNumMipmapLevels();

}
 unsigned int&  osg::QReflect_Texture2D:: getModifiedCount( unsigned int  p0)const{
//params checking
return _model->getModifiedCount(p0);

}
 void osg::QReflect_Texture2D::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture2D::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_Texture2D::copyTexImage2D(osg::QReflect_State  *p0 , int  p1 , int  p2 , int  p3 , int  p4){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture2D::copyTexImage2D : parameter n.0 is NULL\n"<<endl;return;}
 _model->copyTexImage2D(*p0->_model ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_Texture2D::copyTexSubImage2D(osg::QReflect_State  *p0 , int  p1 , int  p2 , int  p3 , int  p4 , int  p5 , int  p6){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture2D::copyTexSubImage2D : parameter n.0 is NULL\n"<<endl;return;}
 _model->copyTexSubImage2D(*p0->_model ,p1 ,p2 ,p3 ,p4 ,p5 ,p6);

}
 void osg::QReflect_Texture2D::setImage( unsigned int  p0 ,osg::QReflect_Image  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Texture2D::setImage : parameter n.1 is NULL\n"<<endl;return;}
 _model->setImage(p0 ,p1->_model);

}
 void osg::QReflect_Texture2D::setImage(osg::QReflect_Image  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture2D::setImage : parameter n.0 is NULL\n"<<endl;return;}
 _model->setImage(p0->_model);
emit ImageChanged();

}
 void osg::QReflect_Texture2D::setNumMipmapLevels( unsigned int  p0)const{
//params checking
 _model->setNumMipmapLevels(p0);
///This Property seams binded with a mutable attribute in a const method! in this case i can't emit signal !!!

}
 void osg::QReflect_Texture2D::setTextureHeight( int  p0){
//params checking
 _model->setTextureHeight(p0);
emit TextureHeightChanged();

}
 void osg::QReflect_Texture2D::setTextureSize( int  p0 , int  p1)const{
//params checking
 _model->setTextureSize(p0 ,p1);

}
 void osg::QReflect_Texture2D::setTextureWidth( int  p0){
//params checking
 _model->setTextureWidth(p0);
emit TextureWidthChanged();

}
osg::QReflect_Image*osg::QReflect_Texture2D::getImage( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture2D::getImage( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture2D::getImage()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture2D::getImage(){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Texture2D::QReflect_Texture2D(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Texture2D*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Texture2D::~QReflect_Texture2D( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Texture2D::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Texture2D::createInstance( ){
osg::ref_ptr<osg::Texture2D> osg_Texture2D_ptr	;
osg_Texture2D_ptr = new osg::Texture2D ()	;
Instance o(PMOCGETMETACLASS("osg::Texture2D"),(void*)osg_Texture2D_ptr.get()		,true);
_managedinstances.insert(osg_Texture2D_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Texture2D::MetaQReflect_Texture2D():MetaQQuickClass( "osg::Texture2D"){
_typeid=&typeid(osg::Texture2D );
           qRegisterMetaType<osg::QMLTexture2D>();
           qRegisterMetaType<osg::QMLTexture2D*>("pmoc.osg.QMLTexture2D");
qmlRegisterType<osg::QReflect_Texture2D>("pmoc.osg",1,0,"QReflect_Texture2D");
           qmlRegisterType<osg::QMLTexture2D>("pmoc.osg",1,0,"QMLTexture2D");
};
const std::string osg::MetaQReflect_Texture2D::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Texture2D::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Texture2D::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Texture2D::createQQModel(const Instance*i){ //return new MetaQReflect_Texture2D_QModel(i);}
QMLTexture2D *ret =new QMLTexture2D(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Texture *mother =dynamic_cast<osg::Texture*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Texture");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Texture model for osg::Texture2Dis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Texture");
if(!cl){std::cerr<<"osg::Texture QQModel for osg::Texture2Dis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture2D_pmoc.cpp"
#endif




