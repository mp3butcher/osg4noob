#include <osg/Hint>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Hint_pmoc.hpp>
#include <customCode/osg/Hint_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Hint::getMode()const{
return _model->getMode();

}
 GLenum  osg::QReflect_Hint::getTarget()const{
return _model->getTarget();

}
 bool  osg::QReflect_Hint::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 int  osg::QReflect_Hint::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_Hint::getMember()const{
return _model->getMember();

}
 void osg::QReflect_Hint::setMode( GLenum p0){
 _model->setMode(p0);

}
 void osg::QReflect_Hint::setTarget( GLenum p0){
 _model->setTarget(p0);

}
const  char*  osg::QReflect_Hint::className()const{
return _model->className();

}
const  char*  osg::QReflect_Hint::libraryName()const{
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_Hint::clone(osg::QReflect_CopyOp *p0)const{
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_Hint::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Hint::QReflect_Hint(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Hint*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Hint::~QReflect_Hint( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Hint::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Hint::createInstance( ){
osg::ref_ptr<osg::Hint> osg_Hint_ptr	;
osg_Hint_ptr = new osg::Hint ()	;
Instance o(PMOCGETMETACLASS("osg::Hint"),(void*)osg_Hint_ptr.get()		,true);
_managedinstances.insert(osg_Hint_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Hint::MetaQReflect_Hint():MetaQQuickClass( "osg::Hint"){
_typeid=&typeid(osg::Hint );           qRegisterMetaType<QMLHint>();
qmlRegisterType<QReflect_Hint>("pmoc.osg",1,0,"QReflect_Hint");
           qmlRegisterType<QMLHint>("pmoc.osg",1,0,"QMLHint");
};
const std::string osg::MetaQReflect_Hint::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Hint::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Hint::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Hint::createQQModel(Instance*i){ //return new MetaQReflect_Hint_QModel(i);}
QMLHint *ret =new QMLHint(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::Hintis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::Hintis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Hint_pmoc.cpp"
#endif


