#ifndef osgParticle_Placer_customHPP
#define  osgParticle_Placer_customHPP 1

//includes
#include <osgParticle/Placer_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osgParticle/Placer>

#include <osgParticle/Placer_pmoc.hpp>
namespace osgParticle{
class  QMLPlacer: public QReflect_Placer
{
Q_OBJECT
public:
QMLPlacer(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPlacer :public MetaQReflect_Placer{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLPlacer)


#endif //osgParticle_Placer_customHPP

