#include <osg/SampleMaski>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/SampleMaski_pmoc.hpp>
#include <customCode/osg/SampleMaski_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_SampleMaski:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_SampleMaski::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_SampleMaski:: getMask( unsigned int  p0)const{
//params checking
return _model->getMask(p0);

}
 void osg::QReflect_SampleMaski::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_SampleMaski::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_SampleMaski::setMask( unsigned int  p0 , unsigned int  p1){
//params checking
 _model->setMask(p0 ,p1);

}

///DefaultConstructor////////////////
osg::QReflect_SampleMaski::QReflect_SampleMaski(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::SampleMaski*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_SampleMaski::~QReflect_SampleMaski( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_SampleMaski::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_SampleMaski::createInstance( ){
osg::ref_ptr<osg::SampleMaski> osg_SampleMaski_ptr	;
osg_SampleMaski_ptr = new osg::SampleMaski ()	;
Instance o(PMOCGETMETACLASS("osg::SampleMaski"),(void*)osg_SampleMaski_ptr.get()		,true);
_managedinstances.insert(osg_SampleMaski_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_SampleMaski::MetaQReflect_SampleMaski():MetaQQuickClass( "osg::SampleMaski"){
_typeid=&typeid(osg::SampleMaski );
           qRegisterMetaType<osg::QMLSampleMaski>();
           qRegisterMetaType<osg::QMLSampleMaski*>("pmoc.osg.QMLSampleMaski");
qmlRegisterType<osg::QReflect_SampleMaski>("pmoc.osg",1,0,"QReflect_SampleMaski");
           qmlRegisterType<osg::QMLSampleMaski>("pmoc.osg",1,0,"QMLSampleMaski");
};
const std::string osg::MetaQReflect_SampleMaski::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_SampleMaski::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_SampleMaski::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_SampleMaski::createQQModel(const Instance*i){ //return new MetaQReflect_SampleMaski_QModel(i);}
QMLSampleMaski *ret =new QMLSampleMaski(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::SampleMaskiis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::SampleMaskiis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_SampleMaski_pmoc.cpp"
#endif




