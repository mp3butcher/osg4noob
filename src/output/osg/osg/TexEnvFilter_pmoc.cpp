#include <osg/TexEnvFilter>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/TexEnvFilter_pmoc.hpp>
#include <customCode/osg/TexEnvFilter_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_TexEnvFilter::isTextureAttribute()const{
return _model->isTextureAttribute();

}
 int  osg::QReflect_TexEnvFilter::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
const float osg::QReflect_TexEnvFilter::getLodBias()const{return _model->getLodBias();}
void  osg::QReflect_TexEnvFilter::setLodBias(const float &par){_model->setLodBias(par);emit LodBiasChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_TexEnvFilter::QReflect_TexEnvFilter(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TexEnvFilter*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TexEnvFilter::~QReflect_TexEnvFilter( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TexEnvFilter::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TexEnvFilter::createInstance( ){
osg::ref_ptr<osg::TexEnvFilter> osg_TexEnvFilter_ptr	;
osg_TexEnvFilter_ptr = new osg::TexEnvFilter ()	;
Instance o(PMOCGETMETACLASS("osg::TexEnvFilter"),(void*)osg_TexEnvFilter_ptr.get()		,true);
_managedinstances.insert(osg_TexEnvFilter_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TexEnvFilter::MetaQReflect_TexEnvFilter():MetaQQuickClass( "osg::TexEnvFilter"){
_typeid=&typeid(osg::TexEnvFilter );           qRegisterMetaType<QMLTexEnvFilter>();
qmlRegisterType<QReflect_TexEnvFilter>("pmoc.osg",1,0,"QReflect_TexEnvFilter");
           qmlRegisterType<QMLTexEnvFilter>("pmoc.osg",1,0,"QMLTexEnvFilter");
};
const std::string osg::MetaQReflect_TexEnvFilter::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TexEnvFilter::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TexEnvFilter::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TexEnvFilter::createQQModel(Instance*i){ //return new MetaQReflect_TexEnvFilter_QModel(i);}
QMLTexEnvFilter *ret =new QMLTexEnvFilter(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::TexEnvFilteris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::TexEnvFilteris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TexEnvFilter_pmoc.cpp"
#endif


