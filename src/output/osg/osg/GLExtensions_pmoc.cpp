#include <osg/GLExtensions>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GLExtensions_pmoc.hpp>
#include <customCode/osg/GLExtensions_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/GLExtensions_pmoc.hpp>
using namespace pmoc;
 GLuint  osg::QReflect_GLExtensions::getCurrentProgram()const{
return _model->getCurrentProgram();

}
 bool  osg::QReflect_GLExtensions::isBindImageTextureSupported()const{
return _model->isBindImageTextureSupported();

}
 bool  osg::QReflect_GLExtensions::isCompressedTexImage2DSupported()const{
return _model->isCompressedTexImage2DSupported();

}
 bool  osg::QReflect_GLExtensions::isCompressedTexImage3DSupported()const{
return _model->isCompressedTexImage3DSupported();

}
 bool  osg::QReflect_GLExtensions::isCompressedTexSubImage2DSupported()const{
return _model->isCompressedTexSubImage2DSupported();

}
 bool  osg::QReflect_GLExtensions::isCompressedTexSubImage3DSupported()const{
return _model->isCompressedTexSubImage3DSupported();

}
 bool  osg::QReflect_GLExtensions::isRenderbufferMultisampleCoverageSupported()const{
return _model->isRenderbufferMultisampleCoverageSupported();

}
 bool  osg::QReflect_GLExtensions::isRenderbufferMultisampleSupported()const{
return _model->isRenderbufferMultisampleSupported();

}
 bool  osg::QReflect_GLExtensions::isTexStorage2DSupported()const{
return _model->isTexStorage2DSupported();

}
 void osg::QReflect_GLExtensions::Set( unsigned int p0 ,osg::QReflect_GLExtensions *p1){
 _model->Set(p0 ,p1->_model);

}
osg::QReflect_GLExtensions*osg::QReflect_GLExtensions::Get( unsigned int p0 , bool p1){
PMOCSAFEADDOBJECT(*_model->Get(p0 ,p1),inst);
return inst.isValid()?((osg::QReflect_GLExtensions * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_GLExtensions::QReflect_GLExtensions(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GLExtensions*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GLExtensions::~QReflect_GLExtensions( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_GLExtensions::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_GLExtensions::createInstance( ){
std::cerr<<"osg::GLExtensions is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GLExtensions::MetaQReflect_GLExtensions():MetaQQuickClass( "osg::GLExtensions"){
_typeid=&typeid(osg::GLExtensions );           qRegisterMetaType<QMLGLExtensions>();
qmlRegisterType<QReflect_GLExtensions>("pmoc.osg",1,0,"QReflect_GLExtensions");
           qmlRegisterType<QMLGLExtensions>("pmoc.osg",1,0,"QMLGLExtensions");
};
const std::string osg::MetaQReflect_GLExtensions::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GLExtensions::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GLExtensions::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GLExtensions::createQQModel(Instance*i){ //return new MetaQReflect_GLExtensions_QModel(i);}
QMLGLExtensions *ret =new QMLGLExtensions(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::GLExtensionsis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::GLExtensionsis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GLExtensions_pmoc.cpp"
#endif


