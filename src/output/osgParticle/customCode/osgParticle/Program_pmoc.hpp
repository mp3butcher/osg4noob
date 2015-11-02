#ifndef osgParticle_Program_customHPP
#define  osgParticle_Program_customHPP 1

//includes


#include <osgParticle/Program_pmoc.hpp>
#include <QObject>
#include <osgParticle/ParticleProcessor_pmoc.hpp>
#include <osgParticle/Program>

#include <osgParticle/Program_pmoc.hpp>
namespace osgParticle{
class  QMLProgram: public QReflect_Program
{
Q_OBJECT
public:
QMLProgram(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};

class   MetaQMLProgram :public MetaQReflect_Program{};
}
  Q_DECLARE_METATYPE(osgParticle::QMLProgram)


#endif //osgParticle_Program_customHPP

