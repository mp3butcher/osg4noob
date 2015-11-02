#include <osgParticle/MultiSegmentPlacer>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/MultiSegmentPlacer_pmoc.hpp>
#include <customCode/osgParticle/MultiSegmentPlacer_pmoc.hpp>
#include <customCode/osgParticle/Placer_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
 float  osgParticle::QReflect_MultiSegmentPlacer::volume()const{
return _model->volume();

}
 int  osgParticle::QReflect_MultiSegmentPlacer::numVertices()const{
return _model->numVertices();

}
 void osgParticle::QReflect_MultiSegmentPlacer::addVertex( float p0 , float p1 , float p2){
 _model->addVertex(p0 ,p1 ,p2);

}
 void osgParticle::QReflect_MultiSegmentPlacer::addVertex(osg::QReflect_Vec3f *p0){
 _model->addVertex(*p0->_model);

}
 void osgParticle::QReflect_MultiSegmentPlacer::place(osgParticle::QReflect_Particle *p0)const{
 _model->place(p0->_model);

}
 void osgParticle::QReflect_MultiSegmentPlacer::removeVertex( int p0){
 _model->removeVertex(p0);

}
 void osgParticle::QReflect_MultiSegmentPlacer::setVertex( int p0 , float p1 , float p2 , float p3){
 _model->setVertex(p0 ,p1 ,p2 ,p3);

}
 void osgParticle::QReflect_MultiSegmentPlacer::setVertex( int p0 ,osg::QReflect_Vec3f *p1){
 _model->setVertex(p0 ,*p1->_model);

}

///DefaultConstructor////////////////
osgParticle::QReflect_MultiSegmentPlacer::QReflect_MultiSegmentPlacer(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::MultiSegmentPlacer*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_MultiSegmentPlacer::~QReflect_MultiSegmentPlacer( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_MultiSegmentPlacer::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_MultiSegmentPlacer::createInstance( ){
osg::ref_ptr<osgParticle::MultiSegmentPlacer> osgParticle_MultiSegmentPlacer_ptr	;
osgParticle_MultiSegmentPlacer_ptr = new osgParticle::MultiSegmentPlacer ()	;
Instance o(PMOCGETMETACLASS("osgParticle::MultiSegmentPlacer"),(void*)osgParticle_MultiSegmentPlacer_ptr.get()		,true);
_managedinstances.insert(osgParticle_MultiSegmentPlacer_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_MultiSegmentPlacer::MetaQReflect_MultiSegmentPlacer():MetaQQuickClass( "osgParticle::MultiSegmentPlacer"){
_typeid=&typeid(osgParticle::MultiSegmentPlacer );           qRegisterMetaType<QMLMultiSegmentPlacer>();
qmlRegisterType<QReflect_MultiSegmentPlacer>("pmoc.osgParticle",1,0,"QReflect_MultiSegmentPlacer");
           qmlRegisterType<QMLMultiSegmentPlacer>("pmoc.osgParticle",1,0,"QMLMultiSegmentPlacer");
};
const std::string osgParticle::MetaQReflect_MultiSegmentPlacer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_MultiSegmentPlacer::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_MultiSegmentPlacer::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_MultiSegmentPlacer::createQQModel(Instance*i){ //return new MetaQReflect_MultiSegmentPlacer_QModel(i);}
QMLMultiSegmentPlacer *ret =new QMLMultiSegmentPlacer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Placer *mother =dynamic_cast<osgParticle::Placer*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Placer");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Placer model for osgParticle::MultiSegmentPlaceris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Placer");
if(!cl){std::cerr<<"osgParticle::Placer QQModel for osgParticle::MultiSegmentPlaceris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_MultiSegmentPlacer_pmoc.cpp"
#endif




