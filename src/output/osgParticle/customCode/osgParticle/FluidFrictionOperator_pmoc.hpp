#ifndef osgParticle_FluidFrictionOperator_customHPP
#define  osgParticle_FluidFrictionOperator_customHPP 1

//includes


#include <osgParticle/Particle_pmoc.hpp>
#include <QObject>
#include <osgParticle/FluidFrictionOperator_pmoc.hpp>
#include <QObject>
#include <osgParticle/FluidFrictionOperator>

#include <osgParticle/Operator_pmoc.hpp>
#include <osgParticle/FluidFrictionOperator_pmoc.hpp>
namespace osgParticle{
class  QMLFluidFrictionOperator: public QReflect_FluidFrictionOperator
{
Q_OBJECT
public:
QMLFluidFrictionOperator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLFluidFrictionOperator :public MetaQReflect_FluidFrictionOperator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLFluidFrictionOperator)


#endif //osgParticle_FluidFrictionOperator_customHPP

