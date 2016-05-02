#include <osg/FrontFace>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/FrontFace_pmoc.hpp>
#include <customCode/osg/FrontFace_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_FrontFace:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_FrontFace::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_FrontFace::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_FrontFace::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_FrontFace::setMode(osg::QReflect_FrontFace::Mode  p0){
//params checking
 _model->setMode(static_cast<osg::FrontFace::Mode>(p0));
emit ModeChanged();

}
osg::QReflect_FrontFace::Mode  osg::QReflect_FrontFace::getMode()const{
//params checking
osg::QReflect_FrontFace::Mode ret=static_cast<osg::QReflect_FrontFace::Mode>( _model->getMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_FrontFace::QReflect_FrontFace(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::FrontFace*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_FrontFace::~QReflect_FrontFace( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_FrontFace::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_FrontFace::createInstance( ){
osg::ref_ptr<osg::FrontFace> osg_FrontFace_ptr	;
osg_FrontFace_ptr = new osg::FrontFace ()	;
Instance o(PMOCGETMETACLASS("osg::FrontFace"),(void*)osg_FrontFace_ptr.get()		,true);
_managedinstances.insert(osg_FrontFace_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_FrontFace::MetaQReflect_FrontFace():MetaQQuickClass( "osg::FrontFace"){
_typeid=&typeid(osg::FrontFace );
           qRegisterMetaType<osg::QMLFrontFace>();
           qRegisterMetaType<osg::QMLFrontFace*>("pmoc.osg.QMLFrontFace");
qmlRegisterType<osg::QReflect_FrontFace>("pmoc.osg",1,0,"QReflect_FrontFace");
           qmlRegisterType<osg::QMLFrontFace>("pmoc.osg",1,0,"QMLFrontFace");
};
const std::string osg::MetaQReflect_FrontFace::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_FrontFace::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_FrontFace::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_FrontFace::createQQModel(const Instance*i){ //return new MetaQReflect_FrontFace_QModel(i);}
QMLFrontFace *ret =new QMLFrontFace(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::FrontFaceis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::FrontFaceis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FrontFace_pmoc.cpp"
#endif




