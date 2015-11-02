#ifndef osgParticle_ConstantRateCounter_customHPP
#define  osgParticle_ConstantRateCounter_customHPP 1

//includes
#include <osgParticle/ConstantRateCounter_pmoc.hpp>
#include <QObject>
#include <osgParticle/ConstantRateCounter>

#include <osgParticle/Counter_pmoc.hpp>
#include <osgParticle/ConstantRateCounter_pmoc.hpp>
namespace osgParticle{
class  QMLConstantRateCounter: public QReflect_ConstantRateCounter
{
Q_OBJECT
public:
QMLConstantRateCounter(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLConstantRateCounter :public MetaQReflect_ConstantRateCounter{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLConstantRateCounter)


#endif //osgParticle_ConstantRateCounter_customHPP

