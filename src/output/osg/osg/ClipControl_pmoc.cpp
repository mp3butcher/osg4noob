#include <osg/ClipControl>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ClipControl_pmoc.hpp>
#include <customCode/osg/ClipControl_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_ClipControl::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_ClipControl::setDepthMode(osg::QReflect_ClipControl::DepthMode p0){
 _model->setDepthMode(static_cast<osg::ClipControl::DepthMode>(p0));

}
 void osg::QReflect_ClipControl::setOrigin(osg::QReflect_ClipControl::Origin p0){
 _model->setOrigin(static_cast<osg::ClipControl::Origin>(p0));

}
osg::QReflect_ClipControl::DepthMode  osg::QReflect_ClipControl::getDepthMode()const{
osg::QReflect_ClipControl::DepthMode ret=static_cast<osg::QReflect_ClipControl::DepthMode>( _model->getDepthMode());return  ret;

}
osg::QReflect_ClipControl::Origin  osg::QReflect_ClipControl::getOrigin()const{
osg::QReflect_ClipControl::Origin ret=static_cast<osg::QReflect_ClipControl::Origin>( _model->getOrigin());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_ClipControl::QReflect_ClipControl(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ClipControl*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ClipControl::~QReflect_ClipControl( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ClipControl::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ClipControl::createInstance( ){
osg::ref_ptr<osg::ClipControl> osg_ClipControl_ptr	;
osg_ClipControl_ptr = new osg::ClipControl ()	;
Instance o(PMOCGETMETACLASS("osg::ClipControl"),(void*)osg_ClipControl_ptr.get()		,true);
_managedinstances.insert(osg_ClipControl_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ClipControl::MetaQReflect_ClipControl():MetaQQuickClass( "osg::ClipControl"){
_typeid=&typeid(osg::ClipControl );           qRegisterMetaType<QMLClipControl>();
qmlRegisterType<QReflect_ClipControl>("pmoc.osg",1,0,"QReflect_ClipControl");
           qmlRegisterType<QMLClipControl>("pmoc.osg",1,0,"QMLClipControl");
};
const std::string osg::MetaQReflect_ClipControl::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ClipControl::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ClipControl::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ClipControl::createQQModel(Instance*i){ //return new MetaQReflect_ClipControl_QModel(i);}
QMLClipControl *ret =new QMLClipControl(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::ClipControlis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::ClipControlis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ClipControl_pmoc.cpp"
#endif


