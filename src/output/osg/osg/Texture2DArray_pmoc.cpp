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
using namespace pmoc;
 int  osg::QReflect_Texture2DArray::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_Texture2DArray::getNumImages()const{
return _model->getNumImages();

}
 unsigned int&  osg::QReflect_Texture2DArray::getModifiedCount( unsigned int p0 , unsigned int p1)const{
return _model->getModifiedCount(p0 ,p1);

}
 void osg::QReflect_Texture2DArray::setImage( unsigned int p0 ,osg::QReflect_Image *p1){
 _model->setImage(p0 ,p1->_model);

}
 void osg::QReflect_Texture2DArray::setTextureSize( int p0 , int p1 , int p2){
 _model->setTextureSize(p0 ,p1 ,p2);

}
const int osg::QReflect_Texture2DArray::getTextureDepth()const{return _model->getTextureDepth();}
const int osg::QReflect_Texture2DArray::getTextureHeight()const{return _model->getTextureHeight();}
const int osg::QReflect_Texture2DArray::getTextureWidth()const{return _model->getTextureWidth();}
const unsigned int osg::QReflect_Texture2DArray::getNumMipmapLevels()const{return _model->getNumMipmapLevels();}
osg::QReflect_Image*osg::QReflect_Texture2DArray::getImage( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture2DArray::getImage( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_Texture2DArray::setNumMipmapLevels(const unsigned int &par){_model->setNumMipmapLevels(par);emit NumMipmapLevelsChanged(par);}
void  osg::QReflect_Texture2DArray::setTextureDepth(const int &par){_model->setTextureDepth(par);emit TextureDepthChanged(par);}
void  osg::QReflect_Texture2DArray::setTextureHeight(const int &par){_model->setTextureHeight(par);emit TextureHeightChanged(par);}
void  osg::QReflect_Texture2DArray::setTextureWidth(const int &par){_model->setTextureWidth(par);emit TextureWidthChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Texture2DArray::QReflect_Texture2DArray(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Texture2DArray );           qRegisterMetaType<QMLTexture2DArray>();
qmlRegisterType<QReflect_Texture2DArray>("pmoc.osg",1,0,"QReflect_Texture2DArray");
           qmlRegisterType<QMLTexture2DArray>("pmoc.osg",1,0,"QMLTexture2DArray");
};
const std::string osg::MetaQReflect_Texture2DArray::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Texture2DArray::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Texture2DArray::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Texture2DArray::createQQModel(Instance*i){ //return new MetaQReflect_Texture2DArray_QModel(i);}
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


