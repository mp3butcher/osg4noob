#include <osg/Program>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Program_pmoc.hpp>
#include <customCode/osg/Program_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/Shader_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Program:: getTransformFeedBackMode()const{
//params checking
return _model->getTransformFeedBackMode();

}
 GLint  osg::QReflect_Program:: getParameter( GLenum  p0)const{
//params checking
return _model->getParameter(p0);

}
 bool  osg::QReflect_Program:: addShader(osg::QReflect_Shader  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Program::addShader : parameter n.0 is NULL\n"<<endl;return -1;}
emit ShaderCollectionChanged();
return _model->addShader(p0->_model);

}
 bool  osg::QReflect_Program:: isFixedFunction()const{
//params checking
return _model->isFixedFunction();

}
 bool  osg::QReflect_Program:: removeShader(osg::QReflect_Shader  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Program::removeShader : parameter n.0 is NULL\n"<<endl;return -1;}
emit ShaderCollectionChanged();
return _model->removeShader(p0->_model);

}
 int  osg::QReflect_Program:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Program::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_Program:: getNumShaders()const{
//params checking
return _model->getNumShaders();

}
 unsigned int  osg::QReflect_Program:: getNumTransformFeedBackVaryings()const{
//params checking
return _model->getNumTransformFeedBackVaryings();

}
 void osg::QReflect_Program::addBindAttribLocation(const  QString  &p0 , GLuint  p1){
//params checking
 _model->addBindAttribLocation(std::string(p0.toStdString()) ,p1);

}
 void osg::QReflect_Program::addBindFragDataLocation(const  QString  &p0 , GLuint  p1){
//params checking
 _model->addBindFragDataLocation(std::string(p0.toStdString()) ,p1);

}
 void osg::QReflect_Program::addBindUniformBlock(const  QString  &p0 , GLuint  p1){
//params checking
 _model->addBindUniformBlock(std::string(p0.toStdString()) ,p1);

}
 void osg::QReflect_Program::addTransformFeedBackVarying(const  QString  &p0){
//params checking
 _model->addTransformFeedBackVarying(std::string(p0.toStdString()));

}
 void osg::QReflect_Program::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Program::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_Program::compileGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Program::compileGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->compileGLObjects(*p0->_model);

}
 void osg::QReflect_Program::deleteGlProgram( unsigned int  p0 , GLuint  p1){
//params checking
 _model->deleteGlProgram(p0 ,p1);

}
 void osg::QReflect_Program::dirtyProgram(){
//params checking
 _model->dirtyProgram();

}
 void osg::QReflect_Program::discardDeletedGlPrograms( unsigned int  p0){
//params checking
 _model->discardDeletedGlPrograms(p0);

}
 void osg::QReflect_Program::flushDeletedGlPrograms( unsigned int  p0 , double  p1 , double  &p2){
//params checking
 _model->flushDeletedGlPrograms(p0 ,p1 ,p2);

}
 void osg::QReflect_Program::getComputeGroups( GLint  &p0 , GLint  &p1 , GLint  &p2)const{
//params checking
 _model->getComputeGroups(p0 ,p1 ,p2);

}
 void osg::QReflect_Program::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Program::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_Program::removeBindAttribLocation(const  QString  &p0){
//params checking
 _model->removeBindAttribLocation(std::string(p0.toStdString()));

}
 void osg::QReflect_Program::removeBindFragDataLocation(const  QString  &p0){
//params checking
 _model->removeBindFragDataLocation(std::string(p0.toStdString()));

}
 void osg::QReflect_Program::removeBindUniformBlock(const  QString  &p0){
//params checking
 _model->removeBindUniformBlock(std::string(p0.toStdString()));

}
 void osg::QReflect_Program::removeTransformFeedBackVarying(const  QString  &p0){
//params checking
 _model->removeTransformFeedBackVarying(std::string(p0.toStdString()));

}
 void osg::QReflect_Program::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Program::setComputeGroups( GLint  p0 , GLint  p1 , GLint  p2){
//params checking
 _model->setComputeGroups(p0 ,p1 ,p2);

}
 void osg::QReflect_Program::setParameter( GLenum  p0 , GLint  p1){
//params checking
 _model->setParameter(p0 ,p1);

}
 void osg::QReflect_Program::setThreadSafeRefUnref( bool  p0){
//params checking
 _model->setThreadSafeRefUnref(p0);

}
 void osg::QReflect_Program::setTransformFeedBackMode( GLenum  p0){
//params checking
 _model->setTransformFeedBackMode(p0);
emit TransformFeedBackModeChanged();

}
QString  osg::QReflect_Program::getTransformFeedBackVarying( unsigned int  p0)const{
//params checking
QString ret(_model->getTransformFeedBackVarying(p0).c_str());return ret;

}
osg::QReflect_Shader*osg::QReflect_Program::getShader( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getShader(p0),inst);
return inst.isValid()?((osg::QReflect_Shader * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shader*osg::QReflect_Program::getShader( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getShader(p0),inst);
return inst.isValid()?((osg::QReflect_Shader * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Program::QReflect_Program(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Program );
           qRegisterMetaType<osg::QMLProgram>();
           qRegisterMetaType<osg::QMLProgram*>("pmoc.osg.QMLProgram");
qmlRegisterType<osg::QReflect_Program>("pmoc.osg",1,0,"QReflect_Program");
           qmlRegisterType<osg::QMLProgram>("pmoc.osg",1,0,"QMLProgram");
};
const std::string osg::MetaQReflect_Program::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Program::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Program::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Program::createQQModel(const Instance*i){ //return new MetaQReflect_Program_QModel(i);}
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




