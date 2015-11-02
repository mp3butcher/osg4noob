#include <osg/PrimitiveRestartIndex>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PrimitiveRestartIndex_pmoc.hpp>
#include <customCode/osg/PrimitiveRestartIndex_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_PrimitiveRestartIndex::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
const unsigned int osg::QReflect_PrimitiveRestartIndex::getRestartIndex()const{return _model->getRestartIndex();}
void  osg::QReflect_PrimitiveRestartIndex::setRestartIndex(const unsigned int &par){_model->setRestartIndex(par);emit RestartIndexChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_PrimitiveRestartIndex::QReflect_PrimitiveRestartIndex(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PrimitiveRestartIndex*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PrimitiveRestartIndex::~QReflect_PrimitiveRestartIndex( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_PrimitiveRestartIndex::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_PrimitiveRestartIndex::createInstance( ){
osg::ref_ptr<osg::PrimitiveRestartIndex> osg_PrimitiveRestartIndex_ptr	;
osg_PrimitiveRestartIndex_ptr = new osg::PrimitiveRestartIndex ()	;
Instance o(PMOCGETMETACLASS("osg::PrimitiveRestartIndex"),(void*)osg_PrimitiveRestartIndex_ptr.get()		,true);
_managedinstances.insert(osg_PrimitiveRestartIndex_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PrimitiveRestartIndex::MetaQReflect_PrimitiveRestartIndex():MetaQQuickClass( "osg::PrimitiveRestartIndex"){
_typeid=&typeid(osg::PrimitiveRestartIndex );           qRegisterMetaType<QMLPrimitiveRestartIndex>();
qmlRegisterType<QReflect_PrimitiveRestartIndex>("pmoc.osg",1,0,"QReflect_PrimitiveRestartIndex");
           qmlRegisterType<QMLPrimitiveRestartIndex>("pmoc.osg",1,0,"QMLPrimitiveRestartIndex");
};
const std::string osg::MetaQReflect_PrimitiveRestartIndex::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PrimitiveRestartIndex::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PrimitiveRestartIndex::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PrimitiveRestartIndex::createQQModel(Instance*i){ //return new MetaQReflect_PrimitiveRestartIndex_QModel(i);}
QMLPrimitiveRestartIndex *ret =new QMLPrimitiveRestartIndex(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::PrimitiveRestartIndexis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::PrimitiveRestartIndexis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrimitiveRestartIndex_pmoc.cpp"
#endif


