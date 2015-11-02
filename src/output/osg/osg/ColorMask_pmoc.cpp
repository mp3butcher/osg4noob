#include <osg/ColorMask>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ColorMask_pmoc.hpp>
#include <customCode/osg/ColorMask_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_ColorMask::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_ColorMask::setMask( bool p0 , bool p1 , bool p2 , bool p3){
 _model->setMask(p0 ,p1 ,p2 ,p3);

}
const bool osg::QReflect_ColorMask::getAlphaMask()const{return _model->getAlphaMask();}
const bool osg::QReflect_ColorMask::getBlueMask()const{return _model->getBlueMask();}
const bool osg::QReflect_ColorMask::getGreenMask()const{return _model->getGreenMask();}
const bool osg::QReflect_ColorMask::getRedMask()const{return _model->getRedMask();}
void  osg::QReflect_ColorMask::setAlphaMask(const bool &par){_model->setAlphaMask(par);emit AlphaMaskChanged(par);}
void  osg::QReflect_ColorMask::setBlueMask(const bool &par){_model->setBlueMask(par);emit BlueMaskChanged(par);}
void  osg::QReflect_ColorMask::setGreenMask(const bool &par){_model->setGreenMask(par);emit GreenMaskChanged(par);}
void  osg::QReflect_ColorMask::setRedMask(const bool &par){_model->setRedMask(par);emit RedMaskChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_ColorMask::QReflect_ColorMask(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ColorMask*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ColorMask::~QReflect_ColorMask( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ColorMask::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ColorMask::createInstance( ){
osg::ref_ptr<osg::ColorMask> osg_ColorMask_ptr	;
osg_ColorMask_ptr = new osg::ColorMask ()	;
Instance o(PMOCGETMETACLASS("osg::ColorMask"),(void*)osg_ColorMask_ptr.get()		,true);
_managedinstances.insert(osg_ColorMask_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ColorMask::MetaQReflect_ColorMask():MetaQQuickClass( "osg::ColorMask"){
_typeid=&typeid(osg::ColorMask );           qRegisterMetaType<QMLColorMask>();
qmlRegisterType<QReflect_ColorMask>("pmoc.osg",1,0,"QReflect_ColorMask");
           qmlRegisterType<QMLColorMask>("pmoc.osg",1,0,"QMLColorMask");
};
const std::string osg::MetaQReflect_ColorMask::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ColorMask::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ColorMask::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ColorMask::createQQModel(Instance*i){ //return new MetaQReflect_ColorMask_QModel(i);}
QMLColorMask *ret =new QMLColorMask(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::ColorMaskis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::ColorMaskis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ColorMask_pmoc.cpp"
#endif


