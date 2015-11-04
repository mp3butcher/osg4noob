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
#include <osg/Image>
#include <osg/Image_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_Texture1D::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 int  osg::QReflect_Texture1D::getTextureDepth()const{
return _model->getTextureDepth();

}
 int  osg::QReflect_Texture1D::getTextureHeight()const{
return _model->getTextureHeight();

}
 unsigned int  osg::QReflect_Texture1D::getNumImages()const{
return _model->getNumImages();

}
 unsigned int&  osg::QReflect_Texture1D::getModifiedCount( unsigned int p0)const{
return _model->getModifiedCount(p0);

}
 void osg::QReflect_Texture1D::setImage( unsigned int p0 ,osg::QReflect_Image *p1){
 _model->setImage(p0 ,p1->_model);

}
const int osg::QReflect_Texture1D::getTextureWidth()const{return _model->getTextureWidth();}
const unsigned int osg::QReflect_Texture1D::getNumMipmapLevels()const{return _model->getNumMipmapLevels();}
osg::QReflect_Image * osg::QReflect_Texture1D::getImage()const{
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture1D::getImage( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Texture1D::getImage( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_Texture1D::setNumMipmapLevels(const unsigned int &par){_model->setNumMipmapLevels(par);emit NumMipmapLevelsChanged(par);}
void  osg::QReflect_Texture1D::setTextureWidth(const int &par){_model->setTextureWidth(par);emit TextureWidthChanged(par);}
void osg::QReflect_Texture1D::pmoc_reverse_setImage( osg::QReflect_Image *par){_model->setImage(NULL);
emit ImageChanged(NULL);
}
void osg::QReflect_Texture1D::setImage( osg::QReflect_Image *par){_model->setImage(par->_model);
emit ImageChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_Texture1D::QReflect_Texture1D(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Texture1D );           qRegisterMetaType<QMLTexture1D>();
qmlRegisterType<QReflect_Texture1D>("pmoc.osg",1,0,"QReflect_Texture1D");
           qmlRegisterType<QMLTexture1D>("pmoc.osg",1,0,"QMLTexture1D");
       PMOCACTION("getImage","setImage","unsetImage");
};
const std::string osg::MetaQReflect_Texture1D::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Texture1D::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Texture1D::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Texture1D::createQQModel(Instance*i){ //return new MetaQReflect_Texture1D_QModel(i);}
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


