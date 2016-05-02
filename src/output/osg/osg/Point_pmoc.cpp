#include <osg/Point>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Point_pmoc.hpp>
#include <customCode/osg/Point_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 float  osg::QReflect_Point:: getFadeThresholdSize()const{
//params checking
return _model->getFadeThresholdSize();

}
 float  osg::QReflect_Point:: getMaxSize()const{
//params checking
return _model->getMaxSize();

}
 float  osg::QReflect_Point:: getMinSize()const{
//params checking
return _model->getMinSize();

}
 float  osg::QReflect_Point:: getSize()const{
//params checking
return _model->getSize();

}
 int  osg::QReflect_Point:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Point::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_Point::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Point::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_Point::setDistanceAttenuation(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Point::setDistanceAttenuation : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDistanceAttenuation(*p0->_model);

}
 void osg::QReflect_Point::setFadeThresholdSize( float  p0){
//params checking
 _model->setFadeThresholdSize(p0);
emit FadeThresholdSizeChanged();

}
 void osg::QReflect_Point::setMaxSize( float  p0){
//params checking
 _model->setMaxSize(p0);
emit MaxSizeChanged();

}
 void osg::QReflect_Point::setMinSize( float  p0){
//params checking
 _model->setMinSize(p0);
emit MinSizeChanged();

}
 void osg::QReflect_Point::setSize( float  p0){
//params checking
 _model->setSize(p0);
emit SizeChanged();

}

///DefaultConstructor////////////////
osg::QReflect_Point::QReflect_Point(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Point );
           qRegisterMetaType<osg::QMLPoint>();
           qRegisterMetaType<osg::QMLPoint*>("pmoc.osg.QMLPoint");
qmlRegisterType<osg::QReflect_Point>("pmoc.osg",1,0,"QReflect_Point");
           qmlRegisterType<osg::QMLPoint>("pmoc.osg",1,0,"QMLPoint");
};
const std::string osg::MetaQReflect_Point::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Point::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Point::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Point::createQQModel(const Instance*i){ //return new MetaQReflect_Point_QModel(i);}
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




