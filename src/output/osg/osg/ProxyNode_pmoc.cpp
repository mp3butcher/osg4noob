#include <osg/ProxyNode>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ProxyNode_pmoc.hpp>
#include <customCode/osg/ProxyNode_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ProxyNode:: addChild(osg::QReflect_Node  *p0 ,const  QString  &p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ProxyNode::addChild : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->addChild(p0->_model ,std::string(p1.toStdString()));

}
 bool  osg::QReflect_ProxyNode:: addChild(osg::QReflect_Node  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ProxyNode::addChild : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->addChild(p0->_model);

}
 bool  osg::QReflect_ProxyNode:: removeChildren( unsigned int  p0 , unsigned int  p1){
//params checking
return _model->removeChildren(p0 ,p1);

}
 unsigned int  osg::QReflect_ProxyNode:: getNumFileNames()const{
//params checking
return _model->getNumFileNames();

}
 void osg::QReflect_ProxyNode::setCenterMode(osg::QReflect_ProxyNode::CenterMode  p0){
//params checking
 _model->setCenterMode(static_cast<osg::ProxyNode::CenterMode>(p0));
emit CenterModeChanged();

}
 void osg::QReflect_ProxyNode::setDatabaseOptions(osg::QReflect_Referenced  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ProxyNode::setDatabaseOptions : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDatabaseOptions(p0->_model);
emit DatabaseOptionsChanged();

}
 void osg::QReflect_ProxyNode::setDatabasePath(const  QString  &p0){
//params checking
 _model->setDatabasePath(std::string(p0.toStdString()));
emit DatabasePathChanged();

}
 void osg::QReflect_ProxyNode::setFileName( unsigned int  p0 ,const  QString  &p1){
//params checking
 _model->setFileName(p0 ,std::string(p1.toStdString()));

}
 void osg::QReflect_ProxyNode::setLoadingExternalReferenceMode(osg::QReflect_ProxyNode::LoadingExternalReferenceMode  p0){
//params checking
 _model->setLoadingExternalReferenceMode(static_cast<osg::ProxyNode::LoadingExternalReferenceMode>(p0));
emit LoadingExternalReferenceModeChanged();

}
 void osg::QReflect_ProxyNode::traverse(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ProxyNode::traverse : parameter n.0 is NULL\n"<<endl;return;}
 _model->traverse(*p0->_model);

}
QString  osg::QReflect_ProxyNode::getDatabasePath()const{
//params checking
QString ret(_model->getDatabasePath().c_str());return ret;

}
QString  osg::QReflect_ProxyNode::getFileName( unsigned int  p0)const{
//params checking
QString ret(_model->getFileName(p0).c_str());return ret;

}
osg::QReflect_ProxyNode::CenterMode  osg::QReflect_ProxyNode::getCenterMode()const{
//params checking
osg::QReflect_ProxyNode::CenterMode ret=static_cast<osg::QReflect_ProxyNode::CenterMode>( _model->getCenterMode());return  ret;

}
osg::QReflect_ProxyNode::LoadingExternalReferenceMode  osg::QReflect_ProxyNode::getLoadingExternalReferenceMode()const{
//params checking
osg::QReflect_ProxyNode::LoadingExternalReferenceMode ret=static_cast<osg::QReflect_ProxyNode::LoadingExternalReferenceMode>( _model->getLoadingExternalReferenceMode());return  ret;

}
osg::QReflect_Referenced*osg::QReflect_ProxyNode::getDatabaseOptions()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getDatabaseOptions(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Referenced*osg::QReflect_ProxyNode::getDatabaseOptions(){
//params checking
PMOCSAFEADDOBJECT(*_model->getDatabaseOptions(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_ProxyNode::QReflect_ProxyNode(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ProxyNode*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ProxyNode::~QReflect_ProxyNode( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ProxyNode::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ProxyNode::createInstance( ){
osg::ref_ptr<osg::ProxyNode> osg_ProxyNode_ptr	;
osg_ProxyNode_ptr = new osg::ProxyNode ()	;
Instance o(PMOCGETMETACLASS("osg::ProxyNode"),(void*)osg_ProxyNode_ptr.get()		,true);
_managedinstances.insert(osg_ProxyNode_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ProxyNode::MetaQReflect_ProxyNode():MetaQQuickClass( "osg::ProxyNode"){
_typeid=&typeid(osg::ProxyNode );
           qRegisterMetaType<osg::QMLProxyNode>();
           qRegisterMetaType<osg::QMLProxyNode*>("pmoc.osg.QMLProxyNode");
qmlRegisterType<osg::QReflect_ProxyNode>("pmoc.osg",1,0,"QReflect_ProxyNode");
           qmlRegisterType<osg::QMLProxyNode>("pmoc.osg",1,0,"QMLProxyNode");
};
const std::string osg::MetaQReflect_ProxyNode::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ProxyNode::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ProxyNode::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ProxyNode::createQQModel(const Instance*i){ //return new MetaQReflect_ProxyNode_QModel(i);}
QMLProxyNode *ret =new QMLProxyNode(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::ProxyNodeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::ProxyNodeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ProxyNode_pmoc.cpp"
#endif




