#include <osg/Texture3D>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Texture3D_pmoc.hpp>
#include <customCode/osg/Texture3D_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Texture3D:: getTextureTarget()const{
//params checking
return _model->getTextureTarget();

}
 int  osg::QReflect_Texture3D:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture3D::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 int  osg::QReflect_Texture3D:: getTextureDepth()const{
//params checking
return _model->getTextureDepth();

}
 int  osg::QReflect_Texture3D:: getTextureHeight()const{
//params checking
return _model->getTextureHeight();

}
 int  osg::QReflect_Texture3D:: getTextureWidth()const{
//params checking
return _model->getTextureWidth();

}
 unsigned int  osg::QReflect_Texture3D:: getNumImages()const{
//params checking
return _model->getNumImages();

}
 unsigned int  osg::QReflect_Texture3D:: getNumMipmapLevels()const{
//params checking
return _model->getNumMipmapLevels();

}
 unsigned int&  osg::QReflect_Texture3D:: getModifiedCount( unsigned int  p0)const{
//params checking
return _model->getModifiedCount(p0);

}
 void osg::QReflect_Texture3D::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture3D::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_Texture3D::copyTexSubImage3D(osg::QReflect_State  *p0 , int  p1 , int  p2 , int  p3 , int  p4 , int  p5 , int  p6 , int  p7){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture3D::copyTexSubImage3D : parameter n.0 is NULL\n"<<endl;return;}
 _model->copyTexSubImage3D(*p0->_model ,p1 ,p2 ,p3 ,p4 ,p5 ,p6 ,p7);

}
 void osg::QReflect_Texture3D::getTextureSize( int  &p0 , int  &p1 , int  &p2)const{
//params checking
 _model->getTextureSize(p0 ,p1 ,p2);

}
 void osg::QReflect_Texture3D::setImage( unsigned int  p0 ,osg::QReflect_Image  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Texture3D::setImage : parameter n.1 is NULL\n"<<endl;return;}
 _model->setImage(p0 ,p1->_model);

}
 void osg::QReflect_Texture3D::setImage(osg::QReflect_Image  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture3D::setImage : parameter n.0 is NULL\n"<<endl;return;}
 _model->setImage(p0->_model);
emit ImageChanged();

}
 void osg::QReflect_Texture3D::setNumMipmapLevels( unsigned int  p0)const{
//params checking
 _model->setNumMipmapLevels(p0);
///This Property seams binded with a mutable attribute in a const method! in this case i can't emit signal !!!

}
 void osg::QReflect_Texture3D::setTextureDepth( int  p0){
//params checking
 _model->setTextureDepth(p0);
emit TextureDepthChanged();

}
 void osg::QReflect_Texture3D::setTextureHeight( int  p0){
//params checking
 _model->setTextureHeight(p0);
emit TextureHeightChanged();

}
 void osg::QReflect_Texture3D::setTextureSize( int  p0 , int  p1 , int  p2)const{
//params checking
 _model->setTextureSize(p0 ,p1 ,p2);

}
 void osg::QReflect_Texture3D::setTextureWidth( int  p0){
//params checking
 _model->setTextureWidth(p0);
emit TextureWidthChanged();

}
osg::QReflect_Image*osg::QReflect_Texture3D::getImage( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture3D::getImage( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture3D::getImage()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture3D::getImage(){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Texture3D::QReflect_Texture3D(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Texture3D*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Texture3D::~QReflect_Texture3D( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Texture3D::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Texture3D::createInstance( ){
osg::ref_ptr<osg::Texture3D> osg_Texture3D_ptr	;
osg_Texture3D_ptr = new osg::Texture3D ()	;
Instance o(PMOCGETMETACLASS("osg::Texture3D"),(void*)osg_Texture3D_ptr.get()		,true);
_managedinstances.insert(osg_Texture3D_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Texture3D::MetaQReflect_Texture3D():MetaQQuickClass( "osg::Texture3D"){
_typeid=&typeid(osg::Texture3D );
           qRegisterMetaType<osg::QMLTexture3D>();
           qRegisterMetaType<osg::QMLTexture3D*>("pmoc.osg.QMLTexture3D");
qmlRegisterType<osg::QReflect_Texture3D>("pmoc.osg",1,0,"QReflect_Texture3D");
           qmlRegisterType<osg::QMLTexture3D>("pmoc.osg",1,0,"QMLTexture3D");
};
const std::string osg::MetaQReflect_Texture3D::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Texture3D::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Texture3D::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Texture3D::createQQModel(const Instance*i){ //return new MetaQReflect_Texture3D_QModel(i);}
QMLTexture3D *ret =new QMLTexture3D(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Texture *mother =dynamic_cast<osg::Texture*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Texture");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Texture model for osg::Texture3Dis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Texture");
if(!cl){std::cerr<<"osg::Texture QQModel for osg::Texture3Dis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture3D_pmoc.cpp"
#endif




