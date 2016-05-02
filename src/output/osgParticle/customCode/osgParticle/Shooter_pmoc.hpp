#ifndef osgParticle_Shooter_customHPP
#define  osgParticle_Shooter_customHPP 1

//includes
#include <osgParticle/Shooter_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osgParticle/Shooter>

#include <osgParticle/Shooter_pmoc.hpp>
namespace osgParticle{
class  QMLShooter: public QReflect_Shooter
{
Q_OBJECT
public:
QMLShooter(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLShooter :public MetaQReflect_Shooter{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLShooter)


#endif //osgParticle_Shooter_customHPP

