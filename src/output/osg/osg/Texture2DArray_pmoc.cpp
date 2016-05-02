#include <osg/Texture2DArray>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Texture2DArray_pmoc.hpp>
#include <customCode/osg/Texture2DArray_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Texture2DArray:: getTextureTarget()const{
//params checking
return _model->getTextureTarget();

}
 int  osg::QReflect_Texture2DArray:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture2DArray::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 int  osg::QReflect_Texture2DArray:: getTextureDepth()const{
//params checking
return _model->getTextureDepth();

}
 int  osg::QReflect_Texture2DArray:: getTextureHeight()const{
//params checking
return _model->getTextureHeight();

}
 int  osg::QReflect_Texture2DArray:: getTextureWidth()const{
//params checking
return _model->getTextureWidth();

}
 unsigned int  osg::QReflect_Texture2DArray:: getNumImages()const{
//params checking
return _model->getNumImages();

}
 unsigned int  osg::QReflect_Texture2DArray:: getNumMipmapLevels()const{
//params checking
return _model->getNumMipmapLevels();

}
 unsigned int&  osg::QReflect_Texture2DArray:: getModifiedCount( unsigned int  p0 , unsigned int  p1)const{
//params checking
return _model->getModifiedCount(p0 ,p1);

}
 void osg::QReflect_Texture2DArray::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture2DArray::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_Texture2DArray::copyTexSubImage2DArray(osg::QReflect_State  *p0 , int  p1 , int  p2 , int  p3 , int  p4 , int  p5 , int  p6 , int  p7){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture2DArray::copyTexSubImage2DArray : parameter n.0 is NULL\n"<<endl;return;}
 _model->copyTexSubImage2DArray(*p0->_model ,p1 ,p2 ,p3 ,p4 ,p5 ,p6 ,p7);

}
 void osg::QReflect_Texture2DArray::setImage( unsigned int  p0 ,osg::QReflect_Image  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Texture2DArray::setImage : parameter n.1 is NULL\n"<<endl;return;}
 _model->setImage(p0 ,p1->_model);

}
 void osg::QReflect_Texture2DArray::setNumMipmapLevels( unsigned int  p0)const{
//params checking
 _model->setNumMipmapLevels(p0);
///This Property seams binded with a mutable attribute in a const method! in this case i can't emit signal !!!

}
 void osg::QReflect_Texture2DArray::setTextureDepth( int  p0){
//params checking
 _model->setTextureDepth(p0);
emit TextureDepthChanged();

}
 void osg::QReflect_Texture2DArray::setTextureHeight( int  p0){
//params checking
 _model->setTextureHeight(p0);
emit TextureHeightChanged();

}
 void osg::QReflect_Texture2DArray::setTextureSize( int  p0 , int  p1 , int  p2){
//params checking
 _model->setTextureSize(p0 ,p1 ,p2);

}
 void osg::QReflect_Texture2DArray::setTextureWidth( int  p0){
//params checking
 _model->setTextureWidth(p0);
emit TextureWidthChanged();

}
osg::QReflect_Image*osg::QReflect_Texture2DArray::getImage( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture2DArray::getImage( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Texture2DArray::QReflect_Texture2DArray(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Texture2DArray*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Texture2DArray::~QReflect_Texture2DArray( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Texture2DArray::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Texture2DArray::createInstance( ){
osg::ref_ptr<osg::Texture2DArray> osg_Texture2DArray_ptr	;
osg_Texture2DArray_ptr = new osg::Texture2DArray ()	;
Instance o(PMOCGETMETACLASS("osg::Texture2DArray"),(void*)osg_Texture2DArray_ptr.get()		,true);
_managedinstances.insert(osg_Texture2DArray_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Texture2DArray::MetaQReflect_Texture2DArray():MetaQQuickClass( "osg::Texture2DArray"){
_typeid=&typeid(osg::Texture2DArray );
           qRegisterMetaType<osg::QMLTexture2DArray>();
           qRegisterMetaType<osg::QMLTexture2DArray*>("pmoc.osg.QMLTexture2DArray");
qmlRegisterType<osg::QReflect_Texture2DArray>("pmoc.osg",1,0,"QReflect_Texture2DArray");
           qmlRegisterType<osg::QMLTexture2DArray>("pmoc.osg",1,0,"QMLTexture2DArray");
};
const std::string osg::MetaQReflect_Texture2DArray::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Texture2DArray::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Texture2DArray::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Texture2DArray::createQQModel(const Instance*i){ //return new MetaQReflect_Texture2DArray_QModel(i);}
QMLTexture2DArray *ret =new QMLTexture2DArray(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Texture *mother =dynamic_cast<osg::Texture*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Texture");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Texture model for osg::Texture2DArrayis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Texture");
if(!cl){std::cerr<<"osg::Texture QQModel for osg::Texture2DArrayis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture2DArray_pmoc.cpp"
#endif




