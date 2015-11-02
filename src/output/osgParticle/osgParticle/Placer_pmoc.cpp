#include <osgParticle/Placer>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/Placer_pmoc.hpp>
#include <customCode/osgParticle/Placer_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_Placer::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 float  osgParticle::QReflect_Placer::volume()const{
return _model->volume();

}
const  char*  osgParticle::QReflect_Placer::className()const{
return _model->className();

}
const  char*  osgParticle::QReflect_Placer::libraryName()const{
return _model->libraryName();

}

///DefaultConstructor////////////////
osgParticle::QReflect_Placer::QReflect_Placer(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::Placer*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_Placer::~QReflect_Placer( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_Placer::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_Placer::createInstance( ){
std::cerr<<"osgParticle::Placer is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_Placer::MetaQReflect_Placer():MetaQQuickClass( "osgParticle::Placer"){
_typeid=&typeid(osgParticle::Placer );           qRegisterMetaType<QMLPlacer>();
qmlRegisterType<QReflect_Placer>("pmoc.osgParticle",1,0,"QReflect_Placer");
           qmlRegisterType<QMLPlacer>("pmoc.osgParticle",1,0,"QMLPlacer");
};
const std::string osgParticle::MetaQReflect_Placer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_Placer::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_Placer::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_Placer::createQQModel(Instance*i){ //return new MetaQReflect_Placer_QModel(i);}
QMLPlacer *ret =new QMLPlacer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osgParticle::Placeris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osgParticle::Placeris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Placer_pmoc.cpp"
#endif


