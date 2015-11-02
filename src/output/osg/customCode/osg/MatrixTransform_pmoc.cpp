#include <osg/MatrixTransform>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/MatrixTransform_pmoc.hpp>
#include <QColor>
using namespace pmoc;

using namespace osg;

#define VECTOR3DTOSOG(XXX) osg::Vec3( (XXX).x(),(XXX).y(),(XXX).z())
void osg::QMLMatrixTransform::setrotation(QColor&color)
{
    if(_rotation != color)
    {
        _rotation = color;
         osg::Matrixf mat,mats;

        /*if self._creationrecord:mat=osgBullet.asOsgMatrix(self._btbody.getWorldTransform())
        else :mat=self.mtrans.getMatrix()*/

        mat.setTrans(VECTOR3DTOSOG( _position));
        mats.makeScale(VECTOR3DTOSOG( _scale));
        osg::Quat osgq(_rotation.redF(),_rotation.greenF(),_rotation.blueF(),_rotation.alphaF());
        mat.setRotate(osgq);
        _model->setMatrix(mats*mat);
        //if self._creationrecord:self._btbody.setWorldTransform(osgBullet.asBtTransform(mat))

        emit rotationChanged(_rotation);
    }
}
QColor osg::QMLMatrixTransform::getrotation()const
{
    return _rotation;
}
void osg::QMLMatrixTransform::setposition(QVector3D&color)
{
    if(_position != color)
    {
        _position = color;
            osg::Matrixf mat,mats;

        /*if self._creationrecord:mat=osgBullet.asOsgMatrix(self._btbody.getWorldTransform())
        else :mat=self.mtrans.getMatrix()*/

        mat.setTrans(VECTOR3DTOSOG( _position));
        mats.makeScale(VECTOR3DTOSOG( _scale));
        osg::Quat osgq(_rotation.redF(),_rotation.greenF(),_rotation.blueF(),_rotation.alphaF());
        mat.setRotate(osgq);
        _model->setMatrix(mats*mat);
        //if self._creationrecord:self._btbody.setWorldTransform(osgBullet.asBtTransform(mat))

        emit positionChanged(_position);
    }
}
QVector3D osg::QMLMatrixTransform::getposition()const
{
    return _position;
}
void osg::QMLMatrixTransform::setscale(QVector3D&color)
{
    if(_scale != color)
    {
        _scale = color;
        osg::Matrixf mat,mats;

        /*if self._creationrecord:mat=osgBullet.asOsgMatrix(self._btbody.getWorldTransform())
        else :mat=self.mtrans.getMatrix()*/

        mat.setTrans(VECTOR3DTOSOG( _position));
        mats.makeScale(VECTOR3DTOSOG( _scale));
        osg::Quat osgq(_rotation.redF(),_rotation.greenF(),_rotation.blueF(),_rotation.alphaF());
        mat.setRotate(osgq);
        _model->setMatrix(mats*mat);
        //if self._creationrecord:self._btbody.setWorldTransform(osgBullet.asBtTransform(mat))

        emit scaleChanged(_scale);
    }
}
QVector3D osg::QMLMatrixTransform::getscale()const
{
    return _scale;
}

osg::QMLMatrixTransform::QMLMatrixTransform(pmoc::Instance *i,QObject* parent):QReflect_MatrixTransform(i,parent){
//custom initializations
}
QQuickItem* osg::QMLMatrixTransform::connect2View(QQuickItem*i){
	this->_view=QReflect_MatrixTransform::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here


updateModel();

return this->_view;
}
void  osg::QMLMatrixTransform::updateModel(){
	  QReflect_MatrixTransform::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


    const osg::Matrixf &mat=_model->getMatrix();
    osg::Vec3 osgt=mat.getTrans();
    osg::Quat osgq=mat.getRotate();
    osg::Vec3 osgs=mat.getScale();

    _position=QVector3D(osgt.x(),osgt.y(),osgt.z());
    _rotation=QColor(osgq.x(),osgq.y(),osgq.z(),osgq.w());
    _scale=QVector3D(osgs.x(),osgs.y(),osgs.z());
    emit positionChanged(_position);
    emit rotationChanged(_rotation);
    emit scaleChanged(_scale);

}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_MatrixTransform_pmoc.cpp"
#endif



