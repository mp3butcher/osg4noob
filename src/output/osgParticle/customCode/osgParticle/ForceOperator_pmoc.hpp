#ifndef osgParticle_ForceOperator_customHPP
#define  osgParticle_ForceOperator_customHPP 1

//includes


#include <osgParticle/ForceOperator_pmoc.hpp>
#include <QObject>
#include <osgParticle/ForceOperator>

#include <osgParticle/Operator_pmoc.hpp>
#include <osgParticle/ForceOperator_pmoc.hpp>
namespace osgParticle{
class  QMLForceOperator: public QReflect_ForceOperator
{
Q_OBJECT
public:
QMLForceOperator(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLForceOperator :public MetaQReflect_ForceOperator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLForceOperator)


#endif //osgParticle_ForceOperator_customHPP

