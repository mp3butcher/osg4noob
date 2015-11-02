#include <osg/Point>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Point_pmoc.hpp>
#include <customCode/osg/Point_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_Point::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_Point::setDistanceAttenuation(osg::QReflect_Vec3f *p0){
 _model->setDistanceAttenuation(*p0->_model);

}
const float osg::QReflect_Point::getFadeThresholdSize()const{return _model->getFadeThresholdSize();}
const float osg::QReflect_Point::getMaxSize()const{return _model->getMaxSize();}
const float osg::QReflect_Point::getMinSize()const{return _model->getMinSize();}
const float osg::QReflect_Point::getSize()const{return _model->getSize();}
void  osg::QReflect_Point::setFadeThresholdSize(const float &par){_model->setFadeThresholdSize(par);emit FadeThresholdSizeChanged(par);}
void  osg::QReflect_Point::setMaxSize(const float &par){_model->setMaxSize(par);emit MaxSizeChanged(par);}
void  osg::QReflect_Point::setMinSize(const float &par){_model->setMinSize(par);emit MinSizeChanged(par);}
void  osg::QReflect_Point::setSize(const float &par){_model->setSize(par);emit SizeChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Point::QReflect_Point(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Point*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Point::~QReflect_Point( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Point::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Point::createInstance( ){
osg::ref_ptr<osg::Point> osg_Point_ptr	;
osg_Point_ptr = new osg::Point ()	;
Instance o(PMOCGETMETACLASS("osg::Point"),(void*)osg_Point_ptr.get()		,true);
_managedinstances.insert(osg_Point_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Point::MetaQReflect_Point():MetaQQuickClass( "osg::Point"){
_typeid=&typeid(osg::Point );           qRegisterMetaType<QMLPoint>();
qmlRegisterType<QReflect_Point>("pmoc.osg",1,0,"QReflect_Point");
           qmlRegisterType<QMLPoint>("pmoc.osg",1,0,"QMLPoint");
};
const std::string osg::MetaQReflect_Point::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Point::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Point::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Point::createQQModel(Instance*i){ //return new MetaQReflect_Point_QModel(i);}
QMLPoint *ret =new QMLPoint(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::Pointis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::Pointis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Point_pmoc.cpp"
#endif


