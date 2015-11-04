#include <osg/ClipNode>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ClipNode_pmoc.hpp>
#include <customCode/osg/ClipNode_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/ClipPlane_pmoc.hpp>
#include <osg/ClipPlane>
using namespace pmoc;
 bool  osg::QReflect_ClipNode::removeClipPlane( unsigned int p0){
return _model->removeClipPlane(p0);

}
 unsigned int  osg::QReflect_ClipNode::getNumClipPlanes()const{
return _model->getNumClipPlanes();

}
 void osg::QReflect_ClipNode::setLocalStateSetModes( unsigned int p0){
 _model->setLocalStateSetModes(p0);

}
 void osg::QReflect_ClipNode::setReferenceFrame(osg::QReflect_ClipNode::ReferenceFrame p0){
 _model->setReferenceFrame(static_cast<osg::ClipNode::ReferenceFrame>(p0));

}
osg::QReflect_ClipNode::ReferenceFrame  osg::QReflect_ClipNode::getReferenceFrame()const{
osg::QReflect_ClipNode::ReferenceFrame ret=static_cast<osg::QReflect_ClipNode::ReferenceFrame>( _model->getReferenceFrame());return  ret;

}
osg::QReflect_ClipPlane*osg::QReflect_ClipNode::getClipPlane( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getClipPlane(p0),inst);
return inst.isValid()?((osg::QReflect_ClipPlane * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ClipPlane*osg::QReflect_ClipNode::getClipPlane( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getClipPlane(p0),inst);
return inst.isValid()?((osg::QReflect_ClipPlane * )inst.model->createQQModel(&inst)):NULL;
}
void   osg::QReflect_ClipNode::addClipPlane( osg::QReflect_ClipPlane *par){
_model->addClipPlane(par->_model);
}
void   osg::QReflect_ClipNode::pmoc_reverse_addClipPlane( osg::QReflect_ClipPlane *par){
_model->removeClipPlane(par->_model);
emit ClipPlaneCollectionChanged();
}

///DefaultConstructor////////////////
osg::QReflect_ClipNode::QReflect_ClipNode(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ClipNode*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ClipNode::~QReflect_ClipNode( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ClipNode::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ClipNode::createInstance( ){
osg::ref_ptr<osg::ClipNode> osg_ClipNode_ptr	;
osg_ClipNode_ptr = new osg::ClipNode ()	;
Instance o(PMOCGETMETACLASS("osg::ClipNode"),(void*)osg_ClipNode_ptr.get()		,true);
_managedinstances.insert(osg_ClipNode_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ClipNode::MetaQReflect_ClipNode():MetaQQuickClass( "osg::ClipNode"){
_typeid=&typeid(osg::ClipNode );           qRegisterMetaType<QMLClipNode>();
qmlRegisterType<QReflect_ClipNode>("pmoc.osg",1,0,"QReflect_ClipNode");
           qmlRegisterType<QMLClipNode>("pmoc.osg",1,0,"QMLClipNode");
       PMOCACTION("getClipPlane","addClipPlane","removeClipPlane");
};
const std::string osg::MetaQReflect_ClipNode::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ClipNode::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ClipNode::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ClipNode::createQQModel(Instance*i){ //return new MetaQReflect_ClipNode_QModel(i);}
QMLClipNode *ret =new QMLClipNode(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::ClipNodeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::ClipNodeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ClipNode_pmoc.cpp"
#endif



