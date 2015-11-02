#ifndef osgParticle_FireEffect_customHPP
#define  osgParticle_FireEffect_customHPP 1

//includes


#include <osgParticle/FireEffect_pmoc.hpp>
#include <QObject>
#include <osgParticle/FireEffect>

#include <osgParticle/ParticleEffect_pmoc.hpp>
#include <osgParticle/FireEffect_pmoc.hpp>
namespace osgParticle{
class  QMLFireEffect: public QReflect_FireEffect
{
Q_OBJECT
public:
QMLFireEffect(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLFireEffect :public MetaQReflect_FireEffect{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLFireEffect)


#endif //osgParticle_FireEffect_customHPP

