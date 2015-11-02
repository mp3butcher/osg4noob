#include <osg/VertexProgram>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/VertexProgram_pmoc.hpp>
#include <customCode/osg/VertexProgram_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_VertexProgram::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_VertexProgram::dirtyVertexProgramObject(){
 _model->dirtyVertexProgramObject();

}
 void osg::QReflect_VertexProgram::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_VertexProgram::setVertexProgram(const  char *p0){
 _model->setVertexProgram(p0);

}
const QString osg::QReflect_VertexProgram::getVertexProgram()const{return QString(_model->getVertexProgram().c_str());}
void osg::QReflect_VertexProgram::setVertexProgram(const QString &par){_model->setVertexProgram(par.toStdString());emit VertexProgramChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_VertexProgram::QReflect_VertexProgram(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::VertexProgram );           qRegisterMetaType<QMLVertexProgram>();
qmlRegisterType<QReflect_VertexProgram>("pmoc.osg",1,0,"QReflect_VertexProgram");
           qmlRegisterType<QMLVertexProgram>("pmoc.osg",1,0,"QMLVertexProgram");
};
const std::string osg::MetaQReflect_VertexProgram::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_VertexProgram::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_VertexProgram::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_VertexProgram::createQQModel(Instance*i){ //return new MetaQReflect_VertexProgram_QModel(i);}
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


