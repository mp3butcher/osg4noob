#include <osg/ColorMaski>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ColorMaski_pmoc.hpp>
#include <customCode/osg/ColorMaski_pmoc.hpp>
#include <customCode/osg/ColorMask_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_ColorMaski::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_ColorMaski::getMember()const{
return _model->getMember();

}
const unsigned int osg::QReflect_ColorMaski::getIndex()const{return _model->getIndex();}
void  osg::QReflect_ColorMaski::setIndex(const unsigned int &par){_model->setIndex(par);emit IndexChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_ColorMaski::QReflect_ColorMaski(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ColorMaski*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ColorMaski::~QReflect_ColorMaski( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ColorMaski::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ColorMaski::createInstance( ){
osg::ref_ptr<osg::ColorMaski> osg_ColorMaski_ptr	;
osg_ColorMaski_ptr = new osg::ColorMaski ()	;
Instance o(PMOCGETMETACLASS("osg::ColorMaski"),(void*)osg_ColorMaski_ptr.get()		,true);
_managedinstances.insert(osg_ColorMaski_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ColorMaski::MetaQReflect_ColorMaski():MetaQQuickClass( "osg::ColorMaski"){
_typeid=&typeid(osg::ColorMaski );           qRegisterMetaType<QMLColorMaski>();
qmlRegisterType<QReflect_ColorMaski>("pmoc.osg",1,0,"QReflect_ColorMaski");
           qmlRegisterType<QMLColorMaski>("pmoc.osg",1,0,"QMLColorMaski");
};
const std::string osg::MetaQReflect_ColorMaski::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ColorMaski::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ColorMaski::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ColorMaski::createQQModel(Instance*i){ //return new MetaQReflect_ColorMaski_QModel(i);}
QMLColorMaski *ret =new QMLColorMaski(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::ColorMask *mother =dynamic_cast<osg::ColorMask*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::ColorMask");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::ColorMask model for osg::ColorMaskiis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::ColorMask");
if(!cl){std::cerr<<"osg::ColorMask QQModel for osg::ColorMaskiis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ColorMaski_pmoc.cpp"
#endif


