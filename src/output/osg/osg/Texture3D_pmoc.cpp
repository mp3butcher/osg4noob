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
#include <osg/Image>
#include <osg/Image_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Texture3D::getTextureTarget()const{
return _model->getTextureTarget();

}
 int  osg::QReflect_Texture3D::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_Texture3D::getNumImages()const{
return _model->getNumImages();

}
 unsigned int&  osg::QReflect_Texture3D::getModifiedCount( unsigned int p0)const{
return _model->getModifiedCount(p0);

}
 void osg::QReflect_Texture3D::apply(osg::QReflect_State *p0)const{
 _model->apply(*p0->_model);

}
 void osg::QReflect_Texture3D::copyTexSubImage3D(osg::QReflect_State *p0 , int p1 , int p2 , int p3 , int p4 , int p5 , int p6 , int p7){
 _model->copyTexSubImage3D(*p0->_model ,p1 ,p2 ,p3 ,p4 ,p5 ,p6 ,p7);

}
 void osg::QReflect_Texture3D::getTextureSize( int &p0 , int &p1 , int &p2)const{
 _model->getTextureSize(p0 ,p1 ,p2);

}
 void osg::QReflect_Texture3D::setImage( unsigned int p0 ,osg::QReflect_Image *p1){
 _model->setImage(p0 ,p1->_model);

}
 void osg::QReflect_Texture3D::setTextureSize( int p0 , int p1 , int p2)const{
 _model->setTextureSize(p0 ,p1 ,p2);

}
const int osg::QReflect_Texture3D::getTextureDepth()const{return _model->getTextureDepth();}
const int osg::QReflect_Texture3D::getTextureHeight()const{return _model->getTextureHeight();}
const int osg::QReflect_Texture3D::getTextureWidth()const{return _model->getTextureWidth();}
const unsigned int osg::QReflect_Texture3D::getNumMipmapLevels()const{return _model->getNumMipmapLevels();}
osg::QReflect_Image * osg::QReflect_Texture3D::getImage()const{
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture3D::getImage( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture3D::getImage( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_Texture3D::setNumMipmapLevels(const unsigned int &par){_model->setNumMipmapLevels(par);emit NumMipmapLevelsChanged(par);}
void  osg::QReflect_Texture3D::setTextureDepth(const int &par){_model->setTextureDepth(par);emit TextureDepthChanged(par);}
void  osg::QReflect_Texture3D::setTextureHeight(const int &par){_model->setTextureHeight(par);emit TextureHeightChanged(par);}
void  osg::QReflect_Texture3D::setTextureWidth(const int &par){_model->setTextureWidth(par);emit TextureWidthChanged(par);}
void osg::QReflect_Texture3D::pmoc_reverse_setImage( osg::QReflect_Image *par){_model->setImage(NULL);
emit ImageChanged(NULL);
}
void osg::QReflect_Texture3D::setImage( osg::QReflect_Image *par){_model->setImage(par->_model);
emit ImageChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_Texture3D::QReflect_Texture3D(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Texture3D );           qRegisterMetaType<QMLTexture3D>();
qmlRegisterType<QReflect_Texture3D>("pmoc.osg",1,0,"QReflect_Texture3D");
           qmlRegisterType<QMLTexture3D>("pmoc.osg",1,0,"QMLTexture3D");
       PMOCACTION("getImage","setImage","unsetImage");
};
const std::string osg::MetaQReflect_Texture3D::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Texture3D::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Texture3D::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Texture3D::createQQModel(Instance*i){ //return new MetaQReflect_Texture3D_QModel(i);}
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


