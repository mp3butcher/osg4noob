#include <osg/PositionAttitudeTransform>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/PositionAttitudeTransform_pmoc.hpp>
using namespace pmoc;

  osg::QReflect_Vec3d *  osg::QMLPositionAttitudeTransform::getPosition()const{
PMOCSAFEADDOBJECT(_model->getPosition(),inst);
return (osg::QReflect_Vec3d  * )PMOCGETMETACLASS("osg::Vec3d")->createQQModel(&inst);
}
  osg::QReflect_Vec3d *  osg::QMLPositionAttitudeTransform::getScale()const{
PMOCSAFEADDOBJECT(_model->getScale(),inst);
return (osg::QReflect_Vec3d  * )PMOCGETMETACLASS("osg::Vec3d")->createQQModel(&inst);
}
  osg::QReflect_Quat *  osg::QMLPositionAttitudeTransform::getRotation()const{
PMOCSAFEADDOBJECT(_model->getAttitude(),inst);
return (osg::QReflect_Quat  * )PMOCGETMETACLASS("osg::Quat")->createQQModel(&inst);
}

   void osg::QMLPositionAttitudeTransform::setposition(QVector3D&color){
   if(color!=getposition()){
    _model->setPosition(osg::Vec3(color.x(),color.y(),color.z()));
    emit positionChanged(color);
    }

   }
    QVector3D osg::QMLPositionAttitudeTransform::getposition()const{
     return QVector3D( _model->getPosition().x(),_model->getPosition().y(),_model->getPosition().z());
    }
    void osg::QMLPositionAttitudeTransform::setscale(QVector3D&color){
    if(color!=getscale()){
    _model->setScale(osg::Vec3(color.x(),color.y(),color.z()));
    emit scaleChanged(color);
    }
    }
    QVector3D osg::QMLPositionAttitudeTransform::getscale()const{
    return QVector3D( _model->getScale().x(),_model->getScale().y(),_model->getScale().z());
    }
    void osg::QMLPositionAttitudeTransform::setrotation(QColor&color){
    if (color!=getrotation()){
    _model->setAttitude(osg::Quat(color.redF(),color.greenF(),color.blueF(),color.alphaF()));
    emit rotationChanged(color);
    }
    }
    QColor osg::QMLPositionAttitudeTransform::getrotation()const{return QColor(_model->getAttitude().x(),_model->getAttitude().y(),_model->getAttitude().z(),_model->getAttitude().w());}


osg::QMLPositionAttitudeTransform::QMLPositionAttitudeTransform(const pmoc::Instance *i,QObject* parent):QReflect_PositionAttitudeTransform(i,parent){
//custom initializations
}
QQuickItem* osg::QMLPositionAttitudeTransform::connect2View(QQuickItem*i){
	this->_view=QReflect_PositionAttitudeTransform::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLPositionAttitudeTransform::updateModel(){
	  QReflect_PositionAttitudeTransform::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PositionAttitudeTransform_pmoc.cpp"
#endif



