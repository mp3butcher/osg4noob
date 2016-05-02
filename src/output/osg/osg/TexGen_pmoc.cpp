#include <osg/TexGen>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/TexGen_pmoc.hpp>
#include <customCode/osg/TexGen_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Plane_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_TexGen:: isTextureAttribute()const{
//params checking
return _model->isTextureAttribute();

}
 int  osg::QReflect_TexGen:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TexGen::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_TexGen::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TexGen::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_TexGen::setMode(osg::QReflect_TexGen::Mode  p0){
//params checking
 _model->setMode(static_cast<osg::TexGen::Mode>(p0));
emit ModeChanged();

}
 void osg::QReflect_TexGen::setPlane(osg::QReflect_TexGen::Coord  p0 ,osg::QReflect_Plane  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_TexGen::setPlane : parameter n.1 is NULL\n"<<endl;return;}
 _model->setPlane(static_cast<osg::TexGen::Coord>(p0) ,*p1->_model);

}
 void osg::QReflect_TexGen::setPlanesFromMatrix(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TexGen::setPlanesFromMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPlanesFromMatrix(*p0->_model);

}
osg::QReflect_TexGen::Mode  osg::QReflect_TexGen::getMode()const{
//params checking
osg::QReflect_TexGen::Mode ret=static_cast<osg::QReflect_TexGen::Mode>( _model->getMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_TexGen::QReflect_TexGen(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TexGen*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TexGen::~QReflect_TexGen( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TexGen::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TexGen::createInstance( ){
osg::ref_ptr<osg::TexGen> osg_TexGen_ptr	;
osg_TexGen_ptr = new osg::TexGen ()	;
Instance o(PMOCGETMETACLASS("osg::TexGen"),(void*)osg_TexGen_ptr.get()		,true);
_managedinstances.insert(osg_TexGen_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TexGen::MetaQReflect_TexGen():MetaQQuickClass( "osg::TexGen"){
_typeid=&typeid(osg::TexGen );
           qRegisterMetaType<osg::QMLTexGen>();
           qRegisterMetaType<osg::QMLTexGen*>("pmoc.osg.QMLTexGen");
qmlRegisterType<osg::QReflect_TexGen>("pmoc.osg",1,0,"QReflect_TexGen");
           qmlRegisterType<osg::QMLTexGen>("pmoc.osg",1,0,"QMLTexGen");
};
const std::string osg::MetaQReflect_TexGen::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TexGen::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TexGen::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TexGen::createQQModel(const Instance*i){ //return new MetaQReflect_TexGen_QModel(i);}
QMLTexGen *ret =new QMLTexGen(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::TexGenis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::TexGenis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TexGen_pmoc.cpp"
#endif




