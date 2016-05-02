#include <osg/CullFace>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/CullFace_pmoc.hpp>
#include <customCode/osg/CullFace_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_CullFace:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullFace::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_CullFace::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullFace::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_CullFace::setMode(osg::QReflect_CullFace::Mode  p0){
//params checking
 _model->setMode(static_cast<osg::CullFace::Mode>(p0));
emit ModeChanged();

}
osg::QReflect_CullFace::Mode  osg::QReflect_CullFace::getMode()const{
//params checking
osg::QReflect_CullFace::Mode ret=static_cast<osg::QReflect_CullFace::Mode>( _model->getMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_CullFace::QReflect_CullFace(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::CullFace*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_CullFace::~QReflect_CullFace( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_CullFace::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_CullFace::createInstance( ){
osg::ref_ptr<osg::CullFace> osg_CullFace_ptr	;
osg_CullFace_ptr = new osg::CullFace ()	;
Instance o(PMOCGETMETACLASS("osg::CullFace"),(void*)osg_CullFace_ptr.get()		,true);
_managedinstances.insert(osg_CullFace_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_CullFace::MetaQReflect_CullFace():MetaQQuickClass( "osg::CullFace"){
_typeid=&typeid(osg::CullFace );
           qRegisterMetaType<osg::QMLCullFace>();
           qRegisterMetaType<osg::QMLCullFace*>("pmoc.osg.QMLCullFace");
qmlRegisterType<osg::QReflect_CullFace>("pmoc.osg",1,0,"QReflect_CullFace");
           qmlRegisterType<osg::QMLCullFace>("pmoc.osg",1,0,"QMLCullFace");
};
const std::string osg::MetaQReflect_CullFace::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CullFace::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CullFace::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CullFace::createQQModel(const Instance*i){ //return new MetaQReflect_CullFace_QModel(i);}
QMLCullFace *ret =new QMLCullFace(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::CullFaceis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::CullFaceis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CullFace_pmoc.cpp"
#endif




