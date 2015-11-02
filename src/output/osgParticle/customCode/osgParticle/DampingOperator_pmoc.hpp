#ifndef osgParticle_DampingOperator_customHPP
#define  osgParticle_DampingOperator_customHPP 1

//includes


#include <osgParticle/DampingOperator_pmoc.hpp>
#include <QObject>
#include <osgParticle/DampingOperator>

#include <osgParticle/Operator_pmoc.hpp>
#include <osgParticle/DampingOperator_pmoc.hpp>
namespace osgParticle{
class  QMLDampingOperator: public QReflect_DampingOperator
{
Q_OBJECT
public:
QMLDampingOperator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDampingOperator :public MetaQReflect_DampingOperator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLDampingOperator)


#endif //osgParticle_DampingOperator_customHPP

