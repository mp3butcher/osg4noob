#include <osg/Program>
#include <osg/Shader>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Program_pmoc.hpp>
#include <customCode/osg/Program_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
//#include <customCode/osg/Shader_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <osg/Shader>
using namespace pmoc;
 bool  osg::QReflect_Program::isFixedFunction()const{
return _model->isFixedFunction();

}
 int  osg::QReflect_Program::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_Program::getNumShaders()const{
return _model->getNumShaders();

}
 unsigned int  osg::QReflect_Program::getNumTransformFeedBackVaryings()const{
return _model->getNumTransformFeedBackVaryings();

}
 void osg::QReflect_Program::addTransformFeedBackVarying(const  QString &p0){
 _model->addTransformFeedBackVarying(std::string(p0.toStdString()));

}
 void osg::QReflect_Program::dirtyProgram(){
 _model->dirtyProgram();

}
 void osg::QReflect_Program::removeBindAttribLocation(const  QString &p0){
 _model->removeBindAttribLocation(std::string(p0.toStdString()));

}
 void osg::QReflect_Program::removeBindFragDataLocation(const  QString &p0){
 _model->removeBindFragDataLocation(std::string(p0.toStdString()));

}
 void osg::QReflect_Program::removeBindUniformBlock(const  QString &p0){
 _model->removeBindUniformBlock(std::string(p0.toStdString()));

}
 void osg::QReflect_Program::removeTransformFeedBackVarying(const  QString &p0){
 _model->removeTransformFeedBackVarying(std::string(p0.toStdString()));

}
 void osg::QReflect_Program::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Program::setThreadSafeRefUnref( bool p0){
 _model->setThreadSafeRefUnref(p0);

}
QString  osg::QReflect_Program::getTransformFeedBackVarying( unsigned int p0)const{
QString ret(_model->getTransformFeedBackVarying(p0).c_str());return ret;

}
/*osg::QReflect_Shader*osg::QReflect_Program::getShader( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getShader(p0),inst);
return inst.isValid()?((osg::QReflect_Shader * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shader*osg::QReflect_Program::getShader( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getShader(p0),inst);
return inst.isValid()?((osg::QReflect_Shader * )inst.model->createQQModel(&inst)):NULL;
}
void   osg::QReflect_Program::addShader( osg::QReflect_Shader *par){
_model->addShader(par->_model);
}
void   osg::QReflect_Program::pmoc_reverse_addShader( osg::QReflect_Shader *par){
_model->removeShader(par->_model);
emit ShaderCollectionChanged();
}*/

///DefaultConstructor////////////////
osg::QReflect_Program::QReflect_Program(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Program*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Program::~QReflect_Program( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Program::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Program::createInstance( ){
osg::ref_ptr<osg::Program> osg_Program_ptr	;
osg_Program_ptr = new osg::Program ()	;
Instance o(PMOCGETMETACLASS("osg::Program"),(void*)osg_Program_ptr.get()		,true);
_managedinstances.insert(osg_Program_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Program::MetaQReflect_Program():MetaQQuickClass( "osg::Program"){
_typeid=&typeid(osg::Program );           qRegisterMetaType<QMLProgram>();
qmlRegisterType<QReflect_Program>("pmoc.osg",1,0,"QReflect_Program");
           qmlRegisterType<QMLProgram>("pmoc.osg",1,0,"QMLProgram");
       PMOCACTION("getShader","addShader","removeShader");
};
const std::string osg::MetaQReflect_Program::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Program::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Program::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Program::createQQModel(Instance*i){ //return new MetaQReflect_Program_QModel(i);}
QMLProgram *ret =new QMLProgram(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::Programis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::Programis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Program_pmoc.cpp"
#endif


