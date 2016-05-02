#ifndef osgParticle_SmokeEffect_customHPP
#define  osgParticle_SmokeEffect_customHPP 1

//includes


#include <osgParticle/SmokeEffect_pmoc.hpp>
#include <QObject>
#include <osgParticle/ParticleEffect_pmoc.hpp>
#include <osgParticle/SmokeEffect>

#include <osgParticle/SmokeEffect_pmoc.hpp>
namespace osgParticle{
class  QMLSmokeEffect: public QReflect_SmokeEffect
{
Q_OBJECT
public:
QMLSmokeEffect(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLSmokeEffect :public MetaQReflect_SmokeEffect{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLSmokeEffect)


#endif //osgParticle_SmokeEffect_customHPP

