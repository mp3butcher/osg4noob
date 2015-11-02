#include <osg/GLBeginEndAdapter>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GLBeginEndAdapter_pmoc.hpp>
#include <customCode/osg/GLBeginEndAdapter_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_GLBeginEndAdapter::End(){
 _model->End();

}
 void osg::QReflect_GLBeginEndAdapter::LoadIdentity(){
 _model->LoadIdentity();

}
 void osg::QReflect_GLBeginEndAdapter::PopMatrix(){
 _model->PopMatrix();

}
 void osg::QReflect_GLBeginEndAdapter::PushMatrix(){
 _model->PushMatrix();

}
 void osg::QReflect_GLBeginEndAdapter::reset(){
 _model->reset();

}
 void osg::QReflect_GLBeginEndAdapter::setMatrixMode(osg::QReflect_GLBeginEndAdapter::MatrixMode p0){
 _model->setMatrixMode(static_cast<osg::GLBeginEndAdapter::MatrixMode>(p0));

}
osg::QReflect_GLBeginEndAdapter::MatrixMode  osg::QReflect_GLBeginEndAdapter::setMatrixMode()const{
osg::QReflect_GLBeginEndAdapter::MatrixMode ret=static_cast<osg::QReflect_GLBeginEndAdapter::MatrixMode>( _model->setMatrixMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_GLBeginEndAdapter::QReflect_GLBeginEndAdapter(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GLBeginEndAdapter*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GLBeginEndAdapter::~QReflect_GLBeginEndAdapter( ){
 }
///update this according _model new state
void osg::QReflect_GLBeginEndAdapter::updateModel(){
}
Instance osg::MetaQReflect_GLBeginEndAdapter::createInstance( ){
osg::GLBeginEndAdapter* osg_GLBeginEndAdapter_ptr	;
osg_GLBeginEndAdapter_ptr= new osg::GLBeginEndAdapter()	;
Instance o(PMOCGETMETACLASS("osg::GLBeginEndAdapter"),(void*)osg_GLBeginEndAdapter_ptr	,true);
_managedinstances.insert(osg_GLBeginEndAdapter_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GLBeginEndAdapter::MetaQReflect_GLBeginEndAdapter():MetaQQuickClass( "osg::GLBeginEndAdapter"){
_typeid=&typeid(osg::GLBeginEndAdapter );           qRegisterMetaType<QMLGLBeginEndAdapter>();
qmlRegisterType<QReflect_GLBeginEndAdapter>("pmoc.osg",1,0,"QReflect_GLBeginEndAdapter");
           qmlRegisterType<QMLGLBeginEndAdapter>("pmoc.osg",1,0,"QMLGLBeginEndAdapter");
};
const std::string osg::MetaQReflect_GLBeginEndAdapter::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GLBeginEndAdapter::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GLBeginEndAdapter::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GLBeginEndAdapter::createQQModel(Instance*i){ //return new MetaQReflect_GLBeginEndAdapter_QModel(i);}
QMLGLBeginEndAdapter *ret =new QMLGLBeginEndAdapter(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GLBeginEndAdapter_pmoc.cpp"
#endif


