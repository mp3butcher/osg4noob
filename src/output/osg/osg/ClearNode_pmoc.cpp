#include <osg/ClearNode>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ClearNode_pmoc.hpp>
#include <customCode/osg/ClearNode_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 GLbitfield  osg::QReflect_ClearNode::getClearMask()const{
return _model->getClearMask();

}
 void osg::QReflect_ClearNode::setClearColor(osg::QReflect_Vec4f *p0){
 _model->setClearColor(*p0->_model);

}
 void osg::QReflect_ClearNode::setClearMask( GLbitfield p0){
 _model->setClearMask(p0);

}
const bool osg::QReflect_ClearNode::getRequiresClear()const{return _model->getRequiresClear();}
void  osg::QReflect_ClearNode::setRequiresClear(const bool &par){_model->setRequiresClear(par);emit RequiresClearChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_ClearNode::QReflect_ClearNode(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ClearNode*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ClearNode::~QReflect_ClearNode( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ClearNode::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ClearNode::createInstance( ){
osg::ref_ptr<osg::ClearNode> osg_ClearNode_ptr	;
osg_ClearNode_ptr = new osg::ClearNode ()	;
Instance o(PMOCGETMETACLASS("osg::ClearNode"),(void*)osg_ClearNode_ptr.get()		,true);
_managedinstances.insert(osg_ClearNode_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ClearNode::MetaQReflect_ClearNode():MetaQQuickClass( "osg::ClearNode"){
_typeid=&typeid(osg::ClearNode );           qRegisterMetaType<QMLClearNode>();
qmlRegisterType<QReflect_ClearNode>("pmoc.osg",1,0,"QReflect_ClearNode");
           qmlRegisterType<QMLClearNode>("pmoc.osg",1,0,"QMLClearNode");
};
const std::string osg::MetaQReflect_ClearNode::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ClearNode::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ClearNode::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ClearNode::createQQModel(Instance*i){ //return new MetaQReflect_ClearNode_QModel(i);}
QMLClearNode *ret =new QMLClearNode(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::ClearNodeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::ClearNodeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ClearNode_pmoc.cpp"
#endif



