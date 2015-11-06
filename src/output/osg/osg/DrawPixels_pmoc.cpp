#include <osg/DrawPixels>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/DrawPixels_pmoc.hpp>
#include <customCode/osg/DrawPixels_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <osg/Image>
#include <osg/Image_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_DrawPixels::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 void osg::QReflect_DrawPixels::drawImplementation(osg::QReflect_RenderInfo *p0)const{
 _model->drawImplementation(*p0->_model);

}
 void osg::QReflect_DrawPixels::getSubImageDimensions( unsigned int &p0 , unsigned int &p1 , unsigned int &p2 , unsigned int &p3)const{
 _model->getSubImageDimensions(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_DrawPixels::setPosition(osg::QReflect_Vec3f *p0){
 _model->setPosition(*p0->_model);

}
 void osg::QReflect_DrawPixels::setSubImageDimensions( unsigned int p0 , unsigned int p1 , unsigned int p2 , unsigned int p3){
 _model->setSubImageDimensions(p0 ,p1 ,p2 ,p3);

}
const  char*  osg::QReflect_DrawPixels::className()const{
return _model->className();

}
const  char*  osg::QReflect_DrawPixels::libraryName()const{
return _model->libraryName();

}
const bool osg::QReflect_DrawPixels::getUseSubImage()const{return _model->getUseSubImage();}
osg::QReflect_Image * osg::QReflect_DrawPixels::getImage()const{
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_DrawPixels::clone(osg::QReflect_CopyOp *p0)const{
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_DrawPixels::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_DrawPixels::setUseSubImage(const bool &par){_model->setUseSubImage(par);emit UseSubImageChanged(par);}
void osg::QReflect_DrawPixels::pmoc_reverse_setImage( osg::QReflect_Image *par){_model->setImage(NULL);
emit ImageChanged(NULL);
}
void osg::QReflect_DrawPixels::setImage( osg::QReflect_Image *par){_model->setImage(par->_model);
emit ImageChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_DrawPixels::QReflect_DrawPixels(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::DrawPixels*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_DrawPixels::~QReflect_DrawPixels( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_DrawPixels::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_DrawPixels::createInstance( ){
osg::ref_ptr<osg::DrawPixels> osg_DrawPixels_ptr	;
osg_DrawPixels_ptr = new osg::DrawPixels ()	;
Instance o(PMOCGETMETACLASS("osg::DrawPixels"),(void*)osg_DrawPixels_ptr.get()		,true);
_managedinstances.insert(osg_DrawPixels_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_DrawPixels::MetaQReflect_DrawPixels():MetaQQuickClass( "osg::DrawPixels"){
_typeid=&typeid(osg::DrawPixels );           qRegisterMetaType<QMLDrawPixels>();
qmlRegisterType<QReflect_DrawPixels>("pmoc.osg",1,0,"QReflect_DrawPixels");
           qmlRegisterType<QMLDrawPixels>("pmoc.osg",1,0,"QMLDrawPixels");
       PMOCACTION("getImage","setImage","unsetImage");
};
const std::string osg::MetaQReflect_DrawPixels::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_DrawPixels::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_DrawPixels::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_DrawPixels::createQQModel(Instance*i){ //return new MetaQReflect_DrawPixels_QModel(i);}
QMLDrawPixels *ret =new QMLDrawPixels(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Drawable *mother =dynamic_cast<osg::Drawable*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Drawable");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Drawable model for osg::DrawPixelsis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Drawable");
if(!cl){std::cerr<<"osg::Drawable QQModel for osg::DrawPixelsis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_DrawPixels_pmoc.cpp"
#endif




