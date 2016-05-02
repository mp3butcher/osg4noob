#include <osg/TextureCubeMap>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/TextureCubeMap_pmoc.hpp>
#include <customCode/osg/TextureCubeMap_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_TextureCubeMap:: getTextureTarget()const{
//params checking
return _model->getTextureTarget();

}
 int  osg::QReflect_TextureCubeMap:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TextureCubeMap::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 int  osg::QReflect_TextureCubeMap:: getTextureDepth()const{
//params checking
return _model->getTextureDepth();

}
 int  osg::QReflect_TextureCubeMap:: getTextureHeight()const{
//params checking
return _model->getTextureHeight();

}
 int  osg::QReflect_TextureCubeMap:: getTextureWidth()const{
//params checking
return _model->getTextureWidth();

}
 unsigned int  osg::QReflect_TextureCubeMap:: getNumImages()const{
//params checking
return _model->getNumImages();

}
 unsigned int  osg::QReflect_TextureCubeMap:: getNumMipmapLevels()const{
//params checking
return _model->getNumMipmapLevels();

}
 unsigned int&  osg::QReflect_TextureCubeMap:: getModifiedCount( unsigned int  p0 , unsigned int  p1)const{
//params checking
return _model->getModifiedCount(p0 ,p1);

}
 void osg::QReflect_TextureCubeMap::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TextureCubeMap::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_TextureCubeMap::copyTexSubImageCubeMap(osg::QReflect_State  *p0 , int  p1 , int  p2 , int  p3 , int  p4 , int  p5 , int  p6 , int  p7){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TextureCubeMap::copyTexSubImageCubeMap : parameter n.0 is NULL\n"<<endl;return;}
 _model->copyTexSubImageCubeMap(*p0->_model ,p1 ,p2 ,p3 ,p4 ,p5 ,p6 ,p7);

}
 void osg::QReflect_TextureCubeMap::setImage( unsigned int  p0 ,osg::QReflect_Image  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_TextureCubeMap::setImage : parameter n.1 is NULL\n"<<endl;return;}
 _model->setImage(p0 ,p1->_model);

}
 void osg::QReflect_TextureCubeMap::setNumMipmapLevels( unsigned int  p0)const{
//params checking
 _model->setNumMipmapLevels(p0);
///This Property seams binded with a mutable attribute in a const method! in this case i can't emit signal !!!

}
 void osg::QReflect_TextureCubeMap::setTextureHeight( int  p0){
//params checking
 _model->setTextureHeight(p0);
emit TextureHeightChanged();

}
 void osg::QReflect_TextureCubeMap::setTextureSize( int  p0 , int  p1)const{
//params checking
 _model->setTextureSize(p0 ,p1);

}
 void osg::QReflect_TextureCubeMap::setTextureWidth( int  p0){
//params checking
 _model->setTextureWidth(p0);
emit TextureWidthChanged();

}
osg::QReflect_Image*osg::QReflect_TextureCubeMap::getImage( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_TextureCubeMap::getImage( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_TextureCubeMap::QReflect_TextureCubeMap(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TextureCubeMap*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TextureCubeMap::~QReflect_TextureCubeMap( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TextureCubeMap::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TextureCubeMap::createInstance( ){
osg::ref_ptr<osg::TextureCubeMap> osg_TextureCubeMap_ptr	;
osg_TextureCubeMap_ptr = new osg::TextureCubeMap ()	;
Instance o(PMOCGETMETACLASS("osg::TextureCubeMap"),(void*)osg_TextureCubeMap_ptr.get()		,true);
_managedinstances.insert(osg_TextureCubeMap_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TextureCubeMap::MetaQReflect_TextureCubeMap():MetaQQuickClass( "osg::TextureCubeMap"){
_typeid=&typeid(osg::TextureCubeMap );
           qRegisterMetaType<osg::QMLTextureCubeMap>();
           qRegisterMetaType<osg::QMLTextureCubeMap*>("pmoc.osg.QMLTextureCubeMap");
qmlRegisterType<osg::QReflect_TextureCubeMap>("pmoc.osg",1,0,"QReflect_TextureCubeMap");
           qmlRegisterType<osg::QMLTextureCubeMap>("pmoc.osg",1,0,"QMLTextureCubeMap");
};
const std::string osg::MetaQReflect_TextureCubeMap::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TextureCubeMap::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TextureCubeMap::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TextureCubeMap::createQQModel(const Instance*i){ //return new MetaQReflect_TextureCubeMap_QModel(i);}
QMLTextureCubeMap *ret =new QMLTextureCubeMap(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Texture *mother =dynamic_cast<osg::Texture*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Texture");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Texture model for osg::TextureCubeMapis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Texture");
if(!cl){std::cerr<<"osg::Texture QQModel for osg::TextureCubeMapis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TextureCubeMap_pmoc.cpp"
#endif




