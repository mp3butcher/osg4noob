#ifndef osgParticle_AngularDampingOperator_customHPP
#define  osgParticle_AngularDampingOperator_customHPP 1

//includes


#include <osgParticle/AngularDampingOperator_pmoc.hpp>
#include <QObject>
#include <osgParticle/AngularDampingOperator>

#include <osgParticle/Operator_pmoc.hpp>
#include <osgParticle/AngularDampingOperator_pmoc.hpp>
namespace osgParticle{
class  QMLAngularDampingOperator: public QReflect_AngularDampingOperator
{
Q_OBJECT
public:
QMLAngularDampingOperator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLAngularDampingOperator :public MetaQReflect_AngularDampingOperator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLAngularDampingOperator)


#endif //osgParticle_AngularDampingOperator_customHPP

