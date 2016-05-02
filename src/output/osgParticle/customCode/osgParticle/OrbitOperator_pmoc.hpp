#ifndef osgParticle_OrbitOperator_customHPP
#define  osgParticle_OrbitOperator_customHPP 1

//includes


#include <osgParticle/OrbitOperator_pmoc.hpp>
#include <QObject>
#include <osgParticle/Operator_pmoc.hpp>
#include <osgParticle/OrbitOperator>

#include <osgParticle/OrbitOperator_pmoc.hpp>
namespace osgParticle{
class  QMLOrbitOperator: public QReflect_OrbitOperator
{
Q_OBJECT
public:
QMLOrbitOperator(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLOrbitOperator :public MetaQReflect_OrbitOperator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLOrbitOperator)


#endif //osgParticle_OrbitOperator_customHPP

