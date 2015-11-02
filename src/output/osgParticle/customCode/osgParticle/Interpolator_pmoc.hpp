#ifndef osgParticle_Interpolator_customHPP
#define  osgParticle_Interpolator_customHPP 1

//includes
#include <osgParticle/Interpolator_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osgParticle/Interpolator>

#include <osgParticle/Interpolator_pmoc.hpp>
namespace osgParticle{
class  QMLInterpolator: public QReflect_Interpolator
{
Q_OBJECT
public:
QMLInterpolator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLInterpolator :public MetaQReflect_Interpolator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLInterpolator)


#endif //osgParticle_Interpolator_customHPP

