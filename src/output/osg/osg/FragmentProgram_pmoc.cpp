#include <osg/FragmentProgram>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/FragmentProgram_pmoc.hpp>
#include <customCode/osg/FragmentProgram_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 GLuint&  osg::QReflect_FragmentProgram::getFragmentProgramID( unsigned int p0)const{
return _model->getFragmentProgramID(p0);

}
 int  osg::QReflect_FragmentProgram::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_FragmentProgram::dirtyFragmentProgramObject(){
 _model->dirtyFragmentProgramObject();

}
 void osg::QReflect_FragmentProgram::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_FragmentProgram::setFragmentProgram(const  char *p0){
 _model->setFragmentProgram(p0);

}
 void osg::QReflect_FragmentProgram::setMatrix(const  GLenum p0 ,osg::QReflect_Matrixd *p1){
 _model->setMatrix(p0 ,*p1->_model);

}
 void osg::QReflect_FragmentProgram::setProgramLocalParameter(const  GLuint p0 ,osg::QReflect_Vec4f *p1){
 _model->setProgramLocalParameter(p0 ,*p1->_model);

}
const QString osg::QReflect_FragmentProgram::getFragmentProgram()const{return QString(_model->getFragmentProgram().c_str());}
void osg::QReflect_FragmentProgram::setFragmentProgram(const QString &par){_model->setFragmentProgram(par.toStdString());emit FragmentProgramChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_FragmentProgram::QReflect_FragmentProgram(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::FragmentProgram*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_FragmentProgram::~QReflect_FragmentProgram( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_FragmentProgram::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_FragmentProgram::createInstance( ){
osg::ref_ptr<osg::FragmentProgram> osg_FragmentProgram_ptr	;
osg_FragmentProgram_ptr = new osg::FragmentProgram ()	;
Instance o(PMOCGETMETACLASS("osg::FragmentProgram"),(void*)osg_FragmentProgram_ptr.get()		,true);
_managedinstances.insert(osg_FragmentProgram_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_FragmentProgram::MetaQReflect_FragmentProgram():MetaQQuickClass( "osg::FragmentProgram"){
_typeid=&typeid(osg::FragmentProgram );           qRegisterMetaType<QMLFragmentProgram>();
qmlRegisterType<QReflect_FragmentProgram>("pmoc.osg",1,0,"QReflect_FragmentProgram");
           qmlRegisterType<QMLFragmentProgram>("pmoc.osg",1,0,"QMLFragmentProgram");
};
const std::string osg::MetaQReflect_FragmentProgram::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_FragmentProgram::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_FragmentProgram::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_FragmentProgram::createQQModel(Instance*i){ //return new MetaQReflect_FragmentProgram_QModel(i);}
QMLFragmentProgram *ret =new QMLFragmentProgram(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::FragmentProgramis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::FragmentProgramis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FragmentProgram_pmoc.cpp"
#endif


