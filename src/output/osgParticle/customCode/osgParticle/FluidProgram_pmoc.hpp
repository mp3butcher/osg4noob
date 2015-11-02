#ifndef osgParticle_FluidProgram_customHPP
#define  osgParticle_FluidProgram_customHPP 1

//includes


#include <osgParticle/FluidProgram_pmoc.hpp>
#include <QObject>
#include <osgParticle/FluidProgram>

#include <osgParticle/Program_pmoc.hpp>
#include <osgParticle/FluidProgram_pmoc.hpp>
#include <QVector3D>
namespace osgParticle{
class  QMLFluidProgram: public QReflect_FluidProgram
{
Q_OBJECT
Q_PROPERTY(QVector3D windDirection READ windDirection WRITE windDirection NOTIFY windDirectionChanged)
Q_PROPERTY(QVector3D acceleration READ acceleration WRITE acceleration NOTIFY accelerationChanged)
public:
QMLFluidProgram(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
QVector3D windDirection()const{return QVector3D(_model->getWind().x(),_model->getWind().y(),_model->getWind().z());}
QVector3D acceleration()const{return QVector3D(_model->getAcceleration().x(),_model->getAcceleration().y(),_model->getAcceleration().z());}
void windDirection(QVector3D&v){
if( windDirection()!=v){

_model->setWind(osg::Vec3(v.x(),v.y(),v.z()));
emit windDirectionChanged(v);
}
}
void acceleration(QVector3D&v){
if( acceleration()!=v){

_model->setAcceleration(osg::Vec3(v.x(),v.y(),v.z()));
emit accelerationChanged(v);
}
}

public slots:
 virtual void  updateModel();

 signals:
 void accelerationChanged(QVector3D);
 void windDirectionChanged(QVector3D);

};

class   MetaQMLFluidProgram :public MetaQReflect_FluidProgram{};
}
  Q_DECLARE_METATYPE(osgParticle::QMLFluidProgram)


#endif //osgParticle_FluidProgram_customHPP

