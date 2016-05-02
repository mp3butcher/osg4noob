#include <osg/ClipNode>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ClipNode_pmoc.hpp>
#include <customCode/osg/ClipNode_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/ClipPlane_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ClipNode:: addClipPlane(osg::QReflect_ClipPlane  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClipNode::addClipPlane : parameter n.0 is NULL\n"<<endl;return -1;}
emit ClipPlaneCollectionChanged();
return _model->addClipPlane(p0->_model);

}
 bool  osg::QReflect_ClipNode:: removeClipPlane( unsigned int  p0){
//params checking
return _model->removeClipPlane(p0);

}
 bool  osg::QReflect_ClipNode:: removeClipPlane(osg::QReflect_ClipPlane  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClipNode::removeClipPlane : parameter n.0 is NULL\n"<<endl;return -1;}
emit ClipPlaneCollectionChanged();
return _model->removeClipPlane(p0->_model);

}
 unsigned int  osg::QReflect_ClipNode:: getNumClipPlanes()const{
//params checking
return _model->getNumClipPlanes();

}
 void osg::QReflect_ClipNode::setLocalStateSetModes( unsigned int  p0){
//params checking
 _model->setLocalStateSetModes(p0);

}
 void osg::QReflect_ClipNode::setReferenceFrame(osg::QReflect_ClipNode::ReferenceFrame  p0){
//params checking
 _model->setReferenceFrame(static_cast<osg::ClipNode::ReferenceFrame>(p0));
emit ReferenceFrameChanged();

}
 void osg::QReflect_ClipNode::setStateSetModes(osg::QReflect_StateSet  *p0 , unsigned int  p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClipNode::setStateSetModes : parameter n.0 is NULL\n"<<endl;return;}
 _model->setStateSetModes(*p0->_model ,p1);

}
osg::QReflect_ClipNode::ReferenceFrame  osg::QReflect_ClipNode::getReferenceFrame()const{
//params checking
osg::QReflect_ClipNode::ReferenceFrame ret=static_cast<osg::QReflect_ClipNode::ReferenceFrame>( _model->getReferenceFrame());return  ret;

}
osg::QReflect_ClipPlane*osg::QReflect_ClipNode::getClipPlane( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getClipPlane(p0),inst);
return inst.isValid()?((osg::QReflect_ClipPlane * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ClipPlane*osg::QReflect_ClipNode::getClipPlane( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getClipPlane(p0),inst);
return inst.isValid()?((osg::QReflect_ClipPlane * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_ClipNode::QReflect_ClipNode(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::ClipNode );
           qRegisterMetaType<osg::QMLClipNode>();
           qRegisterMetaType<osg::QMLClipNode*>("pmoc.osg.QMLClipNode");
qmlRegisterType<osg::QReflect_ClipNode>("pmoc.osg",1,0,"QReflect_ClipNode");
           qmlRegisterType<osg::QMLClipNode>("pmoc.osg",1,0,"QMLClipNode");
};
const std::string osg::MetaQReflect_ClipNode::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ClipNode::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ClipNode::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ClipNode::createQQModel(const Instance*i){ //return new MetaQReflect_ClipNode_QModel(i);}
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




