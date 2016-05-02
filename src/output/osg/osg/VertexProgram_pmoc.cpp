#include <osg/VertexProgram>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/VertexProgram_pmoc.hpp>
#include <customCode/osg/VertexProgram_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 GLuint&  osg::QReflect_VertexProgram:: getVertexProgramID( unsigned int  p0)const{
//params checking
return _model->getVertexProgramID(p0);

}
 int  osg::QReflect_VertexProgram:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_VertexProgram::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_VertexProgram::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_VertexProgram::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_VertexProgram::compileGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_VertexProgram::compileGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->compileGLObjects(*p0->_model);

}
 void osg::QReflect_VertexProgram::deleteVertexProgramObject( unsigned int  p0 , GLuint  p1){
//params checking
 _model->deleteVertexProgramObject(p0 ,p1);

}
 void osg::QReflect_VertexProgram::dirtyVertexProgramObject(){
//params checking
 _model->dirtyVertexProgramObject();

}
 void osg::QReflect_VertexProgram::discardDeletedVertexProgramObjects( unsigned int  p0){
//params checking
 _model->discardDeletedVertexProgramObjects(p0);

}
 void osg::QReflect_VertexProgram::flushDeletedVertexProgramObjects( unsigned int  p0 , double  p1 , double  &p2){
//params checking
 _model->flushDeletedVertexProgramObjects(p0 ,p1 ,p2);

}
 void osg::QReflect_VertexProgram::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_VertexProgram::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_VertexProgram::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_VertexProgram::setMatrix(const  GLenum  p0 ,osg::QReflect_Matrixd  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_VertexProgram::setMatrix : parameter n.1 is NULL\n"<<endl;return;}
 _model->setMatrix(p0 ,*p1->_model);

}
 void osg::QReflect_VertexProgram::setProgramLocalParameter(const  GLuint  p0 ,osg::QReflect_Vec4f  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_VertexProgram::setProgramLocalParameter : parameter n.1 is NULL\n"<<endl;return;}
 _model->setProgramLocalParameter(p0 ,*p1->_model);

}
 void osg::QReflect_VertexProgram::setVertexProgram(const  QString  &p0){
//params checking
 _model->setVertexProgram(std::string(p0.toStdString()));
emit VertexProgramChanged();

}
 void osg::QReflect_VertexProgram::setVertexProgram(const  char  *p0){
//params checking
 _model->setVertexProgram(p0);

}
QString  osg::QReflect_VertexProgram::getVertexProgram()const{
//params checking
QString ret(_model->getVertexProgram().c_str());return ret;

}

///DefaultConstructor////////////////
osg::QReflect_VertexProgram::QReflect_VertexProgram(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::VertexProgram*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_VertexProgram::~QReflect_VertexProgram( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_VertexProgram::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_VertexProgram::createInstance( ){
osg::ref_ptr<osg::VertexProgram> osg_VertexProgram_ptr	;
osg_VertexProgram_ptr = new osg::VertexProgram ()	;
Instance o(PMOCGETMETACLASS("osg::VertexProgram"),(void*)osg_VertexProgram_ptr.get()		,true);
_managedinstances.insert(osg_VertexProgram_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_VertexProgram::MetaQReflect_VertexProgram():MetaQQuickClass( "osg::VertexProgram"){
_typeid=&typeid(osg::VertexProgram );
           qRegisterMetaType<osg::QMLVertexProgram>();
           qRegisterMetaType<osg::QMLVertexProgram*>("pmoc.osg.QMLVertexProgram");
qmlRegisterType<osg::QReflect_VertexProgram>("pmoc.osg",1,0,"QReflect_VertexProgram");
           qmlRegisterType<osg::QMLVertexProgram>("pmoc.osg",1,0,"QMLVertexProgram");
};
const std::string osg::MetaQReflect_VertexProgram::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_VertexProgram::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_VertexProgram::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_VertexProgram::createQQModel(const Instance*i){ //return new MetaQReflect_VertexProgram_QModel(i);}
QMLVertexProgram *ret =new QMLVertexProgram(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::VertexProgramis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::VertexProgramis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_VertexProgram_pmoc.cpp"
#endif




