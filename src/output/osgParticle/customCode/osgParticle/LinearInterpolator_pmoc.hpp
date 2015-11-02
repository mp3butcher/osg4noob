#ifndef osgParticle_LinearInterpolator_customHPP
#define  osgParticle_LinearInterpolator_customHPP 1

//includes
#include <osgParticle/LinearInterpolator_pmoc.hpp>
#include <QObject>
#include <osgParticle/Interpolator_pmoc.hpp>
#include <osgParticle/LinearInterpolator>

#include <osgParticle/LinearInterpolator_pmoc.hpp>
namespace osgParticle{
class  QMLLinearInterpolator: public QReflect_LinearInterpolator
{
Q_OBJECT
public:
QMLLinearInterpolator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLLinearInterpolator :public MetaQReflect_LinearInterpolator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLLinearInterpolator)


#endif //osgParticle_LinearInterpolator_customHPP

