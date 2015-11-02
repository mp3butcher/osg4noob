#include <osg/AudioStream>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/AudioStream_pmoc.hpp>
using namespace pmoc;
osg::QMLAudioSink::QMLAudioSink(pmoc::Instance *i,QObject* parent):QReflect_AudioSink(i,parent){
//custom initializations
}
QQuickItem* osg::QMLAudioSink::connect2View(QQuickItem*i){
	this->_view=QReflect_AudioSink::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLAudioSink::updateModel(){
	  QReflect_AudioSink::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AudioStream_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/AudioStream_pmoc.hpp>
using namespace pmoc;
osg::QMLAudioStream::QMLAudioStream(pmoc::Instance *i,QObject* parent):QReflect_AudioStream(i,parent){
//custom initializations
}
QQuickItem* osg::QMLAudioStream::connect2View(QQuickItem*i){
	this->_view=QReflect_AudioStream::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLAudioStream::updateModel(){
	  QReflect_AudioStream::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AudioStream_pmoc.cpp"
#endif


