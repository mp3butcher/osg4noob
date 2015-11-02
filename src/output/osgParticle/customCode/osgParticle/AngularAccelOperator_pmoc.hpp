#ifndef osgParticle_AngularAccelOperator_customHPP
#define  osgParticle_AngularAccelOperator_customHPP 1

//includes


#include <osgParticle/AngularAccelOperator_pmoc.hpp>
#include <QObject>
#include <osgParticle/AngularAccelOperator>

#include <osgParticle/Operator_pmoc.hpp>
#include <osgParticle/AngularAccelOperator_pmoc.hpp>
namespace osgParticle{
class  QMLAngularAccelOperator: public QReflect_AngularAccelOperator
{
Q_OBJECT
public:
QMLAngularAccelOperator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLAngularAccelOperator :public MetaQReflect_AngularAccelOperator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLAngularAccelOperator)


#endif //osgParticle_AngularAccelOperator_customHPP

