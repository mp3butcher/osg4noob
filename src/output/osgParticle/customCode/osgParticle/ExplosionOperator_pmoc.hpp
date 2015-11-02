#ifndef osgParticle_ExplosionOperator_customHPP
#define  osgParticle_ExplosionOperator_customHPP 1

//includes


#include <osgParticle/ExplosionOperator_pmoc.hpp>
#include <QObject>
#include <osgParticle/ExplosionOperator>

#include <osgParticle/Operator_pmoc.hpp>
#include <osgParticle/ExplosionOperator_pmoc.hpp>
namespace osgParticle{
class  QMLExplosionOperator: public QReflect_ExplosionOperator
{
Q_OBJECT
public:
QMLExplosionOperator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLExplosionOperator :public MetaQReflect_ExplosionOperator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLExplosionOperator)


#endif //osgParticle_ExplosionOperator_customHPP

