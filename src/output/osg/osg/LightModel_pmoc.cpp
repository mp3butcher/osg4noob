#include <osg/LightModel>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/LightModel_pmoc.hpp>
#include <customCode/osg/LightModel_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_LightModel::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_LightModel::setAmbientIntensity(osg::QReflect_Vec4f *p0){
 _model->setAmbientIntensity(*p0->_model);

}
 void osg::QReflect_LightModel::setColorControl(osg::QReflect_LightModel::ColorControl p0){
 _model->setColorControl(static_cast<osg::LightModel::ColorControl>(p0));

}
const bool osg::QReflect_LightModel::getLocalViewer()const{return _model->getLocalViewer();}
const bool osg::QReflect_LightModel::getTwoSided()const{return _model->getTwoSided();}
osg::QReflect_LightModel::ColorControl  osg::QReflect_LightModel::getColorControl()const{
osg::QReflect_LightModel::ColorControl ret=static_cast<osg::QReflect_LightModel::ColorControl>( _model->getColorControl());return  ret;

}
void  osg::QReflect_LightModel::setLocalViewer(const bool &par){_model->setLocalViewer(par);emit LocalViewerChanged(par);}
void  osg::QReflect_LightModel::setTwoSided(const bool &par){_model->setTwoSided(par);emit TwoSidedChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_LightModel::QReflect_LightModel(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::LightModel*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_LightModel::~QReflect_LightModel( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_LightModel::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_LightModel::createInstance( ){
osg::ref_ptr<osg::LightModel> osg_LightModel_ptr	;
osg_LightModel_ptr = new osg::LightModel ()	;
Instance o(PMOCGETMETACLASS("osg::LightModel"),(void*)osg_LightModel_ptr.get()		,true);
_managedinstances.insert(osg_LightModel_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_LightModel::MetaQReflect_LightModel():MetaQQuickClass( "osg::LightModel"){
_typeid=&typeid(osg::LightModel );           qRegisterMetaType<QMLLightModel>();
qmlRegisterType<QReflect_LightModel>("pmoc.osg",1,0,"QReflect_LightModel");
           qmlRegisterType<QMLLightModel>("pmoc.osg",1,0,"QMLLightModel");
};
const std::string osg::MetaQReflect_LightModel::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_LightModel::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_LightModel::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_LightModel::createQQModel(Instance*i){ //return new MetaQReflect_LightModel_QModel(i);}
QMLLightModel *ret =new QMLLightModel(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::LightModelis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::LightModelis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LightModel_pmoc.cpp"
#endif


