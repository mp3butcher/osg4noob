#include <osg/Multisample>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Multisample_pmoc.hpp>
#include <customCode/osg/Multisample_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_Multisample::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_Multisample::setHint(osg::QReflect_Multisample::Mode p0){
 _model->setHint(static_cast<osg::Multisample::Mode>(p0));

}
 void osg::QReflect_Multisample::setSampleCoverage( float p0 , bool p1){
 _model->setSampleCoverage(p0 ,p1);

}
const bool osg::QReflect_Multisample::getInvert()const{return _model->getInvert();}
const float osg::QReflect_Multisample::getCoverage()const{return _model->getCoverage();}
osg::QReflect_Multisample::Mode  osg::QReflect_Multisample::getHint()const{
osg::QReflect_Multisample::Mode ret=static_cast<osg::QReflect_Multisample::Mode>( _model->getHint());return  ret;

}
void  osg::QReflect_Multisample::setCoverage(const float &par){_model->setCoverage(par);emit CoverageChanged(par);}
void  osg::QReflect_Multisample::setInvert(const bool &par){_model->setInvert(par);emit InvertChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Multisample::QReflect_Multisample(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Multisample*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Multisample::~QReflect_Multisample( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Multisample::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Multisample::createInstance( ){
osg::ref_ptr<osg::Multisample> osg_Multisample_ptr	;
osg_Multisample_ptr = new osg::Multisample ()	;
Instance o(PMOCGETMETACLASS("osg::Multisample"),(void*)osg_Multisample_ptr.get()		,true);
_managedinstances.insert(osg_Multisample_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Multisample::MetaQReflect_Multisample():MetaQQuickClass( "osg::Multisample"){
_typeid=&typeid(osg::Multisample );           qRegisterMetaType<QMLMultisample>();
qmlRegisterType<QReflect_Multisample>("pmoc.osg",1,0,"QReflect_Multisample");
           qmlRegisterType<QMLMultisample>("pmoc.osg",1,0,"QMLMultisample");
};
const std::string osg::MetaQReflect_Multisample::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Multisample::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Multisample::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Multisample::createQQModel(Instance*i){ //return new MetaQReflect_Multisample_QModel(i);}
QMLMultisample *ret =new QMLMultisample(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::Multisampleis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::Multisampleis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Multisample_pmoc.cpp"
#endif


