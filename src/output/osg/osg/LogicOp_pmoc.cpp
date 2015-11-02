#include <osg/LogicOp>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/LogicOp_pmoc.hpp>
#include <customCode/osg/LogicOp_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_LogicOp::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_LogicOp::setOpcode(osg::QReflect_LogicOp::Opcode p0){
 _model->setOpcode(static_cast<osg::LogicOp::Opcode>(p0));

}
osg::QReflect_LogicOp::Opcode  osg::QReflect_LogicOp::getOpcode()const{
osg::QReflect_LogicOp::Opcode ret=static_cast<osg::QReflect_LogicOp::Opcode>( _model->getOpcode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_LogicOp::QReflect_LogicOp(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::LogicOp*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_LogicOp::~QReflect_LogicOp( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_LogicOp::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_LogicOp::createInstance( ){
osg::ref_ptr<osg::LogicOp> osg_LogicOp_ptr	;
osg_LogicOp_ptr = new osg::LogicOp ()	;
Instance o(PMOCGETMETACLASS("osg::LogicOp"),(void*)osg_LogicOp_ptr.get()		,true);
_managedinstances.insert(osg_LogicOp_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_LogicOp::MetaQReflect_LogicOp():MetaQQuickClass( "osg::LogicOp"){
_typeid=&typeid(osg::LogicOp );           qRegisterMetaType<QMLLogicOp>();
qmlRegisterType<QReflect_LogicOp>("pmoc.osg",1,0,"QReflect_LogicOp");
           qmlRegisterType<QMLLogicOp>("pmoc.osg",1,0,"QMLLogicOp");
};
const std::string osg::MetaQReflect_LogicOp::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_LogicOp::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_LogicOp::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_LogicOp::createQQModel(Instance*i){ //return new MetaQReflect_LogicOp_QModel(i);}
QMLLogicOp *ret =new QMLLogicOp(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::LogicOpis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::LogicOpis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LogicOp_pmoc.cpp"
#endif


