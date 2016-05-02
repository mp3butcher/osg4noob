#include <osg/PointSprite>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PointSprite_pmoc.hpp>
#include <customCode/osg/PointSprite_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_PointSprite:: checkValidityOfAssociatedModes(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PointSprite::checkValidityOfAssociatedModes : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->checkValidityOfAssociatedModes(*p0->_model);

}
 bool  osg::QReflect_PointSprite:: isTextureAttribute()const{
//params checking
return _model->isTextureAttribute();

}
 int  osg::QReflect_PointSprite:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PointSprite::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_PointSprite::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PointSprite::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_PointSprite::setCoordOriginMode(osg::QReflect_PointSprite::CoordOriginMode  p0){
//params checking
 _model->setCoordOriginMode(static_cast<osg::PointSprite::CoordOriginMode>(p0));
emit CoordOriginModeChanged();

}
osg::QReflect_PointSprite::CoordOriginMode  osg::QReflect_PointSprite::getCoordOriginMode()const{
//params checking
osg::QReflect_PointSprite::CoordOriginMode ret=static_cast<osg::QReflect_PointSprite::CoordOriginMode>( _model->getCoordOriginMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_PointSprite::QReflect_PointSprite(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PointSprite*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PointSprite::~QReflect_PointSprite( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_PointSprite::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_PointSprite::createInstance( ){
osg::ref_ptr<osg::PointSprite> osg_PointSprite_ptr	;
osg_PointSprite_ptr = new osg::PointSprite ()	;
Instance o(PMOCGETMETACLASS("osg::PointSprite"),(void*)osg_PointSprite_ptr.get()		,true);
_managedinstances.insert(osg_PointSprite_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PointSprite::MetaQReflect_PointSprite():MetaQQuickClass( "osg::PointSprite"){
_typeid=&typeid(osg::PointSprite );
           qRegisterMetaType<osg::QMLPointSprite>();
           qRegisterMetaType<osg::QMLPointSprite*>("pmoc.osg.QMLPointSprite");
qmlRegisterType<osg::QReflect_PointSprite>("pmoc.osg",1,0,"QReflect_PointSprite");
           qmlRegisterType<osg::QMLPointSprite>("pmoc.osg",1,0,"QMLPointSprite");
};
const std::string osg::MetaQReflect_PointSprite::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PointSprite::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PointSprite::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PointSprite::createQQModel(const Instance*i){ //return new MetaQReflect_PointSprite_QModel(i);}
QMLPointSprite *ret =new QMLPointSprite(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::PointSpriteis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::PointSpriteis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PointSprite_pmoc.cpp"
#endif




