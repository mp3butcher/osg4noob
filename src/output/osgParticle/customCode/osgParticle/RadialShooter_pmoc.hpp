#ifndef osgParticle_RadialShooter_customHPP
#define  osgParticle_RadialShooter_customHPP 1

//includes


#include <osgParticle/RadialShooter_pmoc.hpp>
#include <QObject>
#include <osgParticle/RadialShooter>

#include <osgParticle/Shooter_pmoc.hpp>
#include <osgParticle/RadialShooter_pmoc.hpp>
namespace osgParticle{
class  QMLRadialShooter: public QReflect_RadialShooter
{
Q_OBJECT
Q_PROPERTY(float minTheta READ minTheta WRITE minTheta NOTIFY minThetaChanged)
Q_PROPERTY(float maxTheta READ maxTheta WRITE maxTheta NOTIFY maxThetaChanged)
Q_PROPERTY(float minPhi READ minPhi WRITE minPhi NOTIFY minPhiChanged)
Q_PROPERTY(float maxPhi READ maxPhi WRITE maxPhi NOTIFY maxPhiChanged)
Q_PROPERTY(float minInitialSpeed READ minInitialSpeed WRITE minInitialSpeed NOTIFY minInitialSpeedChanged)
Q_PROPERTY(float maxInitialSpeed READ maxInitialSpeed WRITE maxInitialSpeed  NOTIFY maxInitialSpeedChanged)
public:

float minTheta()const{return _model->getThetaRange().minimum;}
void minTheta(float&v){
if( minTheta()!=v){

_model->setThetaRange(rangef(v,maxTheta()));
emit minThetaChanged(v);
}
}

float maxTheta()const{return _model->getThetaRange().maximum;}
void maxTheta(float&v){
if( maxTheta()!=v){

_model->setThetaRange(rangef(minTheta(),v));
emit maxThetaChanged(v);
}
}

float minPhi()const{return _model->getPhiRange().minimum;}
void minPhi(float&v){
if( minPhi()!=v){

_model->setPhiRange(rangef(v,maxPhi()));
emit minPhiChanged(v);
}
}

float maxPhi()const{return _model->getPhiRange().maximum;}
void maxPhi(float&v){
if( maxPhi()!=v){

_model->setPhiRange(rangef(minPhi(),v));
emit maxPhiChanged(v);
}
}

float minInitialSpeed()const{return _model->getInitialSpeedRange().minimum;}
void minInitialSpeed(float&v){
if( minInitialSpeed()!=v){

_model->setInitialSpeedRange(rangef(v,maxInitialSpeed()));
emit minInitialSpeedChanged(v);
}
}

float maxInitialSpeed()const{return _model->getInitialSpeedRange().maximum;}
void maxInitialSpeed(float&v){
if( maxInitialSpeed()!=v){

_model->setInitialSpeedRange(rangef(minInitialSpeed(),v));
emit maxInitialSpeedChanged(v);
}
}


public:
QMLRadialShooter(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();
 signals:
 void maxInitialSpeedChanged(float);
void minInitialSpeedChanged(float);
void maxPhiChanged(float);
void minPhiChanged(float);
void minThetaChanged(float);
void maxThetaChanged(float);
};

class   MetaQMLRadialShooter :public MetaQReflect_RadialShooter{};
}
  Q_DECLARE_METATYPE(osgParticle::QMLRadialShooter)


#endif //osgParticle_RadialShooter_customHPP

