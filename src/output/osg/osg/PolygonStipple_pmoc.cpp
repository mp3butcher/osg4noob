#include <osg/PolygonStipple>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PolygonStipple_pmoc.hpp>
#include <customCode/osg/PolygonStipple_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_PolygonStipple:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PolygonStipple::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_PolygonStipple::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PolygonStipple::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_PolygonStipple::setMask(const  GLubyte  *p0){
//params checking
 _model->setMask(p0);

}
const  GLubyte*  osg::QReflect_PolygonStipple:: getMask()const{
//params checking
return _model->getMask();

}

///DefaultConstructor////////////////
osg::QReflect_PolygonStipple::QReflect_PolygonStipple(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PolygonStipple*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PolygonStipple::~QReflect_PolygonStipple( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_PolygonStipple::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_PolygonStipple::createInstance( ){
osg::ref_ptr<osg::PolygonStipple> osg_PolygonStipple_ptr	;
osg_PolygonStipple_ptr = new osg::PolygonStipple ()	;
Instance o(PMOCGETMETACLASS("osg::PolygonStipple"),(void*)osg_PolygonStipple_ptr.get()		,true);
_managedinstances.insert(osg_PolygonStipple_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PolygonStipple::MetaQReflect_PolygonStipple():MetaQQuickClass( "osg::PolygonStipple"){
_typeid=&typeid(osg::PolygonStipple );
           qRegisterMetaType<osg::QMLPolygonStipple>();
           qRegisterMetaType<osg::QMLPolygonStipple*>("pmoc.osg.QMLPolygonStipple");
qmlRegisterType<osg::QReflect_PolygonStipple>("pmoc.osg",1,0,"QReflect_PolygonStipple");
           qmlRegisterType<osg::QMLPolygonStipple>("pmoc.osg",1,0,"QMLPolygonStipple");
};
const std::string osg::MetaQReflect_PolygonStipple::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PolygonStipple::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PolygonStipple::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PolygonStipple::createQQModel(const Instance*i){ //return new MetaQReflect_PolygonStipple_QModel(i);}
QMLPolygonStipple *ret =new QMLPolygonStipple(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::PolygonStippleis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::PolygonStippleis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PolygonStipple_pmoc.cpp"
#endif




