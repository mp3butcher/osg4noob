#include <osg/Texture>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <QQmlProperty>
using namespace pmoc;
osg::QMLTexture::QMLTexture(pmoc::Instance *i,QObject* parent):QReflect_Texture(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTexture::connect2View(QQuickItem*i){
	this->_view=QReflect_Texture::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
///CustomiZE here


   return this->_view;
}

void  osg::QMLTexture::updateModel(){
	  QReflect_Texture::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here
  QVariant var=QQmlProperty::read(_view->parentItem(), "qmodel");
    osg::QMLStateSet *qmlss=var.value<osg::QMLStateSet *>();

    // osg::QMLStateSet *qmlss = qobject_cast<osg::QMLStateSet*>(object);

    if(qmlss)
    {

        for( osg::StateSet::TextureAttributeList::const_iterator it= qmlss->_model->getTextureAttributeList().begin();
                it!=qmlss->_model->getTextureAttributeList().end() ; it++)
        {

            for(osg::StateSet::AttributeList::const_iterator it2=(*it).begin(); it2!=(*it).end(); it2++)
            {
                osg::StateAttribute * s=(*it2).second.first;
                if(s==_model)//this is the model... finallly :/
                    _textureUnit=(*it2).second.second;
            }
        }

    }
    emit textureUnitChanged(_textureUnit);

}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Texture_pmoc.hpp>
using namespace pmoc;
osg::QMLTextureObjectManager::QMLTextureObjectManager(pmoc::Instance *i,QObject* parent):QReflect_TextureObjectManager(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTextureObjectManager::connect2View(QQuickItem*i){
	this->_view=QReflect_TextureObjectManager::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
///CustomiZE here


   return this->_view;
}
void  osg::QMLTextureObjectManager::updateModel(){
   QReflect_TextureObjectManager::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Texture_pmoc.hpp>
using namespace pmoc;
osg::QMLTextureObjectSet::QMLTextureObjectSet(pmoc::Instance *i,QObject* parent):QReflect_TextureObjectSet(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTextureObjectSet::connect2View(QQuickItem*i){
	this->_view=QReflect_TextureObjectSet::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
///CustomiZE here


   return this->_view;
}
void  osg::QMLTextureObjectSet::updateModel(){
   QReflect_TextureObjectSet::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture_pmoc.cpp"
#endif


