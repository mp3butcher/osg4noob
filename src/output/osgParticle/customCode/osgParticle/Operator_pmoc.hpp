#ifndef osgParticle_Operator_customHPP
#define  osgParticle_Operator_customHPP 1

//includes


#include <osgParticle/Particle_pmoc.hpp>
#include <QObject>
#include <osgParticle/Operator_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osgParticle/Operator>

#include <osgParticle/Operator_pmoc.hpp>
namespace osgParticle{
class  QMLOperator: public QReflect_Operator
{
Q_OBJECT
public:
QMLOperator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLOperator :public MetaQReflect_Operator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLOperator)


#endif //osgParticle_Operator_customHPP

