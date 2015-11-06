#include <osg/Texture2DMultisample>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Texture2DMultisample_pmoc.hpp>
#include <customCode/osg/Texture2DMultisample_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Texture2DMultisample::getTextureTarget()const{
return _model->getTextureTarget();

}
 GLsizei  osg::QReflect_Texture2DMultisample::getNumSamples()const{
return _model->getNumSamples();

}
 int  osg::QReflect_Texture2DMultisample::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 int  osg::QReflect_Texture2DMultisample::getTextureDepth()const{
return _model->getTextureDepth();

}
 unsigned int  osg::QReflect_Texture2DMultisample::getNumImages()const{
return _model->getNumImages();

}
 void osg::QReflect_Texture2DMultisample::allocateMipmap(osg::QReflect_State *p0)const{
 _model->allocateMipmap(*p0->_model);

}
 void osg::QReflect_Texture2DMultisample::apply(osg::QReflect_State *p0)const{
 _model->apply(*p0->_model);

}
 void osg::QReflect_Texture2DMultisample::setImage( unsigned int p0 ,osg::QReflect_Image *p1){
 _model->setImage(p0 ,p1->_model);

}
 void osg::QReflect_Texture2DMultisample::setNumSamples( int p0){
 _model->setNumSamples(p0);

}
 void osg::QReflect_Texture2DMultisample::setTextureSize( int p0 , int p1)const{
 _model->setTextureSize(p0 ,p1);

}
const int osg::QReflect_Texture2DMultisample::getTextureHeight()const{return _model->getTextureHeight();}
const int osg::QReflect_Texture2DMultisample::getTextureWidth()const{return _model->getTextureWidth();}
osg::QReflect_Image*osg::QReflect_Texture2DMultisample::getImage( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture2DMultisample::getImage( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_Texture2DMultisample::setTextureHeight(const int &par){_model->setTextureHeight(par);emit TextureHeightChanged(par);}
void  osg::QReflect_Texture2DMultisample::setTextureWidth(const int &par){_model->setTextureWidth(par);emit TextureWidthChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Texture2DMultisample::QReflect_Texture2DMultisample(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Texture2DMultisample*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Texture2DMultisample::~QReflect_Texture2DMultisample( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Texture2DMultisample::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Texture2DMultisample::createInstance( ){
osg::ref_ptr<osg::Texture2DMultisample> osg_Texture2DMultisample_ptr	;
osg_Texture2DMultisample_ptr = new osg::Texture2DMultisample ()	;
Instance o(PMOCGETMETACLASS("osg::Texture2DMultisample"),(void*)osg_Texture2DMultisample_ptr.get()		,true);
_managedinstances.insert(osg_Texture2DMultisample_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Texture2DMultisample::MetaQReflect_Texture2DMultisample():MetaQQuickClass( "osg::Texture2DMultisample"){
_typeid=&typeid(osg::Texture2DMultisample );           qRegisterMetaType<QMLTexture2DMultisample>();
qmlRegisterType<QReflect_Texture2DMultisample>("pmoc.osg",1,0,"QReflect_Texture2DMultisample");
           qmlRegisterType<QMLTexture2DMultisample>("pmoc.osg",1,0,"QMLTexture2DMultisample");
};
const std::string osg::MetaQReflect_Texture2DMultisample::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Texture2DMultisample::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Texture2DMultisample::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Texture2DMultisample::createQQModel(Instance*i){ //return new MetaQReflect_Texture2DMultisample_QModel(i);}
QMLTexture2DMultisample *ret =new QMLTexture2DMultisample(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Texture *mother =dynamic_cast<osg::Texture*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Texture");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Texture model for osg::Texture2DMultisampleis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Texture");
if(!cl){std::cerr<<"osg::Texture QQModel for osg::Texture2DMultisampleis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture2DMultisample_pmoc.cpp"
#endif


