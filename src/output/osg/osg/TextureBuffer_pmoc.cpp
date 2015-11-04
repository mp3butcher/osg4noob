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
#include <osg/Image>
#include <osg/Image_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_TextureBuffer::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 int  osg::QReflect_TextureBuffer::getTextureDepth()const{
return _model->getTextureDepth();

}
 int  osg::QReflect_TextureBuffer::getTextureHeight()const{
return _model->getTextureHeight();

}
 unsigned int  osg::QReflect_TextureBuffer::getNumImages()const{
return _model->getNumImages();

}
 unsigned int&  osg::QReflect_TextureBuffer::getModifiedCount( unsigned int p0)const{
return _model->getModifiedCount(p0);

}
 void osg::QReflect_TextureBuffer::setImage( unsigned int p0 ,osg::QReflect_Image *p1){
 _model->setImage(p0 ,p1->_model);

}
const int osg::QReflect_TextureBuffer::getTextureWidth()const{return _model->getTextureWidth();}
osg::QReflect_Image * osg::QReflect_TextureBuffer::getImage()const{
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_TextureBuffer::getImage( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_TextureBuffer::getImage( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_TextureBuffer::setTextureWidth(const int &par){_model->setTextureWidth(par);emit TextureWidthChanged(par);}
void osg::QReflect_TextureBuffer::pmoc_reverse_setImage( osg::QReflect_Image *par){_model->setImage(NULL);
emit ImageChanged(NULL);
}
void osg::QReflect_TextureBuffer::setImage( osg::QReflect_Image *par){_model->setImage(par->_model);
emit ImageChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_TextureBuffer::QReflect_TextureBuffer(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::TextureBuffer );           qRegisterMetaType<QMLTextureBuffer>();
qmlRegisterType<QReflect_TextureBuffer>("pmoc.osg",1,0,"QReflect_TextureBuffer");
           qmlRegisterType<QMLTextureBuffer>("pmoc.osg",1,0,"QMLTextureBuffer");
       PMOCACTION("getImage","setImage","unsetImage");
};
const std::string osg::MetaQReflect_TextureBuffer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TextureBuffer::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TextureBuffer::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TextureBuffer::createQQModel(Instance*i){ //return new MetaQReflect_TextureBuffer_QModel(i);}
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


