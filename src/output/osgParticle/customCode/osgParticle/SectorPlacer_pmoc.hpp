#ifndef osgParticle_SectorPlacer_customHPP
#define  osgParticle_SectorPlacer_customHPP 1

//includes


#include <osgParticle/SectorPlacer_pmoc.hpp>
#include <QObject>
#include <osgParticle/CenteredPlacer_pmoc.hpp>
#include <osgParticle/SectorPlacer>

#include <osgParticle/SectorPlacer_pmoc.hpp>
namespace osgParticle{
class  QMLSectorPlacer: public QReflect_SectorPlacer
{
Q_OBJECT

Q_PROPERTY(float minRadius READ minRadius WRITE minRadius NOTIFY minRadiusChanged)
Q_PROPERTY(float maxRadius READ maxRadius WRITE maxRadius NOTIFY maxRadiusChanged)
Q_PROPERTY(float minPhi READ minPhi WRITE minPhi NOTIFY minPhiChanged)
Q_PROPERTY(float maxPhi READ maxPhi WRITE maxPhi NOTIFY maxPhiChanged)
public:

float minRadius()const{return _model->getRadiusRange().minimum;}
void minRadius(float&v){
if( minRadius()!=v){

_model->setRadiusRange(rangef(v,maxRadius()));
emit minRadiusChanged(v);
}
}

float maxRadius()const{return _model->getRadiusRange().maximum;}
void maxRadius(float&v){
if( maxRadius()!=v){

_model->setRadiusRange(rangef(minRadius(),v));
emit maxRadiusChanged(v);
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
public:
QMLSectorPlacer(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();
 signals:
 void minPhiChanged(float);
 void maxPhiChanged(float);
 void minRadiusChanged(float);
 void maxRadiusChanged(float);
};

class   MetaQMLSectorPlacer :public MetaQReflect_SectorPlacer{};
}
  Q_DECLARE_METATYPE(osgParticle::QMLSectorPlacer)


#endif //osgParticle_SectorPlacer_customHPP

