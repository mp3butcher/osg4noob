#include <osg/OccluderNode>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/OccluderNode_pmoc.hpp>
#include <customCode/osg/OccluderNode_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/ConvexPlanarOccluder_pmoc.hpp>
#include <osg/ConvexPlanarOccluder>
#include <osg/ConvexPlanarOccluder_pmoc.hpp>
using namespace pmoc;
osg::QReflect_ConvexPlanarOccluder * osg::QReflect_OccluderNode::getOccluder()const{
PMOCSAFEADDOBJECT(*_model->getOccluder(),inst);
return inst.isValid()?((osg::QReflect_ConvexPlanarOccluder * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_OccluderNode::pmoc_reverse_setOccluder( osg::QReflect_ConvexPlanarOccluder *par){_model->setOccluder(NULL);
emit OccluderChanged(NULL);
}
void osg::QReflect_OccluderNode::setOccluder( osg::QReflect_ConvexPlanarOccluder *par){_model->setOccluder(par->_model);
emit OccluderChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_OccluderNode::QReflect_OccluderNode(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::OccluderNode*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_OccluderNode::~QReflect_OccluderNode( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_OccluderNode::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_OccluderNode::createInstance( ){
osg::ref_ptr<osg::OccluderNode> osg_OccluderNode_ptr	;
osg_OccluderNode_ptr = new osg::OccluderNode ()	;
Instance o(PMOCGETMETACLASS("osg::OccluderNode"),(void*)osg_OccluderNode_ptr.get()		,true);
_managedinstances.insert(osg_OccluderNode_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_OccluderNode::MetaQReflect_OccluderNode():MetaQQuickClass( "osg::OccluderNode"){
_typeid=&typeid(osg::OccluderNode );           qRegisterMetaType<QMLOccluderNode>();
qmlRegisterType<QReflect_OccluderNode>("pmoc.osg",1,0,"QReflect_OccluderNode");
           qmlRegisterType<QMLOccluderNode>("pmoc.osg",1,0,"QMLOccluderNode");
       PMOCACTION("getOccluder","setOccluder","unsetOccluder");
};
const std::string osg::MetaQReflect_OccluderNode::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_OccluderNode::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_OccluderNode::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_OccluderNode::createQQModel(Instance*i){ //return new MetaQReflect_OccluderNode_QModel(i);}
QMLOccluderNode *ret =new QMLOccluderNode(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::OccluderNodeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::OccluderNodeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OccluderNode_pmoc.cpp"
#endif



