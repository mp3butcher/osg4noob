#include <osg/TextureRectangle>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/TextureRectangle_pmoc.hpp>
#include <customCode/osg/TextureRectangle_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_TextureRectangle:: getTextureTarget()const{
//params checking
return _model->getTextureTarget();

}
 int  osg::QReflect_TextureRectangle:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TextureRectangle::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 int  osg::QReflect_TextureRectangle:: getTextureDepth()const{
//params checking
return _model->getTextureDepth();

}
 int  osg::QReflect_TextureRectangle:: getTextureHeight()const{
//params checking
return _model->getTextureHeight();

}
 int  osg::QReflect_TextureRectangle:: getTextureWidth()const{
//params checking
return _model->getTextureWidth();

}
 unsigned int  osg::QReflect_TextureRectangle:: getNumImages()const{
//params checking
return _model->getNumImages();

}
 unsigned int&  osg::QReflect_TextureRectangle:: getModifiedCount( unsigned int  p0)const{
//params checking
return _model->getModifiedCount(p0);

}
 void osg::QReflect_TextureRectangle::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TextureRectangle::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_TextureRectangle::copyTexImage2D(osg::QReflect_State  *p0 , int  p1 , int  p2 , int  p3 , int  p4){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TextureRectangle::copyTexImage2D : parameter n.0 is NULL\n"<<endl;return;}
 _model->copyTexImage2D(*p0->_model ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_TextureRectangle::copyTexSubImage2D(osg::QReflect_State  *p0 , int  p1 , int  p2 , int  p3 , int  p4 , int  p5 , int  p6){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TextureRectangle::copyTexSubImage2D : parameter n.0 is NULL\n"<<endl;return;}
 _model->copyTexSubImage2D(*p0->_model ,p1 ,p2 ,p3 ,p4 ,p5 ,p6);

}
 void osg::QReflect_TextureRectangle::setImage( unsigned int  p0 ,osg::QReflect_Image  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_TextureRectangle::setImage : parameter n.1 is NULL\n"<<endl;return;}
 _model->setImage(p0 ,p1->_model);

}
 void osg::QReflect_TextureRectangle::setImage(osg::QReflect_Image  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TextureRectangle::setImage : parameter n.0 is NULL\n"<<endl;return;}
 _model->setImage(p0->_model);
emit ImageChanged();

}
 void osg::QReflect_TextureRectangle::setTextureHeight( int  p0){
//params checking
 _model->setTextureHeight(p0);
emit TextureHeightChanged();

}
 void osg::QReflect_TextureRectangle::setTextureSize( int  p0 , int  p1)const{
//params checking
 _model->setTextureSize(p0 ,p1);

}
 void osg::QReflect_TextureRectangle::setTextureWidth( int  p0){
//params checking
 _model->setTextureWidth(p0);
emit TextureWidthChanged();

}
osg::QReflect_Image*osg::QReflect_TextureRectangle::getImage( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_TextureRectangle::getImage( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_TextureRectangle::getImage()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_TextureRectangle::getImage(){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_TextureRectangle::QReflect_TextureRectangle(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TextureRectangle*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TextureRectangle::~QReflect_TextureRectangle( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TextureRectangle::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TextureRectangle::createInstance( ){
osg::ref_ptr<osg::TextureRectangle> osg_TextureRectangle_ptr	;
osg_TextureRectangle_ptr = new osg::TextureRectangle ()	;
Instance o(PMOCGETMETACLASS("osg::TextureRectangle"),(void*)osg_TextureRectangle_ptr.get()		,true);
_managedinstances.insert(osg_TextureRectangle_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TextureRectangle::MetaQReflect_TextureRectangle():MetaQQuickClass( "osg::TextureRectangle"){
_typeid=&typeid(osg::TextureRectangle );
           qRegisterMetaType<osg::QMLTextureRectangle>();
           qRegisterMetaType<osg::QMLTextureRectangle*>("pmoc.osg.QMLTextureRectangle");
qmlRegisterType<osg::QReflect_TextureRectangle>("pmoc.osg",1,0,"QReflect_TextureRectangle");
           qmlRegisterType<osg::QMLTextureRectangle>("pmoc.osg",1,0,"QMLTextureRectangle");
};
const std::string osg::MetaQReflect_TextureRectangle::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TextureRectangle::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TextureRectangle::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TextureRectangle::createQQModel(const Instance*i){ //return new MetaQReflect_TextureRectangle_QModel(i);}
QMLTextureRectangle *ret =new QMLTextureRectangle(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Texture *mother =dynamic_cast<osg::Texture*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Texture");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Texture model for osg::TextureRectangleis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Texture");
if(!cl){std::cerr<<"osg::Texture QQModel for osg::TextureRectangleis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TextureRectangle_pmoc.cpp"
#endif




