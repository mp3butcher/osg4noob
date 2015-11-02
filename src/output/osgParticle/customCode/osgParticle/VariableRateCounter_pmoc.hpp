#ifndef osgParticle_VariableRateCounter_customHPP
#define  osgParticle_VariableRateCounter_customHPP 1

//includes
#include <osgParticle/VariableRateCounter_pmoc.hpp>
#include <QObject>
#include <osgParticle/Counter_pmoc.hpp>
#include <osgParticle/VariableRateCounter>

#include <osgParticle/VariableRateCounter_pmoc.hpp>
namespace osgParticle{
class  QMLVariableRateCounter: public QReflect_VariableRateCounter
{
Q_OBJECT
public:
QMLVariableRateCounter(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVariableRateCounter :public MetaQReflect_VariableRateCounter{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLVariableRateCounter)


#endif //osgParticle_VariableRateCounter_customHPP

