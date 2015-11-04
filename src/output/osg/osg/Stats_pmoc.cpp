#include <osg/Stats>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Stats_pmoc.hpp>
#include <customCode/osg/Stats_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Stats::collectStats(const  QString &p0)const{
return _model->collectStats(std::string(p0.toStdString()));

}
 bool  osg::QReflect_Stats::setAttribute( unsigned int p0 ,const  QString &p1 , double p2){
return _model->setAttribute(p0 ,std::string(p1.toStdString()) ,p2);

}
 unsigned int  osg::QReflect_Stats::getEarliestFrameNumber()const{
return _model->getEarliestFrameNumber();

}
 unsigned int  osg::QReflect_Stats::getLatestFrameNumber()const{
return _model->getLatestFrameNumber();

}
 void osg::QReflect_Stats::allocate( unsigned int p0){
 _model->allocate(p0);

}
 void osg::QReflect_Stats::collectStats(const  QString &p0 , bool p1){
 _model->collectStats(std::string(p0.toStdString()) ,p1);

}
const QString osg::QReflect_Stats::getName()const{return QString(_model->getName().c_str());}
void osg::QReflect_Stats::setName(const QString &par){_model->setName(par.toStdString());emit NameChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Stats::QReflect_Stats(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Stats*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Stats::~QReflect_Stats( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Stats::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Stats::createInstance( ){
std::cerr<<"osg::Stats is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Stats::MetaQReflect_Stats():MetaQQuickClass( "osg::Stats"){
_typeid=&typeid(osg::Stats );           qRegisterMetaType<QMLStats>();
qmlRegisterType<QReflect_Stats>("pmoc.osg",1,0,"QReflect_Stats");
           qmlRegisterType<QMLStats>("pmoc.osg",1,0,"QMLStats");
};
const std::string osg::MetaQReflect_Stats::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Stats::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Stats::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Stats::createQQModel(Instance*i){ //return new MetaQReflect_Stats_QModel(i);}
QMLStats *ret =new QMLStats(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::Statsis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::Statsis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Stats_pmoc.cpp"
#endif


