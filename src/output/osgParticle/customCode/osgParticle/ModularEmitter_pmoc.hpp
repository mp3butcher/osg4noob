#ifndef osgParticle_ModularEmitter_customHPP
#define  osgParticle_ModularEmitter_customHPP 1

//includes


#include <osgParticle/ModularEmitter_pmoc.hpp>
#include <QObject>
namespace osgParticle{
class QReflect_Counter;
			} ;
namespace osgParticle{
class QReflect_Placer;
			} ;
namespace osgParticle{
class QReflect_Shooter;
			} ;
#include <osgParticle/Counter>
#include <osgParticle/Counter_pmoc.hpp>
#include <osgParticle/Emitter_pmoc.hpp>
#include <osgParticle/ModularEmitter>

#include <osgParticle/Placer>
#include <osgParticle/Placer_pmoc.hpp>
#include <osgParticle/Shooter>
#include <osgParticle/Shooter_pmoc.hpp>
#include <osgParticle/ModularEmitter_pmoc.hpp>
namespace osgParticle{
class  QMLModularEmitter: public QReflect_ModularEmitter
{
Q_OBJECT
public:
QMLModularEmitter(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLModularEmitter :public MetaQReflect_ModularEmitter{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLModularEmitter)


#endif //osgParticle_ModularEmitter_customHPP

