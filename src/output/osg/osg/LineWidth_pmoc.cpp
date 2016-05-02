#include <osg/LineWidth>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/LineWidth_pmoc.hpp>
#include <customCode/osg/LineWidth_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 float  osg::QReflect_LineWidth:: getWidth()const{
//params checking
return _model->getWidth();

}
 int  osg::QReflect_LineWidth:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_LineWidth::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_LineWidth::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_LineWidth::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_LineWidth::setWidth( float  p0){
//params checking
 _model->setWidth(p0);
emit WidthChanged();

}

///DefaultConstructor////////////////
osg::QReflect_LineWidth::QReflect_LineWidth(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::LineWidth*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_LineWidth::~QReflect_LineWidth( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_LineWidth::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_LineWidth::createInstance( ){
osg::ref_ptr<osg::LineWidth> osg_LineWidth_ptr	;
osg_LineWidth_ptr = new osg::LineWidth ()	;
Instance o(PMOCGETMETACLASS("osg::LineWidth"),(void*)osg_LineWidth_ptr.get()		,true);
_managedinstances.insert(osg_LineWidth_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_LineWidth::MetaQReflect_LineWidth():MetaQQuickClass( "osg::LineWidth"){
_typeid=&typeid(osg::LineWidth );
           qRegisterMetaType<osg::QMLLineWidth>();
           qRegisterMetaType<osg::QMLLineWidth*>("pmoc.osg.QMLLineWidth");
qmlRegisterType<osg::QReflect_LineWidth>("pmoc.osg",1,0,"QReflect_LineWidth");
           qmlRegisterType<osg::QMLLineWidth>("pmoc.osg",1,0,"QMLLineWidth");
};
const std::string osg::MetaQReflect_LineWidth::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_LineWidth::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_LineWidth::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_LineWidth::createQQModel(const Instance*i){ //return new MetaQReflect_LineWidth_QModel(i);}
QMLLineWidth *ret =new QMLLineWidth(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::LineWidthis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::LineWidthis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LineWidth_pmoc.cpp"
#endif




