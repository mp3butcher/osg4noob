#include <osgParticle/SegmentPlacer>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/SegmentPlacer_pmoc.hpp>
#include <customCode/osgParticle/SegmentPlacer_pmoc.hpp>
#include <customCode/osgParticle/Placer_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
 float  osgParticle::QReflect_SegmentPlacer::volume()const{
return _model->volume();

}
 void osgParticle::QReflect_SegmentPlacer::place(osgParticle::QReflect_Particle *p0)const{
 _model->place(p0->_model);

}
 void osgParticle::QReflect_SegmentPlacer::setSegment(osg::QReflect_Vec3f *p0 ,osg::QReflect_Vec3f *p1){
 _model->setSegment(*p0->_model ,*p1->_model);

}
 void osgParticle::QReflect_SegmentPlacer::setVertexA( float p0 , float p1 , float p2){
 _model->setVertexA(p0 ,p1 ,p2);

}
 void osgParticle::QReflect_SegmentPlacer::setVertexA(osg::QReflect_Vec3f *p0){
 _model->setVertexA(*p0->_model);

}
 void osgParticle::QReflect_SegmentPlacer::setVertexB( float p0 , float p1 , float p2){
 _model->setVertexB(p0 ,p1 ,p2);

}
 void osgParticle::QReflect_SegmentPlacer::setVertexB(osg::QReflect_Vec3f *p0){
 _model->setVertexB(*p0->_model);

}

///DefaultConstructor////////////////
osgParticle::QReflect_SegmentPlacer::QReflect_SegmentPlacer(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::SegmentPlacer*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_SegmentPlacer::~QReflect_SegmentPlacer( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_SegmentPlacer::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_SegmentPlacer::createInstance( ){
osg::ref_ptr<osgParticle::SegmentPlacer> osgParticle_SegmentPlacer_ptr	;
osgParticle_SegmentPlacer_ptr = new osgParticle::SegmentPlacer ()	;
Instance o(PMOCGETMETACLASS("osgParticle::SegmentPlacer"),(void*)osgParticle_SegmentPlacer_ptr.get()		,true);
_managedinstances.insert(osgParticle_SegmentPlacer_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_SegmentPlacer::MetaQReflect_SegmentPlacer():MetaQQuickClass( "osgParticle::SegmentPlacer"){
_typeid=&typeid(osgParticle::SegmentPlacer );           qRegisterMetaType<QMLSegmentPlacer>();
qmlRegisterType<QReflect_SegmentPlacer>("pmoc.osgParticle",1,0,"QReflect_SegmentPlacer");
           qmlRegisterType<QMLSegmentPlacer>("pmoc.osgParticle",1,0,"QMLSegmentPlacer");
};
const std::string osgParticle::MetaQReflect_SegmentPlacer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_SegmentPlacer::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_SegmentPlacer::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_SegmentPlacer::createQQModel(Instance*i){ //return new MetaQReflect_SegmentPlacer_QModel(i);}
QMLSegmentPlacer *ret =new QMLSegmentPlacer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Placer *mother =dynamic_cast<osgParticle::Placer*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Placer");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Placer model for osgParticle::SegmentPlaceris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Placer");
if(!cl){std::cerr<<"osgParticle::Placer QQModel for osgParticle::SegmentPlaceris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_SegmentPlacer_pmoc.cpp"
#endif




