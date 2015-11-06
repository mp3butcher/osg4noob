#include <osg/LOD>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/LOD_pmoc.hpp>
#include <customCode/osg/LOD_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_LOD::addChild(osg::QReflect_Node *p0 , float p1 , float p2){
return _model->addChild(p0->_model ,p1 ,p2);

}
 bool  osg::QReflect_LOD::addChild(osg::QReflect_Node *p0){
return _model->addChild(p0->_model);

}
 bool  osg::QReflect_LOD::removeChildren( unsigned int p0 , unsigned int p1){
return _model->removeChildren(p0 ,p1);

}
 float  osg::QReflect_LOD::getMaxRange( unsigned int p0)const{
return _model->getMaxRange(p0);

}
 float  osg::QReflect_LOD::getMinRange( unsigned int p0)const{
return _model->getMinRange(p0);

}
 unsigned int  osg::QReflect_LOD::getNumRanges()const{
return _model->getNumRanges();

}
 void osg::QReflect_LOD::setCenterMode(osg::QReflect_LOD::CenterMode p0){
 _model->setCenterMode(static_cast<osg::LOD::CenterMode>(p0));

}
 void osg::QReflect_LOD::setRange( unsigned int p0 , float p1 , float p2){
 _model->setRange(p0 ,p1 ,p2);

}
 void osg::QReflect_LOD::setRangeMode(osg::QReflect_LOD::RangeMode p0){
 _model->setRangeMode(static_cast<osg::LOD::RangeMode>(p0));

}
 void osg::QReflect_LOD::traverse(osg::QReflect_NodeVisitor *p0){
 _model->traverse(*p0->_model);

}
osg::QReflect_LOD::CenterMode  osg::QReflect_LOD::getCenterMode()const{
osg::QReflect_LOD::CenterMode ret=static_cast<osg::QReflect_LOD::CenterMode>( _model->getCenterMode());return  ret;

}
osg::QReflect_LOD::RangeMode  osg::QReflect_LOD::getRangeMode()const{
osg::QReflect_LOD::RangeMode ret=static_cast<osg::QReflect_LOD::RangeMode>( _model->getRangeMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_LOD::QReflect_LOD(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::LOD*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_LOD::~QReflect_LOD( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_LOD::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_LOD::createInstance( ){
osg::ref_ptr<osg::LOD> osg_LOD_ptr	;
osg_LOD_ptr = new osg::LOD ()	;
Instance o(PMOCGETMETACLASS("osg::LOD"),(void*)osg_LOD_ptr.get()		,true);
_managedinstances.insert(osg_LOD_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_LOD::MetaQReflect_LOD():MetaQQuickClass( "osg::LOD"){
_typeid=&typeid(osg::LOD );           qRegisterMetaType<QMLLOD>();
qmlRegisterType<QReflect_LOD>("pmoc.osg",1,0,"QReflect_LOD");
           qmlRegisterType<QMLLOD>("pmoc.osg",1,0,"QMLLOD");
};
const std::string osg::MetaQReflect_LOD::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_LOD::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_LOD::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_LOD::createQQModel(Instance*i){ //return new MetaQReflect_LOD_QModel(i);}
QMLLOD *ret =new QMLLOD(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::LODis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::LODis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LOD_pmoc.cpp"
#endif



