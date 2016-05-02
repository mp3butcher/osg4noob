#include <osg/TextureBuffer>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/TextureBuffer_pmoc.hpp>
#include <customCode/osg/TextureBuffer_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_TextureBuffer:: getTextureTarget()const{
//params checking
return _model->getTextureTarget();

}
 GLenum  osg::QReflect_TextureBuffer:: getUsageHint()const{
//params checking
return _model->getUsageHint();

}
 int  osg::QReflect_TextureBuffer:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TextureBuffer::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 int  osg::QReflect_TextureBuffer:: getTextureDepth()const{
//params checking
return _model->getTextureDepth();

}
 int  osg::QReflect_TextureBuffer:: getTextureHeight()const{
//params checking
return _model->getTextureHeight();

}
 int  osg::QReflect_TextureBuffer:: getTextureWidth()const{
//params checking
return _model->getTextureWidth();

}
 unsigned int  osg::QReflect_TextureBuffer:: getNumImages()const{
//params checking
return _model->getNumImages();

}
 unsigned int&  osg::QReflect_TextureBuffer:: getModifiedCount( unsigned int  p0)const{
//params checking
return _model->getModifiedCount(p0);

}
 void osg::QReflect_TextureBuffer::allocateMipmap(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TextureBuffer::allocateMipmap : parameter n.0 is NULL\n"<<endl;return;}
 _model->allocateMipmap(*p0->_model);

}
 void osg::QReflect_TextureBuffer::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TextureBuffer::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_TextureBuffer::bindBufferAs( unsigned int  p0 , GLenum  p1){
//params checking
 _model->bindBufferAs(p0 ,p1);

}
 void osg::QReflect_TextureBuffer::setImage( unsigned int  p0 ,osg::QReflect_Image  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_TextureBuffer::setImage : parameter n.1 is NULL\n"<<endl;return;}
 _model->setImage(p0 ,p1->_model);

}
 void osg::QReflect_TextureBuffer::setImage(osg::QReflect_Image  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TextureBuffer::setImage : parameter n.0 is NULL\n"<<endl;return;}
 _model->setImage(p0->_model);
emit ImageChanged();

}
 void osg::QReflect_TextureBuffer::setTextureWidth( int  p0){
//params checking
 _model->setTextureWidth(p0);
emit TextureWidthChanged();

}
 void osg::QReflect_TextureBuffer::setUsageHint( GLenum  p0){
//params checking
 _model->setUsageHint(p0);
emit UsageHintChanged();

}
 void osg::QReflect_TextureBuffer::unbindBufferAs( unsigned int  p0 , GLenum  p1){
//params checking
 _model->unbindBufferAs(p0 ,p1);

}
osg::QReflect_Image*osg::QReflect_TextureBuffer::getImage( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_TextureBuffer::getImage( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_TextureBuffer::getImage()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_TextureBuffer::getImage(){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_TextureBuffer::QReflect_TextureBuffer(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TextureBuffer*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TextureBuffer::~QReflect_TextureBuffer( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TextureBuffer::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TextureBuffer::createInstance( ){
osg::ref_ptr<osg::TextureBuffer> osg_TextureBuffer_ptr	;
osg_TextureBuffer_ptr = new osg::TextureBuffer ()	;
Instance o(PMOCGETMETACLASS("osg::TextureBuffer"),(void*)osg_TextureBuffer_ptr.get()		,true);
_managedinstances.insert(osg_TextureBuffer_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TextureBuffer::MetaQReflect_TextureBuffer():MetaQQuickClass( "osg::TextureBuffer"){
_typeid=&typeid(osg::TextureBuffer );
           qRegisterMetaType<osg::QMLTextureBuffer>();
           qRegisterMetaType<osg::QMLTextureBuffer*>("pmoc.osg.QMLTextureBuffer");
qmlRegisterType<osg::QReflect_TextureBuffer>("pmoc.osg",1,0,"QReflect_TextureBuffer");
           qmlRegisterType<osg::QMLTextureBuffer>("pmoc.osg",1,0,"QMLTextureBuffer");
};
const std::string osg::MetaQReflect_TextureBuffer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TextureBuffer::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TextureBuffer::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TextureBuffer::createQQModel(const Instance*i){ //return new MetaQReflect_TextureBuffer_QModel(i);}
QMLTextureBuffer *ret =new QMLTextureBuffer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Texture *mother =dynamic_cast<osg::Texture*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Texture");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Texture model for osg::TextureBufferis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Texture");
if(!cl){std::cerr<<"osg::Texture QQModel for osg::TextureBufferis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TextureBuffer_pmoc.cpp"
#endif




