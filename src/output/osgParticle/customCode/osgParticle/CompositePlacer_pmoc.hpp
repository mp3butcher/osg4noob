#ifndef osgParticle_CompositePlacer_customHPP
#define  osgParticle_CompositePlacer_customHPP 1

//includes


#include <osgParticle/CompositePlacer_pmoc.hpp>
#include <QObject>
#include <osgParticle/CompositePlacer>

#include <osgParticle/Placer_pmoc.hpp>
#include <osgParticle/CompositePlacer_pmoc.hpp>
namespace osgParticle{
class  QMLCompositePlacer: public QReflect_CompositePlacer
{
Q_OBJECT
public:
QMLCompositePlacer(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCompositePlacer :public MetaQReflect_CompositePlacer{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLCompositePlacer)


#endif //osgParticle_CompositePlacer_customHPP

