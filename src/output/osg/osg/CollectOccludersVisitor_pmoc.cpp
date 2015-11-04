#include <osg/CollectOccludersVisitor>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/CollectOccludersVisitor_pmoc.hpp>
#include <customCode/osg/CollectOccludersVisitor_pmoc.hpp>
#include <customCode/osg/CullStack_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 float  osg::QReflect_CollectOccludersVisitor::getDistanceFromEyePoint(osg::QReflect_Vec3f *p0 , bool p1)const{
return _model->getDistanceFromEyePoint(*p0->_model ,p1);

}
 float  osg::QReflect_CollectOccludersVisitor::getDistanceToEyePoint(osg::QReflect_Vec3f *p0 , bool p1)const{
return _model->getDistanceToEyePoint(*p0->_model ,p1);

}
 float  osg::QReflect_CollectOccludersVisitor::getDistanceToViewPoint(osg::QReflect_Vec3f *p0 , bool p1)const{
return _model->getDistanceToViewPoint(*p0->_model ,p1);

}
 void osg::QReflect_CollectOccludersVisitor::removeOccludedOccluders(){
 _model->removeOccludedOccluders();

}
 void osg::QReflect_CollectOccludersVisitor::reset(){
 _model->reset();

}
const bool osg::QReflect_CollectOccludersVisitor::getCreateDrawablesOnOccludeNodes()const{return _model->getCreateDrawablesOnOccludeNodes();}
const float osg::QReflect_CollectOccludersVisitor::getMinimumShadowOccluderVolume()const{return _model->getMinimumShadowOccluderVolume();}
const unsigned int osg::QReflect_CollectOccludersVisitor::getMaximumNumberOfActiveOccluders()const{return _model->getMaximumNumberOfActiveOccluders();}
osg::QReflect_Object*osg::QReflect_CollectOccludersVisitor::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_CollectOccludersVisitor::setCreateDrawablesOnOccludeNodes(const bool &par){_model->setCreateDrawablesOnOccludeNodes(par);emit CreateDrawablesOnOccludeNodesChanged(par);}
void  osg::QReflect_CollectOccludersVisitor::setMaximumNumberOfActiveOccluders(const unsigned int &par){_model->setMaximumNumberOfActiveOccluders(par);emit MaximumNumberOfActiveOccludersChanged(par);}
void  osg::QReflect_CollectOccludersVisitor::setMinimumShadowOccluderVolume(const float &par){_model->setMinimumShadowOccluderVolume(par);emit MinimumShadowOccluderVolumeChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_CollectOccludersVisitor::QReflect_CollectOccludersVisitor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::CollectOccludersVisitor*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::CollectOccludersVisitor*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::CollectOccludersVisitor*>(reinterpret_cast<osg::CullSettings*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::CollectOccludersVisitor*>(reinterpret_cast<osg::CullStack*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::CollectOccludersVisitor*>(i->ptr);
    _parentboxes[0]=0;
    _parentboxes[1]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_CollectOccludersVisitor::~QReflect_CollectOccludersVisitor( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
	if(_parentboxes[1])
delete _parentboxes[1];
}
///update this according _model new state
void osg::QReflect_CollectOccludersVisitor::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
	if(_parentboxes[1])
_parentboxes[1]->updateModel();
}
Instance osg::MetaQReflect_CollectOccludersVisitor::createInstance( ){
osg::ref_ptr<osg::CollectOccludersVisitor> osg_CollectOccludersVisitor_ptr	;
osg_CollectOccludersVisitor_ptr = new osg::CollectOccludersVisitor ()	;
Instance o(PMOCGETMETACLASS("osg::CollectOccludersVisitor"),(void*)dynamic_cast<osg::CullStack*>( osg_CollectOccludersVisitor_ptr.get()		),true);
_managedinstances.insert(osg_CollectOccludersVisitor_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_CollectOccludersVisitor::MetaQReflect_CollectOccludersVisitor():MetaQQuickClass( "osg::CollectOccludersVisitor"){
_typeid=&typeid(osg::CollectOccludersVisitor );           qRegisterMetaType<QMLCollectOccludersVisitor>();
qmlRegisterType<QReflect_CollectOccludersVisitor>("pmoc.osg",1,0,"QReflect_CollectOccludersVisitor");
           qmlRegisterType<QMLCollectOccludersVisitor>("pmoc.osg",1,0,"QMLCollectOccludersVisitor");
};
const std::string osg::MetaQReflect_CollectOccludersVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CollectOccludersVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CollectOccludersVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CollectOccludersVisitor::createQQModel(Instance*i){ //return new MetaQReflect_CollectOccludersVisitor_QModel(i);}
QMLCollectOccludersVisitor *ret =new QMLCollectOccludersVisitor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::CullStack *mother =dynamic_cast<osg::CullStack*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::CullStack");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::CullStack model for osg::CollectOccludersVisitoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::CullStack");
if(!cl){std::cerr<<"osg::CullStack QQModel for osg::CollectOccludersVisitoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
{
osg::NodeVisitor *mother =dynamic_cast<osg::NodeVisitor*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::NodeVisitor");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::NodeVisitor model for osg::CollectOccludersVisitoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::NodeVisitor");
if(!cl){std::cerr<<"osg::NodeVisitor QQModel for osg::CollectOccludersVisitoris not found"<<std::endl;return ret;}
ret->_parentboxes[1]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CollectOccludersVisitor_pmoc.cpp"
#endif



