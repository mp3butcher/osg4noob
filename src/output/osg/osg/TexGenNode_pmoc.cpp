#include <osg/TexGenNode>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/TexGenNode_pmoc.hpp>
#include <customCode/osg/TexGenNode_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/TexGen_pmoc.hpp>
#include <osg/TexGen>
#include <osg/TexGen_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_TexGenNode::setReferenceFrame(osg::QReflect_TexGenNode::ReferenceFrame p0){
 _model->setReferenceFrame(static_cast<osg::TexGenNode::ReferenceFrame>(p0));

}
 void osg::QReflect_TexGenNode::setThreadSafeRefUnref( bool p0){
 _model->setThreadSafeRefUnref(p0);

}
const unsigned int osg::QReflect_TexGenNode::getTextureUnit()const{return _model->getTextureUnit();}
osg::QReflect_TexGen * osg::QReflect_TexGenNode::getTexGen()const{
PMOCSAFEADDOBJECT(*_model->getTexGen(),inst);
return inst.isValid()?((osg::QReflect_TexGen * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_TexGenNode::ReferenceFrame  osg::QReflect_TexGenNode::getReferenceFrame()const{
osg::QReflect_TexGenNode::ReferenceFrame ret=static_cast<osg::QReflect_TexGenNode::ReferenceFrame>( _model->getReferenceFrame());return  ret;

}
void  osg::QReflect_TexGenNode::setTextureUnit(const unsigned int &par){_model->setTextureUnit(par);emit TextureUnitChanged(par);}
void osg::QReflect_TexGenNode::pmoc_reverse_setTexGen( osg::QReflect_TexGen *par){_model->setTexGen(NULL);
emit TexGenChanged(NULL);
}
void osg::QReflect_TexGenNode::setTexGen( osg::QReflect_TexGen *par){_model->setTexGen(par->_model);
emit TexGenChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_TexGenNode::QReflect_TexGenNode(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TexGenNode*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TexGenNode::~QReflect_TexGenNode( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TexGenNode::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TexGenNode::createInstance( ){
osg::ref_ptr<osg::TexGenNode> osg_TexGenNode_ptr	;
osg_TexGenNode_ptr = new osg::TexGenNode ()	;
Instance o(PMOCGETMETACLASS("osg::TexGenNode"),(void*)osg_TexGenNode_ptr.get()		,true);
_managedinstances.insert(osg_TexGenNode_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TexGenNode::MetaQReflect_TexGenNode():MetaQQuickClass( "osg::TexGenNode"){
_typeid=&typeid(osg::TexGenNode );           qRegisterMetaType<QMLTexGenNode>();
qmlRegisterType<QReflect_TexGenNode>("pmoc.osg",1,0,"QReflect_TexGenNode");
           qmlRegisterType<QMLTexGenNode>("pmoc.osg",1,0,"QMLTexGenNode");
       PMOCACTION("getTexGen","setTexGen","unsetTexGen");
};
const std::string osg::MetaQReflect_TexGenNode::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TexGenNode::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TexGenNode::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TexGenNode::createQQModel(Instance*i){ //return new MetaQReflect_TexGenNode_QModel(i);}
QMLTexGenNode *ret =new QMLTexGenNode(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::TexGenNodeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::TexGenNodeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TexGenNode_pmoc.cpp"
#endif



