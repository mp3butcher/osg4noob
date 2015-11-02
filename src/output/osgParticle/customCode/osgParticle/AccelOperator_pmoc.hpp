#ifndef osgParticle_AccelOperator_customHPP
#define  osgParticle_AccelOperator_customHPP 1

//includes


#include <osgParticle/AccelOperator_pmoc.hpp>
#include <QObject>
#include <osgParticle/AccelOperator>

#include <osgParticle/Operator_pmoc.hpp>
#include <osgParticle/AccelOperator_pmoc.hpp>
namespace osgParticle{
class  QMLAccelOperator: public QReflect_AccelOperator
{
Q_OBJECT
public:
QMLAccelOperator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLAccelOperator :public MetaQReflect_AccelOperator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLAccelOperator)


#endif //osgParticle_AccelOperator_customHPP

